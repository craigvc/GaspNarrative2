// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NarrativeCommonUISubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNarrativeHandleSubtitle, const FText&, SubtitleText);

/**
 * Currently just used to provide efficient access to the narrative HUD, but may be used for more in future. 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public: 	

	virtual void Initialize(FSubsystemCollectionBase& Collection);
	virtual void Deinitialize();

	//Cached common hud 
	UPROPERTY(BlueprintReadOnly, Category = "Narrative Common UI")
	class UNarrativeCommonHUD* CommonHUD;

	//Send a notification to the narrative HUD
	UFUNCTION(BlueprintCallable, Category = "Narrative Common UI")
	void ShowNotification(const FText& NotificationText, const float Duration = 5.f);

	UFUNCTION()
	void OnSetSubtitle(const FText& SubtitleText );

	//Allows blueprints to handle UE5 subtitles if they want!
	UPROPERTY(BlueprintAssignable, Category = "Narrative Common UI")
	FNarrativeHandleSubtitle OnHandleSubtitle;

	//Tell the Narrative HUD to open a menu - TODO  possibly add when we're ready to make NarrativeMenu native
	//UFUNCTION(BlueprintCallable, Category = "Narrative Common UI")
	//void OpenMenu(const FText& NotificationText, const float Duration = 5.f);
};
