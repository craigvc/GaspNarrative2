// Copyright Narrative Tools 2024. 


#include "AI/NarrativeNPCController.h"
#include "AI/NPCDefinition.h"
#include "AI/Activities/NPCActivityComponent.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "Interaction/NPCInteractionComponent.h"
#include <Engine/Canvas.h>
#include <DisplayDebugHelpers.h>

ANarrativeNPCController::ANarrativeNPCController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NPCActivityComponent = CreateDefaultSubobject<UNPCActivityComponent>(TEXT("NPCActivityComponent"));
	InteractionComponent = CreateDefaultSubobject<UNPCInteractionComponent>(TEXT("InteractionComponent"));
}

class UAbilitySystemComponent* ANarrativeNPCController::GetAbilitySystemComponent() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetAbilitySystemComponent();
	}

	return nullptr;
}

FGameplayTagContainer ANarrativeNPCController::GetFactions() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetFactions();
	}

	return FGameplayTagContainer::EmptyContainer;
}

void ANarrativeNPCController::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		NCharacter->GetOwnedGameplayTags(TagContainer);
	}
}

bool ANarrativeNPCController::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasMatchingGameplayTag(TagToCheck);
	}
	return false; 
}

bool ANarrativeNPCController::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAllMatchingGameplayTags(TagContainer);
	}
	return false; 
}

bool ANarrativeNPCController::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAnyMatchingGameplayTags(TagContainer);
	}
	return false; 
}

void ANarrativeNPCController::Destroyed()
{
	Super::Destroyed();

	//If we're destroyed tell token granter to return token. 
	ReturnToken();
}

void ANarrativeNPCController::DisplayDebug(class UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;
	DisplayDebugManager.SetDrawColor(FColor(255, 255, 0));

	if (ANarrativeNPCCharacter* NPCChar = GetControlledNPC())
	{
		if (UNPCActivityComponent* ActivityComp = NPCChar->GetActivityComponent())
		{
			DisplayDebugManager.DrawString("- GOALS -");

			for (auto& GoalKVP : ActivityComp->Goals)
			{
				for (auto& Goal : GoalKVP.Value.Goals)
				{
					if (Goal)
					{
						FString GoalString = Goal->GetDebugString();

						DisplayDebugManager.DrawString(*GoalString);
					}
				}
			}

			if (ActivityComp->CurrentActivity)
			{
				DisplayDebugManager.DrawString("CURRENT ACTIVITY: " + ActivityComp->CurrentActivity->GetActivityName().ToString());
			}
			else
			{
				DisplayDebugManager.DrawString("CURRENT ACTIVITY: NONE");
			}

		}
	}

	if (DebugDisplay.IsDisplayOn("Factions"))
	{
		FGameplayTagContainer Factions = GetFactions();

		if (Factions.IsValid())
		{
			DisplayDebugManager.DrawString(FString::Printf(TEXT("Factions: %s"), *Factions.ToString()));
		}
	}
	
}

void ANarrativeNPCController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);

	if (ANarrativeNPCCharacter* NChar = Cast<ANarrativeNPCCharacter>(InPawn))
	{
		if (UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(NChar->GetAbilitySystemComponent()))
		{
			NASC->OnDied.AddUniqueDynamic(this, &ThisClass::HandleDeath);
		}
	}
}

#if ENABLE_VISUAL_LOG


void ANarrativeNPCController::GrabDebugSnapshot(FVisualLogEntry* Snapshot) const
{
	Super::GrabDebugSnapshot(Snapshot);

	if (ANarrativeNPCCharacter* NPC = GetControlledNPC())
	{
		if (UNPCActivityComponent* NPCA = NPC->GetActivityComponent())
		{
			NPCA->DescribeSelfToVisLog(Snapshot);
		}
	}
}

#endif 

class UBehaviorTree* ANarrativeNPCController::GetCurrentTree()
{
	if (UBehaviorTreeComponent* BTComp = Cast<UBehaviorTreeComponent>(BrainComponent))
	{
		return BTComp->GetCurrentTree();
	}

	return nullptr; 
}

void ANarrativeNPCController::StopBehaviorTree()
{
	CleanupBrainComponent();
}

class UNPCDefinition* ANarrativeNPCController::GetNPCData() const
{
	if (ANarrativeNPCCharacter* NPCChar = Cast<ANarrativeNPCCharacter>(GetPawn()))
	{
		return NPCChar->GetNPCData();
	}

	return nullptr;
}

FText ANarrativeNPCController::GetNPCName() const
{
	if (UNPCDefinition* NPCD = GetNPCData())
	{
		return NPCD->NPCName;
	}

	return FText::GetEmpty();
}

bool ANarrativeNPCController::IsAlive() const
{
	if (ANarrativeNPCCharacter* NPCChar = Cast<ANarrativeNPCCharacter>(GetPawn()))
	{
		return NPCChar->IsAlive();
	}

	return false; 
}

ANarrativeNPCCharacter* ANarrativeNPCController::GetControlledNPC() const
{
	return Cast<ANarrativeNPCCharacter>(GetPawn());
}

bool ANarrativeNPCController::RequestAttackToken(UNarrativeAbilitySystemComponent* TargetToAttack)
{
	if (TargetToAttack && GrantedToken != TargetToAttack)
	{
		if (TargetToAttack->TryClaimToken(this))
		{
			return true;
		}
	}

	return false; 
}

bool ANarrativeNPCController::ReturnToken()
{
	if (GrantedToken)
	{
		GrantedToken->ReturnToken(this);
	}

	return true; 
}

void ANarrativeNPCController::TokenStolen()
{

}

void ANarrativeNPCController::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{	
	//Mark the controller and pawn to be removed after 90s. TODO config option in settings 
	CleanUp(90.f);
}
