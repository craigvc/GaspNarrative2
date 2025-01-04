// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryContainer.h"

#include "NinjaInventoryLog.h"
#include "NinjaInventoryTags.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "GameFramework/NinjaInventoryContainer.h"

static void LogContainerListMessage(const FString& Function, const FString& Message)
{
	UE_LOG(LogNinjaInventory, Warning, TEXT("FInventoryContainerList::%s: %s!"), *Function, *Message);
}

bool FInventoryContainerEntry::IsDefaultContainer() const
{
	check(Container != nullptr);
	return Container->GetData()->GetGameplayTags().HasTagExact(Tag_Inventory_Container_Default);
}

int32 FInventoryContainerEntry::GetPriority() const
{
	check(Container != nullptr);
	return Container->GetData()->GetPriority();
}

FGameplayTagContainer FInventoryContainerEntry::GetContainerTags() const
{
	check(Container != nullptr);
	return Container->GetData()->GetGameplayTags();
}

bool FInventoryContainerList::HasInventoryValidManager() const
{
	return IsValid(InventoryManager) && InventoryManager->HasBeenInitialized() && InventoryManager->OwnerHasAuthority();
}

void FInventoryContainerList::SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager)
{
	if (!HasInventoryValidManager())
	{
		InventoryManager = NewInventoryManager;
	}	
}

void FInventoryContainerList::AddEntry(UNinjaInventoryContainer* ContainerInstance, UNinjaInventoryItem* OwningItem, FGuid ContainerId)
{
	if (!HasInventoryValidManager())
	{
		LogContainerListMessage(__FUNCTION__, TEXT("Attempt to add a container to an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	if (!IsValid(ContainerInstance))
	{
		LogContainerListMessage(__FUNCTION__, TEXT("Attempt to add a container to an invalid container!"));
		return;
	}

	const int32 Idx = Entries.AddDefaulted();
	FInventoryContainerEntry& NewEntry = Entries[Idx];
	NewEntry.ContainerId = ContainerId.IsValid() ? ContainerId : FGuid::NewGuid();
	NewEntry.Container = ContainerInstance;
	NewEntry.OwningItem = OwningItem;
	InventoryManager->HandleContainerAdded(NewEntry, Idx);
	MarkItemDirty(NewEntry);
}

void FInventoryContainerList::RemoveEntry(const UNinjaInventoryContainer* ContainerInstance)
{
	if (!HasInventoryValidManager())
	{
		LogContainerListMessage(__FUNCTION__, TEXT("Attempt to remove a container from an invalid, unitialized or non-authoritative manager!"));
		return;
	}
	
	const int32 Idx = IndexOfByContainer(ContainerInstance);
	if (Idx != INDEX_NONE)
	{
		InventoryManager->HandleContainerRemoved(Entries[Idx], Idx);
		Entries.RemoveAt(Idx);
		MarkArrayDirty();
	}
}

void FInventoryContainerList::RemoveEntriesByItem(UNinjaInventoryItem* OwningItem)
{
	if (!HasInventoryValidManager())
	{
		LogContainerListMessage(__FUNCTION__, TEXT("Attempt to remove a container from an invalid, unitialized or non-authoritative manager!"));
		return;
	}
	
	if (OwningItem != nullptr)
	{
		const int32 RemovedItems = Entries.RemoveAll([OwningItem](const FInventoryContainerEntry& Entry)
			{ return Entry.OwningItem == OwningItem; });

		if (RemovedItems > 0)
		{
			MarkArrayDirty();
		}
	}
}

void FInventoryContainerList::RemoveAllEntries()
{
	if (!HasInventoryValidManager())
	{
		LogContainerListMessage(__FUNCTION__, TEXT("Attempt to add a container to an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	for (auto It = Entries.CreateIterator(); It; ++It)
	{
		const int32 Idx = It.GetIndex();
		InventoryManager->HandleContainerRemoved(*It, Idx);
		It.RemoveCurrent();
	}

	MarkArrayDirty();
}

void FInventoryContainerList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Idx : AddedIndices)
	{
		const FInventoryContainerEntry& Entry = Entries[Idx];
		InventoryManager->HandleContainerAdded(Entry, Idx);
	}
}

void FInventoryContainerList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (const int32 Idx : RemovedIndices)
	{
		const FInventoryContainerEntry& Entry = Entries[Idx];
		InventoryManager->HandleContainerRemoved(Entry, Idx);
	}
}

const FInventoryContainerEntry* FInventoryContainerList::GetEntry(const int32 Idx) const
{
	if (Entries.IsValidIndex(Idx))
	{
		return &Entries[Idx];
	}

	return nullptr;
}

const FInventoryContainerEntry* FInventoryContainerList::FindById(const FGuid& ContainerId) const
{
	return Entries.FindByPredicate([ContainerId](const FInventoryContainerEntry& Entry)
		{ return Entry.Container->GetContainerId() == ContainerId; });
}

const FInventoryContainerEntry* FInventoryContainerList::FindByContainer(const UNinjaInventoryContainer* Container) const
{
	return Entries.FindByPredicate([Container](const FInventoryContainerEntry& Entry)
		{ return Entry.Container == Container; });	
}

int32 FInventoryContainerList::Count() const
{
	return Entries.Num();
}

int32 FInventoryContainerList::IndexOfById(const FGuid& ContainerId) const
{
	return Entries.IndexOfByPredicate([ContainerId](const FInventoryContainerEntry& Entry)
		{ return Entry.Container->GetContainerId() == ContainerId; });
}

int32 FInventoryContainerList::IndexOfByContainer(const UNinjaInventoryContainer* Container) const
{
	return Entries.IndexOfByPredicate([Container](const FInventoryContainerEntry& Entry)
		{ return Entry.Container == Container; });
}

int32 FInventoryContainerList::IndexOfByGameplayTag(const FGameplayTag& ContainerTag) const
{
	return Entries.IndexOfByPredicate([ContainerTag](const FInventoryContainerEntry& Entry)
		{ return Entry.Container->GetData()->GetGameplayTags().HasTagExact(ContainerTag); });
}

TArray<FInventoryContainerEntry> FInventoryContainerList::GetEntries() const
{
	return Entries;
}

TArray<FInventoryContainerEntry> FInventoryContainerList::FilterByContainerData(
	const UNinjaInventoryContainerDataAsset* ContainerData) const
{
	return Entries.FilterByPredicate([ContainerData](const FInventoryContainerEntry& Entry)
		{ return Entry.Container->GetData() == ContainerData; });	
}

TArray<FInventoryContainerEntry> FInventoryContainerList::FilterByQuery(FGameplayTagQuery Query) const
{
	return Entries.FilterByPredicate([Query](const FInventoryContainerEntry& Entry)
		{ return Query.Matches(Entry.Container->GetData()->GetGameplayTags()); });	
}

TArray<FInventoryContainerEntry> FInventoryContainerList::FilterByOwningItem(const UNinjaInventoryItem* OwningItem) const
{
	return Entries.FilterByPredicate([OwningItem](const FInventoryContainerEntry& Entry)
		{ return Entry.OwningItem == OwningItem; });	
}

TArray<FInventoryContainerEntry> FInventoryContainerList::FilterAvailableContainersForItemData(
	const UNinjaInventoryItemDataAsset* ItemData) const
{
	return Entries.FilterByPredicate([ItemData](const FInventoryContainerEntry& Entry)
		{ return Entry.Container->GetData()->SupportsItemData(ItemData); });
}

bool FInventoryContainerList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FInventoryContainerEntry, FInventoryContainerList>(Entries, DeltaParams, *this);
}
