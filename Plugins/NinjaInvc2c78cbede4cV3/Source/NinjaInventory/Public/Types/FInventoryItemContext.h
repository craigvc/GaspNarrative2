// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FInventoryDefaultItem.h"
#include "FInventoryItemContext.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;

/**
 * Possible states for an item context.
 */
UENUM(BlueprintType)
enum class EInventoryContextState : uint8
{
	/** The context is empty. */
	Empty,

	/** The context has an item to process but has not been executed. */
	NotExecuted,

	/** The context has been executed and items were created or updated. */
	Succeeded,

	/** The context has been executed, but some items were dropped. */
	PartiallySucceeded,

	/** The context has been executed and all items were dropped. */
	Failed,
};

USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryItemContextEntry
{

	GENERATED_BODY()

	/** An optional id that can be used for the item. */
	UPROPERTY(BlueprintReadOnly, Category = "Item Context Entry")
	FGuid ItemId = FGuid();
	
	/** Inventory Manager owning this context. */
	UPROPERTY(BlueprintReadOnly, Category = "Item Context Entry")
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;
	
	/** Actual item that was created or obtained from the inventory. */
	UPROPERTY(BlueprintReadOnly, Category = "Item Context Entry")
	TObjectPtr<UNinjaInventoryItem> Item;
	
	/** Item data that will generate an instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Context Entry")
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData;
	
	/** Initial memory added to the new item (or items if multiple are created). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Context Entry")
	TArray<FInventoryDefaultItemMemory> FragmentMemories;

	/**
	 * Checks if this item has valid data that should be added to the Inventory Manager.
	 */
	bool IsValid() const;

	/**
	 * Checks if this item has valid data for a load operation.
	 */
	bool IsValidForLoadOperation() const;

	/**
	 * Resets this entry to the original state.
	 */
	void Reset();

};

/**
 * A context used to add an Item to the Inventory.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryItemContext
{
	
	GENERATED_BODY()

	/** Inventory Manager owning this context. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;
	
	/** The initial request that will be processed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Context")
    FInventoryItemContextEntry Request;
	
	/** Items meant to be added to the inventory. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TArray<FInventoryItemContextEntry> ItemsToAdd;

	/** Items already stored requiring modification. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TArray<FInventoryItemContextEntry> ItemsToUpdate;

	/** Items that could not be added and should be dropped. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TArray<FInventoryItemContextEntry> ItemsToDrop;
	
	/** Items that were created and added to the inventory. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TArray<TObjectPtr<UNinjaInventoryItem>> CreatedItems;

	/** Items that already existed and were modified. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	TArray<TObjectPtr<UNinjaInventoryItem>> UpdatedItems;

	/** Amount of items dropped from the original collection. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Context")
	int32 DroppedItemsCount = 0;
	
	/** Checks if this context has valid data. */
	bool IsValid() const;

	/** Checks if this context was successfully (even partially) added. */
	bool IsSuccessful() const;

	/** Informs if this context is used for a load operation. */
	bool IsLoadOperation() const { return bIsLoadOperation; }
	
	/** Checks if this context has valid data for a load operation. */
	bool IsValidForLoadOperation() const;

	/** Sets this context to be used in a load operation. */
	void MarkLoadOperation();
	
	/** Sets the inventory manager for this context and all entries. */
	void SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager);

	/** Creates an empty context, with invalid data. */
	static FInventoryItemContext EmptyContext();

private:

	/** Informs if this context is being used for a load operation. */
	bool bIsLoadOperation = false;
	
};