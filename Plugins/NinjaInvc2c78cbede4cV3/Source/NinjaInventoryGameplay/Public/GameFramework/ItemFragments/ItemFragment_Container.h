// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/StorableItemInterface.h"
#include "Interfaces/Context/ItemContextModifierInterface.h"
#include "Interfaces/Context/ItemContextValidatorInterface.h"
#include "Serialization/InventorySerializableFragmentInterface.h"
#include "Types/FInventoryFragmentMemory.h"
#include "ItemFragment_Container.generated.h"

struct FInventoryDefaultItemMemory;
struct FInventoryItemContextEntry;
struct FInventoryItemContext;

class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;

/**
 * Handles containers occupied and provided by an item.
 */
UCLASS(DisplayName = "Container")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Container : public UNinjaInventoryItemFragment,
	public IStorableItemInterface, public IItemContextValidatorInterface, public IItemContextModifierInterface,
	public IInventorySerializableFragmentInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemContainerChangedSignature, UNinjaInventoryItem*, Item, UNinjaInventoryContainer*, Container);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemPositionChangedSignature, UNinjaInventoryItem*, Item, int32, Position);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the container changes. */
	UPROPERTY(BlueprintAssignable)
	FItemContainerChangedSignature OnContainerChanged;
	
	/** Broadcasts when the position changes. */
	UPROPERTY(BlueprintAssignable)
	FItemPositionChangedSignature OnPositionChanged;
	
	UItemFragment_Container();

	// -- Begin Fragment implementation
	virtual void OnApplyFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void OnRevertFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory) override;
	virtual void HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory) override;
	// -- End Fragment implementation

	// -- Begin Validatable Item implementation
	virtual bool CanAddToInventory(const FInventoryItemContext& ItemContext) const override;
	// -- Begin Validatable Item implementation

	// -- Begin Modifiable Item implementation
	virtual void ModifyItemRequest(FInventoryItemContext& ItemContext) const override;
	// -- Begin Modifiable Item implementation

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation

	// -- Begin Serializable Item implementation
	virtual void RestoreFromSavedMemory_Implementation(const FInventoryDefaultItemMemory& Memory) override;
	// -- End Serializable Item implementation
	
	/**
	 * Provides the primary container where an item is stored.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual UNinjaInventoryContainer* GetPrimaryContainer(const UNinjaInventoryItem* Item) const override;
	
	/**
	 * Provides the position the item occupies in a container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 GetPosition(const UNinjaInventoryItem* Item) const override;

	/**
	 * Checks if a position is valid in a given container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool IsValidPosition(const UNinjaInventoryContainer* Container, int32 Position) const;

	/**
	 * Checks if a given container is this item's preferred container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool IsPreferredContainer(const UNinjaInventoryContainer* Container) const override;
	
	/**
	 * Checks if an item can be moved to a container and position.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanMoveItem(const UNinjaInventoryItem* Item, const UNinjaInventoryContainer* Container, int32 Position) const override;

	/**
	 * Checks if two item can be swapped.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanSwapItems(const UNinjaInventoryItem* Item, const UNinjaInventoryItem* ItemToSwap) const override;

	/**
	 * Sets the primary container for the item instance.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetPrimaryContainer(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container) override;
	
	/**
	 * Sets a new position for a given item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetPosition(UNinjaInventoryItem* Item, int32 Position) override;
	
	/**
	 * Sets the best container and position for an item, in its assigned inventory.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetBestContainerAndPositionForItem(UNinjaInventoryItem* Item) override;
	
	/**
	 * Sets a container and a position for an item, at the same time.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void MoveItem(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, int32 Position) override;
	
	/**
	 * Swaps the container and position between two items.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SwapItems(UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToSwap) override;

	/**
	 * Creates a default memory compatible with the storage details.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual FInventoryDefaultItemMemory CreateDefaultMemory(UNinjaInventoryContainer* Container, int32 Position) const override;

	/**
	 * Caches the current container memory, requesting an update in the Manager.
	 */
	virtual void CacheContainerMemory(UNinjaInventoryItem* Item, const TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory);

	/**
	 * Finds the best container for an Item.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual UNinjaInventoryContainer* FindBestContainerForItem(const UNinjaInventoryItem* Item) const;

	/**
	 * Finds the best containers for an item entry from an item context.
	 */
	virtual UNinjaInventoryContainer* FindBestContainerForEntry(FInventoryItemContextEntry& ItemEntry, TMap<UNinjaInventoryContainer*, int32>& OutSlotsTaken) const;
	
	/**
	 * Finds the best position for an Item.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual int32 FindBestPositionForItem(const UNinjaInventoryItem* Item) const;

	/**
	 * Finds the best position for an Item in the given container.
	 */
	virtual int32 FindBestPositionForItemInContainer(const UNinjaInventoryItem* Item, const UNinjaInventoryContainer* Container) const;
	
	/**
	 * Finds the best positions for an item entry from an item context.
	 */
	virtual int32 FindBestPositionForEntry(FInventoryItemContextEntry& ItemEntry, TMap<UNinjaInventoryContainer*, TArray<int32>>& OutAdditionalPositions) const;
	
protected:

	/** The preferred container(s) for this item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FGameplayTagQuery PreferredContainerQuery;
	
	/**
	 * Containers added to the owner's inventory, when this fragment is applied.
	 *
	 * This allows designers to create items that can also be used as storage in the Inventory
	 * such as a "pot", "box" or something more elaborate like a backpack with multiple pockets.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	TArray<TObjectPtr<UNinjaInventoryContainerDataAsset>> Containers;

	/**
	 * Retrieves the Container and Position in one memory request.
	 */
	virtual void GetDataForSwap(const UNinjaInventoryItem* Item, UNinjaInventoryContainer*& OutContainer, int32& OutPosition) const;
	
	/**
	 * Broadcasts changes related to this fragment, for a given item.
	 */
	virtual void BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Helps checking if a position is taken.
	 */
	static bool IsPositionTaken(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryContainer* Container, int32 Position, const UNinjaInventoryItem* Item = nullptr);

	/**
	 * Tries to find an empty position in a container.
	 * Considers and updates the additional ongoing positions set in the array.
	 */
	static int32 FindEmptyPosition(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryContainer* Container, TArray<int32>& PositionsTaken);
	
	/**
	 * Tries to add to a container, considering the current slots plus any additional value from the map.
	 * This is used in the flow where we are adding containers to a new item context.
	 */
	static bool TryAddToContainer(const UNinjaInventoryManagerComponent* InventoryManager, UNinjaInventoryContainer* Container, TMap<UNinjaInventoryContainer*, int32>& OutSlotsTaken);
	
};
