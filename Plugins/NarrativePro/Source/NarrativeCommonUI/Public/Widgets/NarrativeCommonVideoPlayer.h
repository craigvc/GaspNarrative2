// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CommonVideoPlayer.h"
#include "NarrativeCommonVideoPlayer.generated.h"

/**
 * Base class for common video player, with a few functions exposed to make it more BP friendly. 
 */
UCLASS(Category = "Narrative Common Widgets")
class NARRATIVECOMMONUI_API UNarrativeCommonVideoPlayer : public UCommonVideoPlayer
{
	GENERATED_BODY()
	
public:

	//BP exposed wrapper for non-bp callable parent functions
	UFUNCTION(BlueprintCallable, Category = "Narrative Common Video Player")
	void BPSetVideo(UMediaSource* NewVideo);

	UFUNCTION(BlueprintCallable, Category = "Narrative Common Video Player")
	void BPPlayFromStart();

	UFUNCTION(BlueprintCallable, Category = "Narrative Common Video Player")
	void BPPlay();

	UFUNCTION(BlueprintCallable, Category = "Narrative Common Video Player")
	void BPClose();
};
