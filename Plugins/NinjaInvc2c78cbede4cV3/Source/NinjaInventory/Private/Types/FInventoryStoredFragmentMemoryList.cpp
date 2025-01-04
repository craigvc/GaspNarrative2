// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryStoredFragmentMemory.h"

#include "Engine/World.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Serialization/InventorySerializableFragmentInterface.h"
#include "Types/FInventoryDefaultItemMemory.h"

FInventoryDefaultItemMemory FInventoryStoredFragmentMemoryEntry::ConvertToItemMemory() const
{
	FInventoryDefaultItemMemory ItemMemory(Fragment->GetClass(), Memory);
	return ItemMemory;
}

uint32 GetTypeHash(const FInventoryStoredFragmentMemoryEntry& Entry)
{
	// Fragment being the Key and knowing that changes updated the timestamp is enough.
	return HashCombine(GetTypeHash(Entry.Fragment), Entry.MemoryTimestamp);	
}

int32 FInventoryStoredFragmentMemoryList::IndexOfMemory(const UNinjaInventoryItemFragment* Fragment) const
{
	check(IsValid(Fragment));

	const int32* Idx = FragmentClassMap.Find(Fragment->GetClass());
	if (Idx != nullptr)
	{
		return *Idx;
	}

	return INDEX_NONE;
}

int32 FInventoryStoredFragmentMemoryList::IndexOfMemoryByClass(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass) const
{
	check(IsValid(FragmentClass));
	
	const int32* Idx = FragmentClassMap.Find(FragmentClass);
	if (Idx != nullptr)
	{
		return *Idx;
	}

	return INDEX_NONE;
}

bool FInventoryStoredFragmentMemoryList::GetFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& OutMemory) const
{
	const int32* Idx = FragmentClassMap.Find(FragmentClass);
	if (Idx != nullptr)
	{
		OutMemory = Entries[*Idx].Memory;
		return true;
	}

	return false;
}

int32 FInventoryStoredFragmentMemoryList::SaveFragmentMemory(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentMemory>& Memory)
{
	int32 Idx = IndexOfMemory(Fragment);

	// First we must make sure that we don't have a fragment compatible with the one
	// provided but on a CLASS LEVEL, meaning it's the same class, but another instance.
	//
	if (Idx == INDEX_NONE)
	{
		Idx = IndexOfMemoryByClass(Fragment->GetClass());
	}

	// Valid memory for this fragment. Let the update method handle it and return its
	// own memory index as the result.
	//
	if (Idx != INDEX_NONE)
	{
		return UpdateFragmentMemoryAt(Idx, Memory);
	}
	
	// Always make sure that we retrieve the owning item's version of the fragment.
	// This _should_ be handled by the item itself, but we really want to be safe here!
	//
	Fragment = ItemOwner->FindFragmentByClass(Fragment->GetClass());
	if (Fragment == nullptr)
	{
		return INDEX_NONE;
	}
	
	Idx = Entries.AddDefaulted();
	FInventoryStoredFragmentMemoryEntry& NewEntry = Entries[Idx];
	NewEntry.Fragment = Fragment;
	NewEntry.Memory = Memory; // MoveTemp(Memory);
	NewEntry.MemoryTimestamp = ItemOwner->GetWorld()->GetTimeSeconds();
	
	CacheEntries();
	MarkItemDirty(NewEntry);

	// Do this last, after we have cached our entries and marked this entry dirty.
	// Doing this earlier would corrupt the cache by triggering another update.
	//
	NewEntry.Fragment->HandleMemoryCreated(ItemOwner, NewEntry.Memory);
	return Idx;
}

int32 FInventoryStoredFragmentMemoryList::UpdateFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, TInstancedStruct<FInventoryFragmentMemory>& Memory)
{
	const int32 Idx = IndexOfMemoryByClass(FragmentClass);
	return UpdateFragmentMemoryAt(Idx, Memory);
}

