// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FDamageList.h"

#include "NinjaCombatSettings.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

FDamageList::FDamageList(): DamageManager(nullptr)
{
	DefaultArraySize = GetDefault<UNinjaCombatSettings>()->DamageRegistrySize;
	Entries.Reserve(DefaultArraySize);
}

FDamageList::FDamageList(UActorComponent* DamageManager): DamageManager(DamageManager)
{
	checkf(DamageManager && DamageManager->Implements<UCombatDamageManagerInterface>(), TEXT("Invalid damage manager: %s"), *GetNameSafe(DamageManager));
	DefaultArraySize = GetDefault<UNinjaCombatSettings>()->DamageRegistrySize;
	Entries.Reserve(DefaultArraySize);
}

void FDamageList::RegisterDamageTaken(const FGameplayEffectSpec& EffectSpec)
{
	CheckArrayLimits();

	checkf(DamageManager && DamageManager->Implements<UCombatDamageManagerInterface>(), TEXT("Invalid damage manager: %s"), *GetNameSafe(DamageManager));

	FDamageEntry NewEntry = FDamageEntry::GenerateNewEntry(EffectSpec);
	ICombatDamageManagerInterface::Execute_HandleDamageReceived(DamageManager, NewEntry);
	NewEntry.bHandled = true;

	Entries.Add(NewEntry);
	MarkItemDirty(NewEntry);	
}

TArray<FDamageEntry> FDamageList::GetEntries() const
{
	return Entries;
}

void FDamageList::SetDamageManager(UActorComponent* NewDamageManager)
{
	DamageManager = NewDamageManager;
}

void FDamageList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int32 Idx : AddedIndices)
	{
		BroadcastDamageTaken(Entries[Idx]);
	}	
}

void FDamageList::PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize)
{
	for (const int32 Idx : ChangedIndices)
	{
		BroadcastDamageTaken(Entries[Idx]);
	}
}

void FDamageList::CheckArrayLimits()
{
	if (Entries.Num() == DefaultArraySize)
	{
		Entries.RemoveAtSwap(0);
		MarkArrayDirty();
	}
}

void FDamageList::BroadcastDamageTaken(FDamageEntry& DamageInfo) const
{
	if (!DamageInfo.bHandled)
	{
		ICombatDamageManagerInterface::Execute_HandleDamageReceived(DamageManager, DamageInfo);
		DamageInfo.bHandled = true;
	}	
}

bool FDamageList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FDamageEntry, FDamageList>
		(Entries, DeltaParams, *this);	
}