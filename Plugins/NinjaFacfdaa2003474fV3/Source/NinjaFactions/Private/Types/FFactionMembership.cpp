// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FFactionMembership.h"

#include "Data/NinjaFactionDataAsset.h"

FFactionMembership::FFactionMembership() : FFactionMembership(nullptr)
{
}

FFactionMembership::FFactionMembership(const UNinjaFactionDataAsset* InFactionData)
{
    FactionData = const_cast<UNinjaFactionDataAsset*>(InFactionData);
	bIsNewMembership = true;
	bMainFaction = false;
    Reputation = 0;
    MinReputation = 0;
    MaxReputation = 0;
	TierName = NAME_None;
    bChangedReputation = false;
    bChangedTier = false;
	bChangedMainStatus = false;
}

bool FFactionMembership::IsValid() const
{
    return FactionData != nullptr && TierName != NAME_None;
}

bool FFactionMembership::HasSameTag(const FGameplayTag& FactionTag) const
{
    return FactionData != nullptr && FactionData->FactionTag == FactionTag;
}

bool FFactionMembership::ReputationInRange(const int32 InReputation) const
{
	return InReputation >= MinReputation && InReputation <= MaxReputation;
}

bool FFactionMembership::IsMainFaction() const
{
    return bMainFaction;
}

FGameplayTag FFactionMembership::GetFactionTag() const
{
    return FactionData != nullptr ? FactionData->FactionTag : FGameplayTag::EmptyTag; 
}

FGenericTeamId FFactionMembership::GetGenericTeamId() const
{
	return FactionData != nullptr ? FactionData->GetTeamId() : FGenericTeamId::NoTeam;
}

void FFactionMembership::Clone(const FFactionMembership& Source)
{
    FactionData = Source.FactionData;
	Reputation = Source.Reputation;
    MaxReputation = Source.MaxReputation;
    TierName = Source.TierName;
	bMainFaction = Source.bMainFaction;
}

bool FFactionMembership::UpdateReputation(const float NewReputation, const FFactionReputationTableRow* NewReputationTier)
{
    ClearChanges();
    
    if (Reputation != NewReputation)
    {
        Reputation = NewReputation;
        bChangedReputation = true;
    }

    if (NewReputationTier != nullptr && NewReputationTier->UniqueName != TierName)
    {
        TierName = NewReputationTier->UniqueName;
        MinReputation = NewReputationTier->MinReputation;
        MaxReputation = NewReputationTier->MaxReputation;
        bChangedTier = true;
    }

    return bIsNewMembership || HasChangesReputationChanges();
}

bool FFactionMembership::UpdateMainFaction(const bool bNewMainFaction)
{
	if (bMainFaction != bNewMainFaction)
	{
		bMainFaction = bNewMainFaction;
		bChangedMainStatus = true;
	}

	return HasMainStatusChanges();
}

void FFactionMembership::ClearChanges()
{
    bChangedReputation = false;
    bChangedTier = false;
	bChangedMainStatus = false;
}

UNinjaFactionDataAsset* FFactionMembership::GetFactionData() const
{
    return FactionData;
}
