// Copyright Narrative Tools 2022. 
#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "NarrativeItemBlueprint.generated.h"

/**
 * Narrative Item blueprints are the base class for any items you want to create with Narrative Inventory.
 * In the details panel you can define all the items properties, and by overriding functions like OnUse and CanUse
 * you can define how the item should behave when used. 
 */
UCLASS()
class UNarrativeItemBlueprint : public UBlueprint
{
	GENERATED_BODY()
	
};
