// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "NarrativeCommonHUD.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonHUD : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	//Show a notification - the UMG widget handles implementing this. bOverrideCurrentNotification is only relevant for major notifications - minors are shown in a stack. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Notifications")
	void ShowNotification(const FText& NotificationText, const float Duration = 5.f);

	//Show a major notification
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Notifications")
	void ShowMajorNotification(const FText& NotificationText, const FText& MajorNotificationSubtext, const float Duration = 5.f, const bool bOverrideCurrentNotification = true);
};
