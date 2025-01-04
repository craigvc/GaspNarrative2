// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FEquipment.h"

#include "NinjaInventoryEquipmentLog.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "GameFramework/NinjaEquipment.h"

static void LogEquipmentListMessage(const FString& Function, const FString& Message)
{
	UE_LOG(LogNinjaInventoryEquipment, Warning, TEXT("FEquipmentList::%s: %s"), *Function, *Message);
}

bool FEquipmentList::HasValidEquipmentManager() const
{
	if (!IsValid(EquipmentManager))
	{
		return false;
	}
	
	const bool bHasBeenInitialized = EquipmentManager->HasBeenInitialized();
	const bool bHasAuthority = EquipmentManager->OwnerHasAuthority();

	return bHasBeenInitialized && bHasAuthority; 
}

void FEquipmentList::SetEquipmentManager(UNinjaEquipmentManagerComponent* NewEquipmentManager)
{
	if (!HasValidEquipmentManager())
	{
		EquipmentManager = NewEquipmentManager;
	}
}

// ----- Authority Management -------------------------------------------------

void FEquipmentList::AddEntry(UNinjaEquipment* Equipment, const FGameplayTag& InitialState)
{
	if (!HasValidEquipmentManager())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Attempt to add equipment to an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	if (!IsValid(Equipment) || !InitialState.IsValid())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Invalid Equipment or Initial State Tag!"));
		return;
	}
	
	const int32 NewIdx = Entries.AddDefaulted();
	FEquipmentEntry& NewEntry = Entries[NewIdx];
	NewEntry.Item = Equipment->GetItem();
	NewEntry.Equipment = Equipment;
	NewEntry.EquipmentData = Equipment->GetData();
	NewEntry.PreviousStateTag = NewEntry.StateTag;
	NewEntry.StateTag = InitialState;	
	MarkItemDirty(NewEntry);
	
	EquipmentManager->HandleEquipmentAdded(NewEntry, NewIdx);
}

void FEquipmentList::ChangeState(const UNinjaEquipment* Equipment, const FGameplayTag NewState)
{
	if (!HasValidEquipmentManager())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Attempt to change equipment state in an invalid, unitialized or non-authoritative manager!"));
		return;
	}

	if (!IsValid(Equipment) || !NewState.IsValid())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Invalid Equipment or New State Tag!"));
		return;
	}
	
	const int32 Idx = IndexOfByEquipment(Equipment);
	if (Idx != INDEX_NONE && Entries[Idx].StateTag != NewState)
	{
		FEquipmentEntry& Entry = Entries[Idx];
		Entry.PreviousStateTag = Entry.StateTag;
		Entry.StateTag = NewState;
		MarkItemDirty(Entry);
		
		EquipmentManager->HandleEquipmentStateChanged(Entry, Idx);
	}
}

void FEquipmentList::RemoveEntry(const UNinjaEquipment* Equipment)
{
	if (!HasValidEquipmentManager())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Attempt to remove equipment from an invalid, unitialized or non-authoritative manager!"));
		return;
	}
	
	const int32 Idx = IndexOfByEquipment(Equipment);
	if (Idx != INDEX_NONE && Entries[Idx].Equipment == Equipment)
	{
		FEquipmentEntry& Entry = Entries[Idx];
		Entry.EquipmentDataHandle.Reset();
		EquipmentManager->HandleEquipmentRemoved(Entry, Idx);

		Entries.RemoveAt(Idx);
		MarkArrayDirty();
	}
}

void FEquipmentList::RemoveAllEntries()
{
	if (!HasValidEquipmentManager())
	{
		LogEquipmentListMessage(__FUNCTION__, TEXT("Attempt to remove equipment from an invalid, unitialized or non-authoritative manager!"));
		return;
	}
	
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		const int32 Idx = IndexOfByEquipment(EntryIt->Equipment);
		EquipmentManager->HandleEquipmentRemoved(*EntryIt, Idx);
		EntryIt.RemoveCurrent();
		MarkArrayDirty();
	}
}

// ----- Replication Management -----------------------------------------------

void FEquipmentList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Idx : AddedIndices)
	{
		FEquipmentEntry& Entry = Entries[Idx];
		if (Entry.Equipment != nullptr)
		{
			Entry.PreviousStateTag = Entry.StateTag;
			EquipmentManager->HandleEquipmentAdded(Entry, Idx);
		}
	}
}

void FEquipmentList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (const int32 Idx : ChangedIndices)
	{
		FEquipmentEntry& Entry = Entries[Idx];
		if (Entry.Equipment != nullptr)
		{
			if (Entry.PreviousStateTag != Entry.StateTag)
			{
				Entry.PreviousStateTag = Entry.StateTag;
				EquipmentManager->HandleEquipmentStateChanged(Entry, Idx);	
			}
		}
	}
}

void FEquipmentList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (const int32 Idx : RemovedIndices)
	{
		const FEquipmentEntry& Entry = Entries[Idx];
		if (Entry.Equipment != nullptr)
		{
			EquipmentManager->HandleEquipmentRemoved(Entry, Idx);
		}
	}
}

// ----- Support Methods ------------------------------------------------------

int32 FEquipmentList::IndexOfByEquipment(const UNinjaEquipment* Equipment) const
{
	if (Equipment == nullptr) return INDEX_NONE;
	return IndexOfByPredicate([Equipment](const FEquipmentEntry& Entry)
		{ return Entry.Equipment == Equipment; });
}

int32 FEquipmentList::IndexOfByItem(const UNinjaInventoryItem* Item) const
{
	if (Item == nullptr) return INDEX_NONE;
	return IndexOfByPredicate([Item](const FEquipmentEntry& Entry)
		{ return Entry.Equipment->GetItem() == Item; });	
}

TArray<FEquipmentEntry> FEquipmentList::FilterByQuery(const FGameplayTagQuery& Query) const
{
	return FilterByPredicate([Query](const FEquipmentEntry& Entry)
	{
		const FGameplayTagContainer EquipmentTags = Entry.Equipment->GetEquipmentTags(); 
		return Query.Matches(EquipmentTags);
	});
}

bool FEquipmentList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FEquipmentEntry, FEquipmentList>(Entries, DeltaParams, *this);
}

