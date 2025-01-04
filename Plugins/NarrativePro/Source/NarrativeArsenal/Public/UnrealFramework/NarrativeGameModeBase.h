// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NarrativeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	ANarrativeGameModeBase(const FObjectInitializer& ObjectInitializer);

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

};
