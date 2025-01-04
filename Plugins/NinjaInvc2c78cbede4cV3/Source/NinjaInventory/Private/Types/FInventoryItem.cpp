// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryItem.h"

#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Interfaces/Aspects/LootableItemInterface.h"
#include "Interfaces/Aspects/StackableItemInterface.h"
#include "Types/FInventoryItemContext.h"

static void LogItemListMessage(const FString& Function, const FString& Message)
{
	UE_LOG(LogNinjaInventory, Warning, TEXT("FInventoryItemList::%s: %s!"), *Function, *Message);
}

bool FInventoryItemList::HasInventoryValidManager() const
{
	return IsValid(InventoryManager) && InventoryManager->HasBeenInitialized() && InventoryManager->OwnerHasAuthority();
}

void FInventoryItemList::SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager)
{
	if (!HasInventoryValidManager())
	{
		InventoryManager = NewInventoryManager;
	}
}

void FInventoryItemList::AddEntry(const FInventoryItemContextEntry& Entry, FGuid ItemId)
{
	if (!HasInventoryValidManager())
	{
		LogItemListMessage(__FUNCTION__, TEXT("Attempt to add an item to an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	if (!IsValid(Entry.Item))
	{
		LogItemListMessage(__FUNCTION__, TEXT("Attempt to add an invalid item!"));
		return;
	}
	
	const int32 NewIdx = Entries.AddDefaulted();
	FInventoryItemEntry& NewEntry = Entries[NewIdx];

	NewEntry.ItemId = ItemId.IsValid() ? ItemId : FGuid::NewGuid();
	NewEntry.Item = Entry.Item;
	NewEntry.InitialFragmentData = Entry.FragmentMemories;
	InventoryManager->PreItemAdded(NewEntry, NewIdx);
	InventoryManager->HandleItemAdded(NewEntry, NewIdx);
	MarkItemDirty(NewEntry);
}

void FInventoryItemList::RemoveEntry(const UNinjaInventoryItem* Item)
{
	if (!HasInventoryValidManager())
	{
		LogItemListMessage(__FUNCTION__, TEXT("Attempt to remove an item from an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	if (!IsValid(Item))
	{
		LogItemListMessage(__FUNCTION__, TEXT("Attempt to remove an invalid item!"));
		return;
	}
	
	const int32 Idx = IndexOfByItem(Item);
	if (Idx != INDEX_NONE)
	{
		InventoryManager->HandleItemRemoved(Entries[Idx], Idx);
		Entries.RemoveAt(Idx);
		MarkArrayDirty();
	}
}

void FInventoryItemList::RemoveAllEntries()
{
	if (!HasInventoryValidManager())
	{
		LogItemListMessage(__FUNCTION__, TEXT("Attempt to add a container to an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	for (auto It = Entries.CreateIterator(); It; ++It)
	{
		const int32 Idx = It.GetIndex();
		InventoryManager->HandleItemRemoved(*It, Idx);
		It.RemoveCurrent();
	}

	MarkArrayDirty();
}

void FInventoryItemList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Idx : AddedIndices)
	{
		FInventoryItemEntry& Entry = Entries[Idx];
		InventoryManager->HandleItemAdded(Entry, Idx);
	}
}

void FInventoryItemList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (const int32 Idx : RemovedIndices)
	{
		FInventoryItemEntry& Entry = Entries[Idx];
		InventoryManager->HandleItemRemoved(Entry, Idx);
	}
}

bool FInventoryItemList::IsEmpty() const
{
	return Entries.IsEmpty();
}

bool FInventoryItemList::IsValidIndex(const int32 Idx) const
{
	return Entries.IsValidIndex(Idx);
}

const FInventoryItemEntry* FInventoryItemList::GetEntry(const int32 Idx) const
{
	if (IsValidIndex(Idx))
	{
		return &Entries[Idx];
	}

	return nullptr;	
}

const FInventoryItemEntry* FInventoryItemList::FindById(const FGuid& ItemId) const
{
	return Entries.FindByPredicate([ItemId](const FInventoryItemEntry& Entry)
		{ return Entry.Item->GetItemId() == ItemId; });	
}

int32 FInventoryItemList::Count() const
{
	return Entries.Num();
}

int32 FInventoryItemList::IndexOfById(const FGuid& ItemId) const
{
	return Entries.IndexOfByPredicate([ItemId](const FInventoryItemEntry& Entry)
		{ return Entry.Item->GetItemId() == ItemId; });
}

int32 FInventoryItemList::IndexOfByItem(const UNinjaInventoryItem* Item) const
{
	return Entries.IndexOfByPredicate([Item](const FInventoryItemEntry& Entry)
		{ return Entry.Item == Item; });
}

TArray<FInventoryItemEntry> FInventoryItemList::GetEntries() const
{
	return Entries;
}

TArray<FInventoryItemEntry> FInventoryItemList::FilterByItemData(const UNinjaInventoryItemDataAsset* ItemData) const
{
	return Entries.FilterByPredicate([ItemData](const FInventoryItemEntry& Entry)
		{ return Entry.Item->GetData() == ItemData; });
}

TArray<FInventoryItemEntry> FInventoryItemList::FilterByQuery(const FGameplayTagQuery& ItemQuery) const
{
	return Entries.FilterByPredicate([ItemQuery](const FInventoryItemEntry& Entry)
	{
		FGameplayTagContainer ItemTags;
		Entry.Item->GetOwnedGameplayTags(ItemTags);
		return ItemQuery.Matches(ItemTags);
	});
}

TArray<FInventoryItemEntry> FInventoryItemList::FilterByIncompleteStacks(const UNinjaInventoryItemDataAsset* ItemData) const
{
	return Entries.FilterByPredicate([this, ItemData](const FInventoryItemEntry& Entry)
	{
		const UNinjaInventoryItem* Item = Entry.Item;
		if (Item->GetData() == ItemData)
		{
			const TScriptInterface<IStackableItemInterface> Stackable = UNinjaInventoryFunctionLibrary::GetStackableItemAspect(Item->GetData());
			if (Stackable != nullptr)
			{
				const int32 CurrentStackSize = Stackable->GetStackSize(Item);
				return CurrentStackSize < Stackable->GetStackLimit();
			}
		}

		// Invalid type or no stack configuration.
		return false;
	});
}

TArray<FInventoryItemEntry> FInventoryItemList::FilterByLootableItem() const
{
	return Entries.FilterByPredicate([this](const FInventoryItemEntry& Entry)
	{
		const UNinjaInventoryItem* Item = Entry.Item;
		const TScriptInterface<ILootableItemInterface> Lootable = UNinjaInventoryFunctionLibrary::GetLootableItemAspect(Item->GetData());
		return Lootable != nullptr;
	});
}

bool FInventoryItemList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FInventoryItemEntry, FInventoryItemList>(Entries, DeltaParams, *this);
}


