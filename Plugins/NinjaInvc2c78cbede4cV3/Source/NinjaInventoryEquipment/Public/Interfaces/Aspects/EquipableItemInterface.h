// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EquipableItemInterface.generated.h"

class UNinjaEquipment;
class UNinjaEquipmentDataAsset;
class UNinjaInventoryItem;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UEquipableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be equipped.
 */
class NINJAINVENTORYEQUIPMENT_API IEquipableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Equipment Definition that can represent this item in the world;
	 */
	virtual const UNinjaEquipmentDataAsset* GetEquipmentDataAsset() const = 0;

	/**
	 * Provides the equipment representing a given item, if any.
	 */
	virtual UNinjaEquipment* GetEquipment(const UNinjaInventoryItem* Item) const = 0;
	
};

