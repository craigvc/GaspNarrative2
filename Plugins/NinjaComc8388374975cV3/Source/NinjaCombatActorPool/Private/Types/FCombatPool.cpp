// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FCombatPool.h"

#include "Components/NinjaCombatActorPoolComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatPoolableActorInterface.h"

FCombatPoolList::FCombatPoolList() 
{
	PoolComponent = nullptr;
	TotalPoolSize = 0;
}

FCombatPoolList::FCombatPoolList(UNinjaCombatActorPoolComponent* PoolComponent)
	: PoolComponent(PoolComponent)
{
	TotalPoolSize = 0;
}

void FCombatPoolList::SetPoolManager(UNinjaCombatActorPoolComponent* PoolManager)
{
	if (!IsValid(PoolManager))
	{
		PoolComponent = PoolManager;
	}
}

void FCombatPoolList::SetActorPoolSize(const TSubclassOf<AActor>& ActorClass, const int32 PoolSize)
{
	if (!ActorPoolSize.Contains(ActorClass))
	{
		ActorPoolSize.Add(ActorClass, PoolSize);
		TotalPoolSize += PoolSize;	
	}
}

void FCombatPoolList::Initialize()
{
	Entries.Reserve(TotalPoolSize);
	if (PoolComponent->GetOwner()->HasAuthority())
	{
		for (TPair<TSubclassOf<AActor>, int32> PoolEntry : ActorPoolSize)
		{
			const TSubclassOf<AActor>& ActorClass = PoolEntry.Key;
			for (int Idx = 0; Idx < PoolEntry.Value; ++Idx)
			{
				AddEntry(ActorClass, Idx);
			}
		}
	}
}

void FCombatPoolList::AddEntry(const TSubclassOf<AActor>& ActorClass, const int32 Order)
{
    if (!IsValid(ActorClass))
    {
        return;
    }

	const FGuid NewId = FGuid::NewGuid();
	
	FCombatPoolEntry& Entry = Entries.AddDefaulted_GetRef();
	Entry.ActorClass = ActorClass;
	Entry.PooledActorId = NewId;
	Entry.Order = Order;
	Entry.AuthActor = PoolComponent->SpawnActor(ActorClass, NewId);
	MarkItemDirty(Entry);
}

void FCombatPoolList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (const int Idx : AddedIndices)
	{
		FCombatPoolEntry& Entry = Entries[Idx];
		Entry.ClientActor = PoolComponent->SpawnActor(Entry.ActorClass, Entry.PooledActorId);
	}
}

void FCombatPoolList::PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize)
{
	for (const int Idx : RemovedIndices)
	{
		if (IsValid(Entries[Idx].ClientActor))
		{
			Entries[Idx].ClientActor->Destroy();
		}
	}
}

AActor* FCombatPoolList::GetActor(const TSubclassOf<AActor>& ActorClass) const
{
	bool bIsAuthoritative = PoolComponent->GetOwner()->HasAuthority();
	
	TArray<FCombatPoolEntry> ActorEntries = Entries.FilterByPredicate([ActorClass, bIsAuthoritative](const FCombatPoolEntry& Entry)
	{
		const bool bHasValidAuthActor = Entry.AuthActor != nullptr && ICombatPoolableActorInterface::Execute_IsInactive(Entry.AuthActor);
		const bool bHasValidClientActor = Entry.ClientActor != nullptr && ICombatPoolableActorInterface::Execute_IsInactive(Entry.ClientActor);
		
		return Entry.ActorClass == ActorClass
			&& ((bIsAuthoritative && bHasValidAuthActor) || (!bIsAuthoritative && bHasValidClientActor));
	});

	Algo::Sort(ActorEntries, [](const FCombatPoolEntry& A, const FCombatPoolEntry& B)
	{
		return A.Order < B.Order;
	});

	if (ActorEntries.IsValidIndex(0))
	{
		return bIsAuthoritative ? ActorEntries[0].AuthActor : ActorEntries[0].ClientActor;	
	}

	return nullptr;
}

void FCombatPoolList::Empty()
{
	for (const FCombatPoolEntry& Entry : Entries)
	{
		const bool bIsAuthoritative = PoolComponent->GetOwner()->HasAuthority();
		AActor* Actor = bIsAuthoritative ? Entry.AuthActor : Entry.ClientActor;

		if (Actor && Actor->IsValidLowLevelFast())
		{
			ICombatPoolableActorInterface::Execute_NotifyPoolDestroyed(Actor);
		}
	}
}

bool FCombatPoolList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
	return FastArrayDeltaSerialize<FCombatPoolEntry, FCombatPoolList>
		(Entries, DeltaParams, *this);		
}
