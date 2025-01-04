// Copyright Narrative Tools 2024. 

#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "Components/TeamMarkerComponent.h"
#include "InventoryComponent.h"
#include "AI/NPCDefinition.h"
#include "AI/NPCInteractable.h"
#include "AI/NarrativeNPCController.h"
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
		if (AbilitySystemComponent)
		{
			AbilitySystemComponent->InitAbilityActorInfo(this, this);
			InitializeAttributes();
			AddStartupEffects();
			AddDefaultAbilities();
		}

		if (InventoryComponent)
		{
			//InventoryComponent->GiveDefaultItems();
		}

		//NPC subsystem should have set this prior to beginplay 
		//check(IsValid(NPCData));

		if (IsValid(NPCData))
		{
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

	}

	Super::BeginPlay();
}

void ANarrativeNPCCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ANarrativeNPCCharacter, NPCData, COND_InitialOnly);
}

ETeamAttitude::Type ANarrativeNPCCharacter::GetTeamAttitudeTowards(const AActor& Other) const
{
	if(const INarrativeTeamAgentInterface* OtherTeamAgent = Cast<const INarrativeTeamAgentInterface>(&Other))
	{
		if (NPCData && NPCData->Faction)
		{
			if (Hostiles.Contains(&Other))
			{
				return ETeamAttitude::Hostile;
			}

			ENarrativeFactionID OurFaction = NPCData->Faction->FactionID;
			ENarrativeFactionID TheirFaction = static_cast<ENarrativeFactionID>(OtherTeamAgent->GetGenericTeamId().GetId());

			if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
			{
				return GS->GetAttitudeTowards(OurFaction, TheirFaction);
			}

		}
	}

	return ETeamAttitude::Neutral;
}

FGenericTeamId ANarrativeNPCCharacter::GetGenericTeamId() const
{
	if (NPCData && NPCData->Faction)
	{
		return FGenericTeamId(static_cast<uint8>(NPCData->Faction->FactionID));
	}

	return FGenericTeamId::NoTeam;
}

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

void ANarrativeNPCCharacter::OnRep_NPCData()
{
	if (NPCData)
	{


	}
}

void ANarrativeNPCCharacter::SetNPCDefinition(class UNPCDefinition* NewNPCData)
{
	if (IsValid(NewNPCData))
	{
		NPCData = NewNPCData;
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
