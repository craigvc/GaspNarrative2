// Copyright Narrative Tools 2022. 


#include "NarrativeCommonUISubsystem.h"
#include "NarrativeCommonHUD.h"
#include <SubtitleManager.h>

void UNarrativeCommonUISubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FSubtitleManager::GetSubtitleManager()->OnSetSubtitleText().AddUObject(this, &UNarrativeCommonUISubsystem::OnSetSubtitle);
}

void UNarrativeCommonUISubsystem::Deinitialize()
{
	Super::Deinitialize();


}

void UNarrativeCommonUISubsystem::ShowNotification(const FText& NotificationText, const float Duration)
{
	if (CommonHUD && !NotificationText.IsEmptyOrWhitespace())
	{
		CommonHUD->ShowNotification(NotificationText, Duration);
	}
}

void UNarrativeCommonUISubsystem::OnSetSubtitle(const FText& SubtitleText)
{
	OnHandleSubtitle.Broadcast(SubtitleText);
}
