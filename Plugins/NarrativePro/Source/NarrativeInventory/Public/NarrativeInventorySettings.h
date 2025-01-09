// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NarrativeInventorySettings.generated.h"

/**
 * Defines configuration settings for the Narrative Inventory plugin. 
 */
UCLASS(config = Engine, defaultconfig)
class NARRATIVEINVENTORY_API UNarrativeInventorySettings : public UObject
{
	GENERATED_BODY()
	
public:

	UNarrativeInventorySettings();

	//Are we allowed to carry multiple stacks of an item? 
	UPROPERTY(EditAnywhere, config, Category = "Inventory Settings")
	bool bAllowMultipleStacks;

};
