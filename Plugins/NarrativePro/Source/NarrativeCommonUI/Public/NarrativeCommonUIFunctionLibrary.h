// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <MediaSource.h>
#include "NarrativeCommonUIFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public: 

	//Add a notification to the Narrative HUD, provided one has been created 
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI", meta = (DisplayName = "Show Narrative HUD Notification", WorldContext = "WorldContextObject"))
	static void PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration = 5.f);

	//Add a major notification to the Narrative HUD, provided one has been created 
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI", meta = (DisplayName = "Show Major Narrative HUD Notification", WorldContext = "WorldContextObject"))
	static void PushMajorHUDNotification(const UObject* WorldContextObject, FText Message, FText Subtitle, const float Duration = 5.f, const bool bOverrideCurrentNotification = true);

	//Tell a common video player to play, as the play function isn't exposed to blueprints.
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI")
	static void PlayCommonVideoPlayer(class UCommonVideoPlayer* VideoPlayer);

	//Tell a common video player to set its source, as the play function isn't exposed to blueprints.
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI")
	static void SetCommonVideoPlayerSource(class UCommonVideoPlayer* VideoPlayer, class UMediaSource* NewVideo);
};
