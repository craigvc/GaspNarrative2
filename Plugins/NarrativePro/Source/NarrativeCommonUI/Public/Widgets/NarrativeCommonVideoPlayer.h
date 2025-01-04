// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CommonVideoPlayer.h"
#include "NarrativeCommonVideoPlayer.generated.h"

/**
 * 
 */
UCLASS()
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
