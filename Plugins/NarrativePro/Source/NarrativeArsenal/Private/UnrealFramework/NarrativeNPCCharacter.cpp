// Copyright Narrative Tools 2024. 

#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "Interaction/NPCInteractionComponent.h"
#include "Components/TeamMarkerComponent.h"
#include "InventoryComponent.h"
#include "AI/NPCDefinition.h"
#include "AI/NPCInteractable.h"
#include "AI/NarrativeNPCController.h"
#include "AI/Activities/NPCActivityComponent.h"
#include "Teams/FactionDefinition.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "NavigationMarkerComponent.h"
#include <Net/UnrealNetwork.h>
#include "GameplayEffectExtension.h"
#include "NarrativeArsenal.h"
#include <Runtime/AIModule/Classes/Perception/AISense_Damage.h>
#include "UnrealFramework/NarrativeGameState.h"
#include "Engine/World.h"
#include "Subsystems/NarrativeSaveSubsystem.h"

ANarrativeNPCCharacter::ANarrativeNPCCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UNarrativeAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UNarrativeAttributeSetBase>(TEXT("AttributeSetBase"));
	InventoryComponent = CreateDefaultSubobject<UNarrativeInventoryComponent>("InventoryComponent");	

	TradingInventoryComponent = CreateDefaultSubobject<UNarrativeInventoryComponent>("TradingInventoryComponent");
	TradingInventoryComponent->SetIsVendor(true);

	NPCInteractableComponent = CreateDefaultSubobject<UNPCInteractable>(TEXT("NPCInteractable"));

	//We'll activate this only when our NPC data is ready since it depends on our faction being set 
	if (MarkerComponent)
	{
		MarkerComponent->SetAutoActivate(false);
	}

	bAggressiveOnTakeDamage = true;
}

void ANarrativeNPCCharacter::BeginPlay()
{

	//Can be asked to destroy before beginplay by subsystem, so want to check 
	if (IsValid(this))
	{
		if (IsValid(NPCData))
		{
			if (HasAuthority())
			{
				NPCLevel = FMath::RandRange(NPCData->LevelRange.GetLowerBoundValue(), NPCData->LevelRange.GetUpperBoundValue());
			}

			NPCFactions = NPCData->DefaultFactions;

			if (MarkerComponent)
			{
				MarkerComponent->DefaultMarkerSettings.LocationDisplayName = NPCData->NPCName;
				MarkerComponent->SetActive(true, true);
			}

			if (InventoryComponent)
			{
				InventoryComponent->SetInventoryFriendlyName(NPCData->NPCName);
			}

			if (NPCData->bIsVendor && TradingInventoryComponent)
			{
				if (!NPCData->ShopFriendlyName.IsEmptyOrWhitespace())
				{
					TradingInventoryComponent->SetInventoryFriendlyName(!NPCData->ShopFriendlyName.IsEmptyOrWhitespace() ? NPCData->ShopFriendlyName : NPCData->NPCName);
				}
			}

			if (NPCInteractableComponent)
			{
				NPCInteractableComponent->SetInteractableNameText(NPCData->NPCName);
			}
		}

		//Call this after NPCData sets our level since abilities use GetCharacterLevel() 
		if (AbilitySystemComponent)
		{
			AbilitySystemComponent->InitAbilityActorInfo(this, this);
			InitializeAttributes();
			AddStartupEffects();
			AddDefaultAbilities();
		}
	}

	Super::BeginPlay();
}

void ANarrativeNPCCharacter::SpawnDefaultController()
{
	Super::SpawnDefaultController();

	//If we have a valid controller give it a readable name so designers know which AIPC is which in editor - disabled for now as didnt fix BTtree debugger which was intention 
	//Turns out the debugger annoyingly calls GetName which we have no way of overriding 
	if (Controller && NPCData)
	{
		//FString Str = "NPCController_" + NPCData->NPCID.ToString();
		//Controller->SetActorLabel("NPCController_" + NPCData->NPCID.ToString());
	}
}

void ANarrativeNPCCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ANarrativeNPCCharacter, NPCData, COND_InitialOnly);
	DOREPLIFETIME(ANarrativeNPCCharacter, NPCLevel);
	DOREPLIFETIME(ANarrativeNPCCharacter, NPCFactions);
}

ETeamAttitude::Type ANarrativeNPCCharacter::GetTeamAttitudeTowards(const AActor& Other) const
{
	if(const INarrativeTeamAgentInterface* OtherTeamAgent = Cast<const INarrativeTeamAgentInterface>(&Other))
	{
		if (NPCFactions.IsValid())
		{
			if (ShouldBeAggressiveTowardsTarget(&Other))
			{
				return ETeamAttitude::Hostile;
			}

			if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
			{
				FGameplayTagContainer TheirFactions = OtherTeamAgent->GetFactions();

				return GS->GetFactionsAttitudeTowardsFactions(NPCFactions, TheirFactions);
			}

		}
	}

	return ETeamAttitude::Neutral;
}

FGameplayTagContainer ANarrativeNPCCharacter::GetFactions() const
{
	return NPCFactions;
}

void ANarrativeNPCCharacter::AddFaction(const FGameplayTag& Faction)
{
	NPCFactions.AddTag(Faction);
}

void ANarrativeNPCCharacter::RemoveFaction(const FGameplayTag& Faction)
{
	NPCFactions.RemoveTag(Faction);
}

//FGenericTeamId ANarrativeNPCCharacter::GetGenericTeamId() const
//{
//	if (NPCFaction.IsValid())
//	{
//		if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
//		{
//			return FGenericTeamId(static_cast<uint8>(GS->FactionToIntID(NPCFaction)));
//		}
//	}
//
//	return FGenericTeamId::NoTeam;
//}

