// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DroppableItemInterface.generated.h"

struct FInventoryDefaultItemMemory;

class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UDroppableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be dropped.
 */
class NINJAINVENTORY_API IDroppableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Retrieves the Actor used to represent dropped items in the world.
	 * These actors are implementations of the InventoryPickupInterface.
	 */
	virtual TSubclassOf<AActor> GetPickupActorClass() const = 0; 

	/**
	 * Evaluates if an item can be dropped.
	 */
	virtual bool CanDropItem(const UNinjaInventoryItem* Item) const = 0;
	
	/**
	 * Drops an inventory item, including its current memory, at a given location.
	 * 
	 * This is useful to drop actual items, which can be predicted by designers.
	 * If the item has a Stack, then that's the amount that will be dropped.
	 */
	virtual void DropItem(UNinjaInventoryItem* Item, FVector InitialLocation, FVector& ActualLocation) = 0;

	/**
	 * Drops a specific amount of items.
	 *
	 * Drops a specific amount that can be originated from a fragment memory, loot
	 * or any other specific sources of the amount.
	 */
	virtual void DropItemData(AActor* Source, const UNinjaInventoryItemDataAsset* ItemData, FVector InitialLocation, FVector& ActualLocation, const TArray<FInventoryDefaultItemMemory>& Memories) = 0;

};

