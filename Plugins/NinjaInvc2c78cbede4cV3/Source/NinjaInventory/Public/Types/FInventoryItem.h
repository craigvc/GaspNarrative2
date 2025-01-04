// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FInventoryItem.generated.h"

struct FInventoryItemContextEntry;

class UNinjaInventoryContainer;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/** Representation of an item stored in the inventory. */
USTRUCT(BlueprintType)
struct FInventoryItemEntry : public FFastArraySerializerItem
{
	
	GENERATED_BODY()

	/** Unique ID assigned to this Item. */
	UPROPERTY(BlueprintReadOnly, Category = "Item")
	FGuid ItemId = FGuid();
	
	/** Instance spawned for this item entry. */
	UPROPERTY(BlueprintReadOnly, Category = "Item")
	TObjectPtr<UNinjaInventoryItem> Item = nullptr;

	/** Initial values for fragment memories. */
	UPROPERTY(BlueprintReadOnly, Category = "Item")
	TArray<FInventoryDefaultItemMemory> InitialFragmentData;
	
};

/** List of items stored in an inventory. */
USTRUCT(BlueprintType)
struct FInventoryItemList : public FFastArraySerializer
{

	GENERATED_BODY()

	FInventoryItemList()
		: InventoryManager(nullptr)
	{
	}

	FInventoryItemList(UNinjaInventoryManagerComponent* InventoryManager)
		: InventoryManager(InventoryManager)
	{
	}

	bool HasInventoryValidManager() const;
	void SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager);
	
	void NINJAINVENTORY_API AddEntry(const FInventoryItemContextEntry& Entry, FGuid ItemId = FGuid());
	void NINJAINVENTORY_API RemoveEntry(const UNinjaInventoryItem* Item);
	void NINJAINVENTORY_API RemoveAllEntries();
	
	// -- Begin FFastArraySerializer implementation
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
	// -- End FFastArraySerializer implementation

	NINJAINVENTORY_API bool IsEmpty() const;
	NINJAINVENTORY_API bool IsValidIndex(int32 Idx) const;
	NINJAINVENTORY_API const FInventoryItemEntry* GetEntry(int32 Idx) const;
	NINJAINVENTORY_API const FInventoryItemEntry* FindById(const FGuid& ItemId) const;
	NINJAINVENTORY_API int32 Count() const;
	NINJAINVENTORY_API int32 IndexOfById(const FGuid& ItemId) const;
	NINJAINVENTORY_API int32 IndexOfByItem(const UNinjaInventoryItem* Item) const;
	NINJAINVENTORY_API TArray<FInventoryItemEntry> GetEntries() const;
	NINJAINVENTORY_API TArray<FInventoryItemEntry> FilterByItemData(const UNinjaInventoryItemDataAsset* ItemData) const;
	NINJAINVENTORY_API TArray<FInventoryItemEntry> FilterByQuery(const FGameplayTagQuery& ItemQuery) const;
	NINJAINVENTORY_API TArray<FInventoryItemEntry> FilterByIncompleteStacks(const UNinjaInventoryItemDataAsset* ItemData) const;
	NINJAINVENTORY_API TArray<FInventoryItemEntry> FilterByLootableItem() const;

private:

	UPROPERTY()
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;
	
	UPROPERTY()
	TArray<FInventoryItemEntry> Entries;
	
};

template<>
struct TStructOpsTypeTraits<FInventoryItemList> : TStructOpsTypeTraitsBase2<FInventoryItemList>
{
	enum { WithNetDeltaSerializer = true };
};
