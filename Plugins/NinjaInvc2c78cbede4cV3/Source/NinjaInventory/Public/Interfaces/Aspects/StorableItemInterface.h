// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StorableItemInterface.generated.h"

struct FInventoryDefaultItemMemory;

class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UStorableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be stored.
 */
class NINJAINVENTORY_API IStorableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Checks if the provided container is the preferred one.
	 */
	virtual bool IsPreferredContainer(const UNinjaInventoryContainer* Container) const = 0;	

	/**
	 * Checks if an item can be moved to a container and position.
	 *
	 * @param Item				Item receiving the new container and position.
	 * @param Container			New container for an item.
	 * @param Position			New position for an item.
	 */
	virtual bool CanMoveItem(const UNinjaInventoryItem* Item, const UNinjaInventoryContainer* Container, int32 Position) const = 0;

	/**
	 * Checks if two item can be swapped.
	 *
	 * @param Item				First item to be swapped.
	 * @param ItemToSwap		Second item to be swapped.
	 * @return					True if these items can be swapped.
	 */
	virtual bool CanSwapItems(const UNinjaInventoryItem* Item, const UNinjaInventoryItem* ItemToSwap) const = 0;
	
	/**
	 * Provides the primary container where an item is currently stored.
	 */
	virtual UNinjaInventoryContainer* GetPrimaryContainer(const UNinjaInventoryItem* Item) const = 0;

	/**
	 * Provides the position the item occupies in a container.
	 */
	virtual int32 GetPosition(const UNinjaInventoryItem* Item) const = 0;
	
	/**
	 * Sets a container for a given item.
	 *
	 * @param Item				Item that will be assigned to the new container.
	 * @param Container			Container receiving the item.
	 */
	virtual void SetPrimaryContainer(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container) = 0;
	
	/**
	 * Sets a new position for a given item.
	 *
	 * @param Item				Item that will occupy the new position in its current container.
	 * @param Position			New position the item will occupy in its current container.
	 */
	virtual void SetPosition(UNinjaInventoryItem* Item, int32 Position) = 0;

	/**
	 * Sets the best container and position for an item, in its assigned inventory.
	 */
	virtual void SetBestContainerAndPositionForItem(UNinjaInventoryItem* Item) = 0;
	
	/**
	 * Sets a container and a position for an item, at the same time.
	 * 
	 * @param Item				Item receiving the new container and position.
	 * @param Container			New container for an item.
	 * @param Position			New position for an item.
	 */
	virtual void MoveItem(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, int32 Position) = 0;
	
	/**
	 * Swaps the container and position between two items.
	 *
	 * @param Item				First item to be swapped.
	 * @param ItemToSwap		Second item to be swapped.
	 */
	virtual void SwapItems(UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToSwap) = 0;

	/**
	 * Creates a default stack memory compatible with the storage details.
	 *
	 * @param Container			Container assigned to the memory.
	 * @param Position			Position assigned to the memory.
	 * @return					A default memory that can be used for the storage.
	 */
	virtual FInventoryDefaultItemMemory CreateDefaultMemory(UNinjaInventoryContainer* Container, int32 Position) const = 0;
	
};

