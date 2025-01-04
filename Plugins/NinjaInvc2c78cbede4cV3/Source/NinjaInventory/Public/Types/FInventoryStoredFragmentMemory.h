// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"
#include "Types/FInventoryFragmentMemory.h"
#include "UObject/Object.h"

#if ENGINE_MINOR_VERSION < 5
#include "InstancedStruct.h"
#else
#include "StructUtils/InstancedStruct.h"
#endif

#include "FInventoryStoredFragmentMemory.generated.h"

struct FInventoryDefaultItemMemory;

class UNinjaInventoryItem;
class UNinjaInventoryItemFragment;

/**
 * Stores the memory of a fragment, for a given Item Instance.
 */
USTRUCT(BlueprintType)
struct FInventoryStoredFragmentMemoryEntry : public FFastArraySerializerItem
{
	
	GENERATED_BODY()

	/** The fragment that owns this memory. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryItemFragment> Fragment;

	/** The generic struct used as memory. */
	UPROPERTY()
	TInstancedStruct<FInventoryFragmentMemory> Memory;

	/** Last time this item's memory was changed. */
	UPROPERTY()
	float MemoryTimestamp;
	
	/** Last Memory Timestamp that was replicated. */
	UPROPERTY(NotReplicated)
	float LastReplicatedMemoryTimestamp;
	
	FInventoryStoredFragmentMemoryEntry()
		: FInventoryStoredFragmentMemoryEntry(nullptr, TInstancedStruct<FInventoryFragmentMemory>()) 
	{
	}
	
	FInventoryStoredFragmentMemoryEntry(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentMemory>& Memory)
		: Fragment(Fragment), Memory(Memory) 
	{
		MemoryTimestamp = 0.f;
		LastReplicatedMemoryTimestamp = 0.f;		
	}

	~FInventoryStoredFragmentMemoryEntry()
	{
		Reset();
	}
	
	/** Returns true if this is a valid storage struct. */
	bool IsValid() const
	{
		return Fragment != nullptr && Memory.IsValid();
	}

	/** Resets this entry, returning it to its original, empty state. */
	void Reset()
	{
		Fragment = nullptr;
		Memory.Reset();
		MemoryTimestamp = 0.f;
		LastReplicatedMemoryTimestamp = 0.f;		
	}

	/** Converts this entry into an Item Memory. */
	FInventoryDefaultItemMemory ConvertToItemMemory() const;

	friend uint32 GetTypeHash(const FInventoryStoredFragmentMemoryEntry& Entry);
};

template<>
struct TStructOpsTypeTraits<FInventoryStoredFragmentMemoryEntry> : TStructOpsTypeTraitsBase2<FInventoryStoredFragmentMemoryEntry>
{
	enum
	{
		WithCopy = true
	};
};

/**
 * List of Fragment Memories stored for an Item Instance.
 */
USTRUCT(BlueprintType)
struct FInventoryStoredFragmentMemoryList : public FFastArraySerializer
{
	
	GENERATED_BODY()

	FInventoryStoredFragmentMemoryList()
		: ItemOwner(nullptr)
	{
	}

	explicit FInventoryStoredFragmentMemoryList(UNinjaInventoryItem* ItemInstance)
		: ItemOwner(ItemInstance)
	{
	}

	NINJAINVENTORY_API bool GetFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& OutMemory) const;
	NINJAINVENTORY_API int32 IndexOfMemory(const UNinjaInventoryItemFragment* Fragment) const;
	NINJAINVENTORY_API int32 IndexOfMemoryByClass(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass) const;
	NINJAINVENTORY_API int32 SaveFragmentMemory(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentMemory>& Memory);
	NINJAINVENTORY_API int32 UpdateFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& Memory);
	NINJAINVENTORY_API void RemoveFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass);
	TArray<FInventoryDefaultItemMemory> NINJAINVENTORY_API GetItemMemories() const;
	TArray<FInventoryDefaultItemMemory> NINJAINVENTORY_API GetSerializableItemMemories() const;
	
	// -- Begin FFastArraySerializer implementation
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
	// -- End FFastArraySerializer implementation

protected:

	void CacheEntries();
	int32 UpdateFragmentMemoryAt(int32 Idx, const TInstancedStruct<FInventoryFragmentMemory>& Memory);
	
private:

	UPROPERTY()
	TObjectPtr<UNinjaInventoryItem> ItemOwner;
	
	UPROPERTY()
	TArray<FInventoryStoredFragmentMemoryEntry> Entries;

	/** Cached view of entries, to allow O(1) access. */
	//UPROPERTY(Transient, NotReplicated)
	//TMap<TObjectPtr<const UNinjaInventoryItemFragment>, int32> FragmentInstanceMap;
	
	/** Cached view of entries, to allow O(1) access. */
	UPROPERTY(Transient, NotReplicated)
	TMap<TSubclassOf<UNinjaInventoryItemFragment>, int32> FragmentClassMap;

	/** Last entries hash during the cache run. */
	uint32 LastCachedHash = INDEX_NONE;
};

template<>
struct TStructOpsTypeTraits<FInventoryStoredFragmentMemoryList> : TStructOpsTypeTraitsBase2<FInventoryStoredFragmentMemoryList>
{
	enum { WithNetDeltaSerializer = true };
};