// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StackableItemInterface.generated.h"

struct FInventoryDefaultItemMemory;
struct FInventoryItemContext;
struct FInventoryFragmentMemory;

class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UStackableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be stacked.
 */
class NINJAINVENTORY_API IStackableItemInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Checks if a stack can be added to an Inventory, considering its current limits.
	 *
	 * @param InventoryManager	Inventory Manager receiving the item.
	 * @param ItemData			Item Data to evaluate.
	 * @param BaseStack			Amount assigned to the base data asset.
	 * @return					True if the inventory has room for this stack.
	 */
	virtual bool CanAddStack(const UNinjaInventoryManagerComponent* InventoryManager,
		const UNinjaInventoryItemDataAsset* ItemData, int32 BaseStack) const = 0;

	/**
	 * Checks if two item stacks can be combined.
	 *
	 * @param ItemA				Item that will receive the stack.
	 * @param ItemB				Item that will be combined.
	 * @return					True if these items can be stacked.
	 */
	virtual bool CanCombineStacks(const UNinjaInventoryItem* ItemA, const UNinjaInventoryItem* ItemB) const = 0;

	/**
	 * Checks if an item can be split by the provided amount.
	 *
	 * @param Item				Item to have its stack split.
	 * @param Amount			Amount for the new stack.
	 * @return					True if the split operation is possible.
	 */
	virtual bool CanSplitStack(const UNinjaInventoryItem* Item, int32 Amount) const = 0;
	
	/**
	 * Provides the maximum amount of items in a stack.
	 */
	virtual int32 GetStackLimit() const = 0;

	/**
	 * Provides the limit of how many items can be carried in the inventory in total.
	 */
	virtual int32 GetMaximumLimit() const = 0;

	/**
	 * Provides the current stack size of an Item.
	 *
	 * @param Item				Item instance being checked.
	 * @return					Current stack size for the item.
	 */
	virtual int32 GetStackSize(const UNinjaInventoryItem* Item) const = 0;

	/**
	 * Provides the total stack size of an Item type.
	 *
	 * @param InventoryManager	Inventory Manager providing all items of a certain type.
	 * @param ItemData			Type of item to be counted.
	 * @return					Total stack size for the item.
	 */
	virtual int32 CountTotalStackSize(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItemDataAsset* ItemData) const = 0;
	
	/**
	 * Sets a new stack size for an Item Instance.
	 *
	 * @param Item				Item receiving the new value.
	 * @param NewStackSize		New value for the item's Stack Size.
	 */
	virtual void SetStackSize(UNinjaInventoryItem* Item, int32 NewStackSize) = 0;
	
	/**
	 * Combines two item stacks, adjusting their stack sizes.
	 *
	 * @param ItemA				Item that will receive the stack.
	 * @param ItemB				Item that will be combined or removed.
	 */
	virtual void CombineStacks(UNinjaInventoryItem* ItemA, UNinjaInventoryItem* ItemB) = 0;

	/**
	 * Splits the stack, modifying the item's current stack size and creating a new item.
	 *
	 * @param Item				Item to have its stack split.
	 * @param Amount			Amount for the new stack.
	 */
	virtual void SplitStack(UNinjaInventoryItem* Item, int32 Amount) = 0;

	/**
	 * Creates a default stack memory compatible with the stack size.
	 *
	 * @param StackSize			Size of the stack configured in the memory.
	 * @return					A default memory that can be used for the stack.
	 */
	virtual FInventoryDefaultItemMemory CreateDefaultMemory(int32 StackSize) const = 0;
	
};