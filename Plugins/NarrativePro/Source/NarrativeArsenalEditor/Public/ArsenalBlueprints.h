// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "ArsenalBlueprints.generated.h"

/**
 * A custom Narrative item that equips a weapon visual to the player, grants some abilities, and modifies our attack power. 
 */
UCLASS()
class UWeaponItemBlueprint : public UBlueprint
{
	GENERATED_BODY()
	
};

/**
 * A narrative item that grants a gameplay effect to the user when used! Very useful for things like potions. 
 */
UCLASS()
class UGameplayEffectItemBlueprint : public UBlueprint
{
	GENERATED_BODY()
	
};
