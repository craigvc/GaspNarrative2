// Copyright Narrative Tools 2022. 


#include "NarrativeCommonHUD.h"
#include "NarrativeCommonUISubsystem.h"
#include <Engine/GameInstance.h>
#include <Engine/World.h>

void UNarrativeCommonHUD::NativeConstruct()
{
	Super::NativeConstruct();

	//Store the HUD in a subsystem - that way, 
	if (UWorld* World = GetWorld())
	{
		if (UGameInstance* GI = World->GetGameInstance())
		{
			if (UNarrativeCommonUISubsystem* NSS = GI->GetSubsystem<UNarrativeCommonUISubsystem>())
			{
				NSS->CommonHUD = this;
			}
		}
	}
}
