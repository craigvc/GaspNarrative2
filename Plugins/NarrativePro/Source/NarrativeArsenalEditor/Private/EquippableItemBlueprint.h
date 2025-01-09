// Copyright Narrative Tools 2022. 
#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "EquippableItemBlueprint.generated.h"


/**
 * The base class for an equippable item the player can put on. Networking is built right in - just override HandleEquip/HandleUnequip to define what your equippable should do! Requires EquipmentComponent to be added to your pawn. 
 * 
 * For equippable clothing items see the already implemented ClothingItem that comes with Narrative Inventory. 
 */
UCLASS()
class UEquippableItemBlueprint : public UBlueprint
{
	GENERATED_BODY()
	
};

/**
 * An Equippable item already set up with some logic - will change the players clothing to the set mesh. 
 */
UCLASS()
class UClothingItemBlueprint : public UBlueprint
{
	GENERATED_BODY()
	
};
