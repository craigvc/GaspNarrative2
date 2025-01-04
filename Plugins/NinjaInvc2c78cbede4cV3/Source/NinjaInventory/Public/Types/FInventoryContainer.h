// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FInventoryContainer.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryContainer;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;

/**
 * Represents a container in the inventory.
 */
USTRUCT(BlueprintType)
struct FInventoryContainerEntry : public FFastArraySerializerItem
{

	GENERATED_BODY()

	/** Unique ID assigned to this container. */
	UPROPERTY(BlueprintReadOnly, Category = "Container")
	FGuid ContainerId = FGuid();
	
	/** Instance spawned for this container entry. */
	UPROPERTY(BlueprintReadOnly, Category = "Container")
	TObjectPtr<UNinjaInventoryContainer> Container = nullptr;

	/** Item that granted/represents this container. */
	UPROPERTY(BlueprintReadOnly, Category = "Container")
	TObjectPtr<UNinjaInventoryItem> OwningItem = nullptr;
	
	/** Checks if this is a default container. */
	bool IsDefaultContainer() const;

	/** Provides the priority assigned to the inner container. */
	int32 GetPriority() const;
	
	/** Provides the tags registered to the inner container. */
	FGameplayTagContainer GetContainerTags() const;

	friend bool operator==(const FInventoryContainerEntry& A, const FInventoryContainerEntry& B)
		{ return A.Container == B.Container; }

	friend bool operator!=(const FInventoryContainerEntry& A, const FInventoryContainerEntry& B)
		{ return A.Container != B.Container; }
	
};

/** List of containers available in an inventory. */
USTRUCT(BlueprintType)
struct FInventoryContainerList : public FFastArraySerializer
{
	GENERATED_BODY()

	FInventoryContainerList()
		: InventoryManager(nullptr)
	{
	}

	explicit FInventoryContainerList(UNinjaInventoryManagerComponent* InventoryManager)
		: InventoryManager(InventoryManager)
	{
	}

	bool HasInventoryValidManager() const;
	void SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager);
	
	NINJAINVENTORY_API void AddEntry(UNinjaInventoryContainer* ContainerInstance, UNinjaInventoryItem* OwningItem = nullptr, FGuid ContainerId = FGuid());
	NINJAINVENTORY_API void RemoveEntry(const UNinjaInventoryContainer* ContainerInstance);
	NINJAINVENTORY_API void RemoveEntriesByItem(UNinjaInventoryItem* OwningItem);
	NINJAINVENTORY_API void RemoveAllEntries();

	// -- Begin FFastArraySerializer implementation
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
	// -- End FFastArraySerializer implementation	
	
	NINJAINVENTORY_API const FInventoryContainerEntry* GetEntry(int32 Idx) const;
	NINJAINVENTORY_API const FInventoryContainerEntry* FindById(const FGuid& ContainerId) const;
	NINJAINVENTORY_API const FInventoryContainerEntry* FindByContainer(const UNinjaInventoryContainer* Container) const;
	NINJAINVENTORY_API int32 Count() const;
	NINJAINVENTORY_API int32 IndexOfById(const FGuid& ContainerId) const;
	NINJAINVENTORY_API int32 IndexOfByContainer(const UNinjaInventoryContainer* Container) const;
	NINJAINVENTORY_API int32 IndexOfByGameplayTag(const FGameplayTag& ContainerTag) const;
	NINJAINVENTORY_API TArray<FInventoryContainerEntry> GetEntries() const;
	NINJAINVENTORY_API TArray<FInventoryContainerEntry> FilterByContainerData(const UNinjaInventoryContainerDataAsset* ContainerData) const;
	NINJAINVENTORY_API TArray<FInventoryContainerEntry> FilterByQuery(FGameplayTagQuery Query) const;
	NINJAINVENTORY_API TArray<FInventoryContainerEntry> FilterByOwningItem(const UNinjaInventoryItem* OwningItem) const;
	NINJAINVENTORY_API TArray<FInventoryContainerEntry> FilterAvailableContainersForItemData(const UNinjaInventoryItemDataAsset* ItemData) const;

private:

	/** Replicated list of stored inventory items. */
	UPROPERTY()
	TArray<FInventoryContainerEntry> Entries;

	/** Inventory component that owns this list. */
	UPROPERTY(NotReplicated)
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;
	
};

template<>
struct TStructOpsTypeTraits<FInventoryContainerList> : TStructOpsTypeTraitsBase2<FInventoryContainerList>
{
	enum { WithNetDeltaSerializer = true };
};