int32 FInventoryStoredFragmentMemoryList::UpdateFragmentMemoryAt(const int32 Idx, const TInstancedStruct<FInventoryFragmentMemory>& Memory)
{
	if (Idx != INDEX_NONE && Entries.IsValidIndex(Idx))
	{
		FInventoryStoredFragmentMemoryEntry& Entry = Entries[Idx];
		Entry.Memory = Memory; //MoveTemp(Memory);
		Entry.MemoryTimestamp = ItemOwner->GetWorld()->GetTimeSeconds();
		Entry.Fragment->HandleMemoryUpdated(ItemOwner, Entry.Memory);
		MarkItemDirty(Entry);
		CacheEntries();
		return Idx;
	}

	return INDEX_NONE;
}

void FInventoryStoredFragmentMemoryList::RemoveFragmentMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass)
{
	const int32 Idx = IndexOfMemoryByClass(FragmentClass);
	if (Idx != INDEX_NONE)
	{
		const FInventoryStoredFragmentMemoryEntry& Entry = Entries[Idx];
		Entry.Fragment->HandleMemoryRemoved(ItemOwner);
		Entries.RemoveAt(Idx);
	}

	CacheEntries();
}

TArray<FInventoryDefaultItemMemory> FInventoryStoredFragmentMemoryList::GetItemMemories() const
{
	TArray<FInventoryDefaultItemMemory> ItemMemories;
	ItemMemories.Reserve(Entries.Num());
	
	for (const FInventoryStoredFragmentMemoryEntry& Entry : Entries)
	{
		ItemMemories.Add(Entry.ConvertToItemMemory());		
	}

	return ItemMemories;
}

TArray<FInventoryDefaultItemMemory> FInventoryStoredFragmentMemoryList::GetSerializableItemMemories() const
{
	TArray<FInventoryDefaultItemMemory> ItemMemories;
	ItemMemories.Reserve(Entries.Num());
	
	for (const FInventoryStoredFragmentMemoryEntry& Entry : Entries)
	{
		if (Entry.Fragment->Implements<UInventorySerializableFragmentInterface>() && IInventorySerializableFragmentInterface::Execute_CanBeSerialized(Entry.Fragment))
		{
			ItemMemories.Add(Entry.ConvertToItemMemory());
		}
	}

	return ItemMemories;
}

void FInventoryStoredFragmentMemoryList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Index : AddedIndices)
	{
		FInventoryStoredFragmentMemoryEntry& Entry = Entries[Index];
		if (Entry.MemoryTimestamp != Entry.LastReplicatedMemoryTimestamp)
		{
			Entry.LastReplicatedMemoryTimestamp = Entry.MemoryTimestamp;
			Entry.Fragment->HandleMemoryCreated(ItemOwner, Entry.Memory);
		}
	}

	CacheEntries();
}

void FInventoryStoredFragmentMemoryList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (const int32 Index : ChangedIndices)
	{
		FInventoryStoredFragmentMemoryEntry& Entry = Entries[Index];
		if (Entry.MemoryTimestamp != Entry.LastReplicatedMemoryTimestamp)
		{
			Entry.LastReplicatedMemoryTimestamp = Entry.MemoryTimestamp;
			Entry.Fragment->HandleMemoryUpdated(ItemOwner, Entry.Memory);
		}
	}
	
	CacheEntries();
}

void FInventoryStoredFragmentMemoryList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (const int32 Index : RemovedIndices)
	{
		const FInventoryStoredFragmentMemoryEntry& Entry = Entries[Index];
		Entry.Fragment->HandleMemoryRemoved(ItemOwner);
	}

	CacheEntries();
}

void FInventoryStoredFragmentMemoryList::CacheEntries()
{
	const uint32 EntriesHash = GetTypeHash(Entries);
	if (EntriesHash == LastCachedHash)
	{
		// Same hash, no need to cache things again.
		return;
	}
	
	const int32 Size = Entries.Num();
	FragmentClassMap.Empty(Size);

	for (int Idx = 0; Idx < Size; ++Idx)
	{
		const UNinjaInventoryItemFragment* Fragment = Entries[Idx].Fragment; 
		FragmentClassMap.Add(Fragment->GetClass(), Idx);
	}

	LastCachedHash = GetTypeHash(Entries);
}

bool FInventoryStoredFragmentMemoryList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FInventoryStoredFragmentMemoryEntry, FInventoryStoredFragmentMemoryList>(Entries, DeltaParams, *this);
}