void ANarrativeNPCCharacter::DamagedBy(AController* DamagerController, const float Damage)
{
	if (DamagerController)
	{
		if (ANarrativeNPCController* OurController = Cast<ANarrativeNPCController>(GetController()))
		{
			APawn* AttackerPawn = DamagerController->GetPawn();
			UAISense_Damage::ReportDamageEvent(this, OurController, AttackerPawn, Damage, AttackerPawn->GetActorLocation(), FVector::ZeroVector);
		}
	}
}

int32 ANarrativeNPCCharacter::GetCharacterLevel() const
{
	return NPCLevel;
}

class UCharacterDefinition* ANarrativeNPCCharacter::GetCharacterDefinition() const
{
	return NPCData;
}

FString ANarrativeNPCCharacter::GetHumanReadableName() const
{
	if (NPCData)
	{
		return NPCData->NPCName.ToString();
	}

	return Super::GetHumanReadableName();
}

class UNarrativeInteractionComponent* ANarrativeNPCCharacter::GetInteractionComponent() const
{
	if (ANarrativeNPCController* OurController = Cast<ANarrativeNPCController>(GetController()))
	{
		return OurController->GetInteractionComponent();
	}

	return nullptr;
}

void ANarrativeNPCCharacter::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	Super::HandleDeath_Implementation(KilledActor, KilledActorASC);

	if (NPCInteractableComponent)
	{
		NPCInteractableComponent->SetInteractableActionText(NSLOCTEXT("NPCCharacter", "LootInteractText", "Loot"));
	}

	//Dead NPCs should never save, remove this NPCs record from the save system. TODO think about whether record could be added back later accidentally? 
	if (UNarrativeSaveSubsystem* SaveSub = GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
	{
		SaveSub->RemoveSingleActor(this);
	}
}

void ANarrativeNPCCharacter::Load_Implementation()
{
	if (!Controller)
	{
		SpawnDefaultController();
	}

	//Load the controller as a subactor of the NPC
	if (UNarrativeSaveSubsystem* SaveSub = GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
	{
		SaveSub->LoadActorFromRecord(Controller, AICRecord);
	}
}

void ANarrativeNPCCharacter::PrepareForSave_Implementation()
{
	//Store our AIC in a record 
	if (UNarrativeSaveSubsystem* SaveSub = GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
	{
		SaveSub->CreateActorRecord(Controller, AICRecord);
	}
}

void ANarrativeNPCCharacter::LoadNewCharacter_Implementation()
{
	//For now we just do it all in BP - its lightweight and more readable and BP handles async loads more nicely  
}

void ANarrativeNPCCharacter::OnRep_NPCData()
{
	if (NPCData)
	{
		OnDefinitionSet(NPCData);
	}
}

bool ANarrativeNPCCharacter::ShouldBeAggressiveTowardsTarget_Implementation(const class AActor* Target) const
{
	return Hostiles.Contains(Target);
}

FText ANarrativeNPCCharacter::GetNPCName() const
{
	if (NPCData)
	{
		return NPCData->NPCName;
	}

	return FText::GetEmpty();
}

void ANarrativeNPCCharacter::SetNPCDefinition(class UNPCDefinition* NewNPCData)
{
	if (IsValid(NewNPCData))
	{
		NPCData = NewNPCData;
		OnRep_NPCData();
	}
}

void ANarrativeNPCCharacter::PlayTaggedDialogue(FGameplayTag Tag, AActor* DialogueInstigator)
{
	if (IsValid(NPCData))
	{
		for (auto& TaggedDialogue : TaggedDialogues)
		{
			if (TaggedDialogue.Tag == Tag)
			{
				if (IsValid(AbilitySystemComponent))
				{
					const bool bHasRequiredTags = AbilitySystemComponent->HasAllMatchingGameplayTags(TaggedDialogue.RequiredTags);
					const bool bHasAnyBlockedTags = AbilitySystemComponent->HasAnyMatchingGameplayTags(TaggedDialogue.BlockedTags);
					const bool bHasCooldown = FMath::IsNearlyZero(TaggedDialogue.LastPlayTime) || GetWorld()->TimeSince(TaggedDialogue.LastPlayTime) > TaggedDialogue.Cooldown;
					const bool bRandChance = FMath::FRand() <= TaggedDialogue.Chance;
					const bool bPassesDistance = TaggedDialogue.MaxDistance > 0.f && IsValid(DialogueInstigator) ? GetDistanceTo(DialogueInstigator) < TaggedDialogue.MaxDistance : true;

					if (bHasRequiredTags && !bHasAnyBlockedTags && bHasCooldown && bRandChance && bPassesDistance)
					{
						ExecutePlayTaggedDialogue(TaggedDialogue, DialogueInstigator);
						TaggedDialogue.LastPlayTime = GetWorld()->GetTimeSeconds();
					}
				}
			}
		}
	}

}

class UNPCActivityComponent* ANarrativeNPCCharacter::GetActivityComponent() const
{
	if (ANarrativeNPCController* OurController = Cast<ANarrativeNPCController>(GetController()))
	{
		return OurController->GetActivityComponent();
	}

	return nullptr; 
}

ANarrativeNPCController* ANarrativeNPCCharacter::GetNPCController() const
{
	return Cast<ANarrativeNPCController>(GetController());
}

void ANarrativeNPCCharacter::OnRep_NPCFactions()
{
	//If our factions change our marker needs to update. 
	if (MarkerComponent)
	{
		MarkerComponent->RefreshMarker();
	}
}
