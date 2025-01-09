// Copyright Narrative Tools 2022. 


#include "NarrativeCommonUIFunctionLibrary.h"
#include "NarrativeCommonUISubsystem.h"
#include "NarrativeCommonHUD.h"
#include <Engine/GameInstance.h>
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>
#include <CommonVideoPlayer.h>

void UNarrativeCommonUIFunctionLibrary::PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration)
{
	//Store the HUD in a subsystem - that way, 
	if (!Message.IsEmptyOrWhitespace())
	{
		if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
		{
			if (UNarrativeCommonUISubsystem* NSS = GI->GetSubsystem<UNarrativeCommonUISubsystem>())
			{
				NSS->ShowNotification(Message, Duration);
			}
		}
	}
}

void UNarrativeCommonUIFunctionLibrary::PushMajorHUDNotification(const UObject* WorldContextObject, FText Message, FText Subtitle, const float Duration /*= 5.f*/, const bool bOverrideCurrentNotification /*= true*/)
{
	//Store the HUD in a subsystem - that way, 
	if (!Message.IsEmptyOrWhitespace())
	{
		if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
		{
			if (UNarrativeCommonUISubsystem* NSS = GI->GetSubsystem<UNarrativeCommonUISubsystem>())
			{
				if (NSS->CommonHUD)
				{
					NSS->CommonHUD->ShowMajorNotification(Message, Subtitle, Duration, bOverrideCurrentNotification);
				}
			}
		}
	}
}

void UNarrativeCommonUIFunctionLibrary::PlayCommonVideoPlayer(class UCommonVideoPlayer* VideoPlayer)
{
	if (VideoPlayer)
	{
		VideoPlayer->PlayFromStart();
		VideoPlayer->SetLooping(true);
	}
}

void UNarrativeCommonUIFunctionLibrary::SetCommonVideoPlayerSource(class UCommonVideoPlayer* VideoPlayer, class UMediaSource* NewVideo)
{
	if (VideoPlayer)
	{
		VideoPlayer->SetVideo(NewVideo);
	}
}
