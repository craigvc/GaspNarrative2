// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/StackableItemInterface.h"
#include "Interfaces/Context/ItemContextModifierInterface.h"
#include "Interfaces/Context/ItemContextValidatorInterface.h"
#include "Serialization/InventorySerializableFragmentInterface.h"
#include "Types/FInventoryFragmentMemory.h"
#include "ItemFragment_Stack.generated.h"

struct FInventoryItemContext;
struct FInventoryItemFragmentStackMemory;

class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Determines how a certain item can be stacked.
 */
UCLASS(DisplayName = "Stack")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Stack : public UNinjaInventoryItemFragment,
	public IStackableItemInterface, public IItemContextValidatorInterface, public IItemContextModifierInterface,
	public IInventorySerializableFragmentInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemStackChangedSignature, UNinjaInventoryItem*, Item, int32, StackSize);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the stack size changes. */
	UPROPERTY(BlueprintAssignable)
	FItemStackChangedSignature OnStackSizeChanged;
	
	UItemFragment_Stack();

	// -- Begin Fragment implementation
	virtual void HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	virtual void HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	// -- End Fragment implementation

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation

	// -- Begin Validatable Item implementation
	virtual bool CanAddToInventory(const FInventoryItemContext& ItemContext) const override;
	// -- End Validatable Item implementation

	// -- Begin Modifiable Item implementation
	virtual void ModifyItemRequest(FInventoryItemContext& ItemContext) const override;
	// -- Begin Modifiable Item implementation

	// -- Begin Serializable Item implementation
	virtual void RestoreFromSavedMemory_Implementation(const FInventoryDefaultItemMemory& Memory) override;
	// -- End Serializable Item implementation
	
	/**
	 * Checks if an item data and a base stack can be added to an Inventory Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanAddStack(const UNinjaInventoryManagerComponent* InventoryManager,
		const UNinjaInventoryItemDataAsset* ItemData, int32 StackSize) const override;

	/**
	 * Checks if two item stacks can be combined.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanCombineStacks(const UNinjaInventoryItem* ItemA, const UNinjaInventoryItem* ItemB) const override;

	/**
	 * Checks if an item can be split by the provided amount.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual bool CanSplitStack(const UNinjaInventoryItem* Item, int32 Amount) const override;
	
	/**
	 * Provides the total stack size of an Item type.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 CountTotalStackSize(const UNinjaInventoryManagerComponent* InventoryManager,
		const UNinjaInventoryItemDataAsset* ItemData) const override;
	
	/**
	 * Provides the maximum amount of items in a stack.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 GetStackLimit() const override;

	/**
	 * Provides the limit of how many items can be carried in the inventory in total.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 GetMaximumLimit() const override;

	/**
	 * Provides the current stack size for a given Item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 GetStackSize(const UNinjaInventoryItem* Item) const override;

	/**
	 * Provides the stack size from a list of default memories.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool GetStackSizeFromDefaultMemories(const TArray<FInventoryDefaultItemMemory>& DefaultMemories, int32& OutStack) const;
	
	/**
	 * Sets the stack size for a given Item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetStackSize(UNinjaInventoryItem* Item, int32 NewStackSize) override;
	
	/**
	 * Combines two item stacks, adjusting them in the Item Database.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void CombineStacks(UNinjaInventoryItem* ItemA, UNinjaInventoryItem* ItemB) override;

	/**
	 * Splits the stack, modifying the item's current stack size and creating a new item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SplitStack(UNinjaInventoryItem* Item, int32 Amount) override;

	/**
	 * Splits a stack presented in an item context.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void OrganizeStacksInContext(FInventoryItemContext& ItemContext) const;

	/**
	 * Creates a stack memory compatible with the stack size.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual FInventoryDefaultItemMemory CreateDefaultMemory(int32 StackSize) const override;
	
protected:

	/** Maximum amount of items in a stack. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 1, ClampMin = 1))
	int32 StackLimit;

	/** Limit of how many items can be carried in the inventory in total. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 1, ClampMin = 1))
	int32 MaximumLimit;

	/** If set to true, will try to reuse incomplete stacks before adding new items. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bAutomaticallyMergeNewItems;
	
	/**
	 * Defines how this fragment tests new items being added to the inventory.
	 * 
	 * If set to true, will always check an entire stack before adding new items, so if
	 * a stack of 30 items is being added, it will ensure that all 30 items can be added,
	 * disregarding the possibility of breaking the stack.
	 *
	 * If set to false, it will add room to add at least one item from the entire stack,
	 * meaning 1 item could be added/absorbed, and the remainder would be discarded.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bPerformStrictStackChecks;

	/**
	 * Retrieves the Stack Memory from a request, if available.
	 */
	static TOptional<FInventoryItemFragmentStackMemory> GetStackMemoryFromRequest(const FInventoryItemContext& ItemContext);
	
	/**
	 * Sorts the array of incomplete stacks using any preferred comparison logic.
	 */
	virtual void SortIncompleteStacks(TArray<UNinjaInventoryItem*>& IncompleteStacks) const;

	/**
	 * Ensure that items being added have a minimum stack memory.
	 */
	virtual void ReinforceStackMemories(FInventoryItemContext& ItemContext) const;
	
	/**
	 * Counts the stack for the main item to be added in the context.
	 */
	static int32 CountStackFromContextRequest(const FInventoryItemContext& ItemContext);

	/**
	 * Caches the current container memory, requesting an update in the Manager.
	 * 
	 * This is particularly relevant when an item is removed due to a zeroed stack,
	 * or because of a combine operation that removed the old version of the item.
	 */
	virtual void CacheStackMemory(UNinjaInventoryItem* Item, const TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory);
	
	/**
	 * Broadcasts changes related to this fragment, for a given item.
	 */
	virtual void BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Updates a context, subtracting an amount from the original request.
	 * If the original request ever reaches zero, then it gets discarded/reset.
	 */
	static void SubtractFromContext(FInventoryItemContext& ItemContext, int32 AmountToSubtract);
	
};
