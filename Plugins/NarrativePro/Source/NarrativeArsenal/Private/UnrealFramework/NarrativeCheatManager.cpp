// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeCheatManager.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "SkillTrees/SkillTreeComponent.h"
#include "InventoryComponent.h"
#include <GameFramework/PlayerController.h>

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
