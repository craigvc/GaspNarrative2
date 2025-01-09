// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include <GameplayTagContainer.h>
#include "NarrativeAssetManager.generated.h"

/**
 * Custom asset manager for Narrative pro. Used for GAS and efficient NPC caching. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAssetManager : public UAssetManager
{
	GENERATED_BODY()
	

public:

	static UNarrativeAssetManager& Get();

	/** Starts initial load, gets called from InitializeObjectReferences */
	virtual void StartInitialLoading() override;

	void InitializeGAS();


};
