// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeightableItemInterface.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UWeightableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be weighted.
 */
class NINJAINVENTORY_API IWeightableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the individual weight of a given item.
	 */
	virtual float GetWeight() const = 0; 

	/**
	 * Provides the total weight of a given item, considering the stack.
	 *
	 * This means the base weight should be multiplied by an item's stack.
	 * If the item has no stack, then the default fragment value is returned.
	 *
	 * @param Item		Item with a stack. When unset, then uses the base weight.
	 * @return			The total weight of the item, considering the current stack.
	 */
	virtual float GetTotalWeight(const UNinjaInventoryItem* Item) const = 0; 
	
	/**
	 * Checks if an Inventory Manager can receive an item's weight.
	 *
	 * By default, this test evaluates the current encumbrance + item's weight against
	 * the Inventory Manager's Maximum Allowed Weight attribute.
	 * 
	 * @param InventoryManager		Inventory Manager receiving the item. Must be provided.
	 * @param Item					Optional item to be checked. If unset, then uses the base weight.
	 * @return						True if the weight can be added to the inventory.
	 */
	virtual bool CanAddWeight(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItem* Item) const = 0;
	
};

