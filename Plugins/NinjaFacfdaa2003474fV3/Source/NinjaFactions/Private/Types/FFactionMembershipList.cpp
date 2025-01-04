// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FFactionMembershipList.h"

#include "Components/NinjaFactionComponent.h"
#include "Data/NinjaFactionDataAsset.h"

FFactionMembershipList::FFactionMembershipList(): FactionComponent(nullptr)
{
}

FFactionMembershipList::FFactionMembershipList(UNinjaFactionComponent* FactionMember)
    : FactionComponent(FactionMember)
{
    check(FactionMember);
}

void FFactionMembershipList::AddFactionMembership(const FFactionMembership& FactionMembership)
{
    if (!HasFactionMembership(FactionMembership.GetFactionTag()))
    {
        FFactionMembership& NewMembership = Entries.AddDefaulted_GetRef();
        NewMembership.Clone(FactionMembership);
    	NewMembership.bIsNewMembership = false;
        
        MarkItemDirty(NewMembership);
        BroadcastFactionAdded(NewMembership);
    }
}

void FFactionMembershipList::UpdateFactionMembership(const FFactionMembership& FactionMembership)
{
    const int32 Idx = GetFactionMembershipIndex(FactionMembership.GetFactionTag());
    if (Idx != INDEX_NONE)
    {
        const int32 NewReputation = FactionMembership.Reputation;

        FFactionReputationTableRow Tier;
        Tier.UniqueName = FactionMembership.TierName;
        Tier.MinReputation = FactionMembership.MinReputation;
        Tier.MaxReputation = FactionMembership.MaxReputation;
        
        if (Entries[Idx].UpdateReputation(NewReputation, &Tier))
        {
            MarkItemDirty(Entries[Idx]);
            BroadcastReputationUpdated(Entries[Idx]);
            BroadcastTierUpdated(Entries[Idx]);
        }
    }
}

void FFactionMembershipList::SetMainFaction(const UNinjaFactionDataAsset* FactionData)
{
	check(IsValid(FactionData));

	const int32 OldMainFactionIdx = GetMainFactionMembershipIndex();
	const int32 NewMainFactionIdx = GetFactionMembershipIndex(FactionData->FactionTag);

	if (OldMainFactionIdx != NewMainFactionIdx)
	{
		if (OldMainFactionIdx != INDEX_NONE)
		{
			FFactionMembership Membership = Entries[OldMainFactionIdx];
			Membership.UpdateMainFaction(false);
			MarkItemDirty(Entries[OldMainFactionIdx]);
			BroadcastMainStatusUpdated(Membership);
		}

		if (NewMainFactionIdx != INDEX_NONE)
		{
			FFactionMembership Membership = Entries[NewMainFactionIdx];
			Membership.bMainFaction = true;
			MarkItemDirty(Entries[NewMainFactionIdx]);
			BroadcastMainStatusUpdated(Membership);
		}
	}
}

void FFactionMembershipList::RemoveFactionMembership(const UNinjaFactionDataAsset* FactionData)
{
    check(IsValid(FactionData));

    const int32 Idx = GetFactionMembershipIndex(FactionData->FactionTag);
    if (Idx != INDEX_NONE)
    {
        const FFactionMembership Membership = Entries[Idx];
        Entries.RemoveAt(Idx);
        
        MarkArrayDirty();
        BroadcastFactionRemoved(Membership);
    }
}

void FFactionMembershipList::RemoveAllMemberships()
{
	for (FFactionMembership& Membership : Entries)
	{
		BroadcastFactionRemoved(Membership);
	}
	
	Entries.Empty();
	MarkArrayDirty();
}

void FFactionMembershipList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
    for (const int32 Idx : AddedIndices)
    {
        BroadcastFactionAdded(Entries[Idx]);
    }
}

void FFactionMembershipList::PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize)
{
    for (const int32 Idx : ChangedIndices)
    {
        BroadcastReputationUpdated(Entries[Idx]);
    	BroadcastMainStatusUpdated(Entries[Idx]);
        Entries[Idx].ClearChanges();
    }
}

void FFactionMembershipList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
    for (const int32 Idx : RemovedIndices)
    {
        BroadcastFactionRemoved(Entries[Idx]);
    }
}

bool FFactionMembershipList::IsMainFaction(const FGameplayTag& FactionTag) const
{
	return Entries.ContainsByPredicate([FactionTag](const FFactionMembership& Membership)
		{ return Membership.HasSameTag(FactionTag) && Membership.IsMainFaction(); });
}

bool FFactionMembershipList::HasFactionMembership(const FGameplayTag& FactionTag) const
{
    return Entries.ContainsByPredicate([FactionTag](const FFactionMembership& Membership)
        { return Membership.HasSameTag(FactionTag); });
}

int32 FFactionMembershipList::CountFactionMemberships() const
{
	return Entries.Num();
}

int32 FFactionMembershipList::GetFactionMembershipIndex(const FGameplayTag& FactionTag) const
{
    return Entries.IndexOfByPredicate([FactionTag](const FFactionMembership& Membership)
        { return Membership.HasSameTag(FactionTag); });
}

int32 FFactionMembershipList::GetMainFactionMembershipIndex() const
{
	return Entries.IndexOfByPredicate([](const FFactionMembership& Membership)
		{ return Membership.IsMainFaction(); });
}

FFactionMembership const* FFactionMembershipList::GetFactionMembership(const UNinjaFactionDataAsset* FactionData) const
{
    return Entries.FindByPredicate([FactionData](const FFactionMembership& Membership)
        { return Membership.FactionData == FactionData; });
}

TArray<FFactionMembership> FFactionMembershipList::GetFactionMemberships() const
{
    return Entries;
}

TArray<FFactionMembership> FFactionMembershipList::GetMainFactionMemberships() const
{
    return Entries.FilterByPredicate([](const FFactionMembership& Membership)
        { return Membership.IsMainFaction(); });
}

void FFactionMembershipList::BroadcastFactionAdded(const FFactionMembership& FactionMembership) const
{
    FactionComponent->OnFactionAdded.Broadcast(FactionMembership);
}

void FFactionMembershipList::BroadcastReputationUpdated(const FFactionMembership& FactionMembership) const
{
    FactionComponent->OnReputationChanged.Broadcast(FactionMembership);
}

void FFactionMembershipList::BroadcastTierUpdated(const FFactionMembership& FactionMembership) const
{
    FactionComponent->OnTierChanged.Broadcast(FactionMembership);
}

void FFactionMembershipList::BroadcastMainStatusUpdated(const FFactionMembership& FactionMembership) const
{
	FactionComponent->OnMainStatusChanged.Broadcast(FactionMembership);
}

void FFactionMembershipList::BroadcastFactionRemoved(const FFactionMembership& FactionMembership) const
{
    FactionComponent->OnFactionRemoved.Broadcast(FactionMembership);
}

bool FFactionMembershipList::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
{
    return FastArrayDeltaSerialize<FFactionMembership, FFactionMembershipList>(Entries, DeltaParams, *this);
}
