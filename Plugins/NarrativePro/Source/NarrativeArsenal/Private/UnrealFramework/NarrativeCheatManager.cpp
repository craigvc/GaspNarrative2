// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeCheatManager.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "SkillTrees/SkillTreeComponent.h"
#include "InventoryComponent.h"
#include <GameFramework/PlayerController.h>
#include <Engine/World.h>
#include <AbilitySystemGlobals.h>
#include "AbilitySystemComponent.h"
#include "NarrativeGameplayTags.h"
#include "UnrealFramework/NarrativeGameState.h"

void UNarrativeCheatManager::GiveSkillPoints(int32 Points/*=1*/)
{
	if (APlayerController* PC = GetOuterAPlayerController())
	{
		if (ANarrativePlayerState* PS = Cast<ANarrativePlayerState>(PC->PlayerState))
		{
			if (USkillTreeComponent* STC = PS->GetSkillTreeComponent())
			{
				STC->GiveSkillPoints(Points);
			}
		}
	}
}

void UNarrativeCheatManager::GiveCurrency(int32 Currency/*=1*/)
{
	if (APlayerController* PC = GetOuterAPlayerController())
	{
		if (ANarrativePlayerState* PS = Cast<ANarrativePlayerState>(PC->PlayerState))
		{
			if (UNarrativeInventoryComponent* IC = PS->GetInventoryComponent())
			{
				IC->AddCurrency(Currency);
			}
		}
	}
}

void UNarrativeCheatManager::SetInvulnerable(const bool bIsInvulnerable)
{
	if (APlayerController* PC = GetOuterAPlayerController())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PC))
		{
			const FGameplayTag InvulnerabilityTag = FNarrativeGameplayTags::Get().State_Invulnerable;

			if (bIsInvulnerable)
			{
				ASC->AddLooseGameplayTag(InvulnerabilityTag);
			}
			else 
			{
				ASC->RemoveLooseGameplayTag(InvulnerabilityTag);
			}
		}
	}
}

void UNarrativeCheatManager::AdvanceTime(const float Amount)
{
	if (Amount > 0.f)
	{
		if (APlayerController* PC = GetOuterAPlayerController())
		{
			if (UWorld* World = PC->GetWorld())
			{
				if (ANarrativeGameState* NGS = World->GetGameState<ANarrativeGameState>())
				{
					NGS->AdvanceTimeOfDay(Amount);
				}
			}
		}
	}
}
