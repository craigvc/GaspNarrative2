// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FFactionMembership.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FFactionMembershipList.generated.h"

class UNinjaFactionDataAsset;
class UNinjaFactionComponent;

/**
 * Replicated list of memberships assigned to an owner.
 */
USTRUCT(BlueprintType)
struct FFactionMembershipList : public FFastArraySerializer
{
    
    GENERATED_BODY()

    FFactionMembershipList();
    explicit FFactionMembershipList(UNinjaFactionComponent* FactionMember);

    // -- Begin Auth functions
    void AddFactionMembership(const FFactionMembership& FactionMembership);
    void UpdateFactionMembership(const FFactionMembership& FactionMembership);
	void SetMainFaction(const UNinjaFactionDataAsset* FactionData);
    void RemoveFactionMembership(const UNinjaFactionDataAsset* FactionData);
	void RemoveAllMemberships();
    // -- End Auth functions

    // -- Begin query methods
	bool IsMainFaction(const FGameplayTag& FactionTag) const;
    bool HasFactionMembership(const FGameplayTag& FactionTag) const;
	int32 CountFactionMemberships() const;
    int32 GetFactionMembershipIndex(const FGameplayTag& FactionTag) const;
	int32 GetMainFactionMembershipIndex() const;
    FFactionMembership const* GetFactionMembership(const UNinjaFactionDataAsset* FactionData) const;
    TArray<FFactionMembership> GetFactionMemberships() const;
    TArray<FFactionMembership> GetMainFactionMemberships() const;
    // -- End query methods
    
    // -- Begin FFastArraySerializer implementation
    void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
    void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);
    void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
    bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams);
    // -- End FFastArraySerializer implementation
    
private:
	
    /** Faction component that owns this membership. */
    UPROPERTY()
    TObjectPtr<UNinjaFactionComponent> FactionComponent;

    /** Entries that are maintained by this list. */
    UPROPERTY()
    TArray<FFactionMembership> Entries;

    // -- Begin broadcast methods
    void BroadcastFactionAdded(const FFactionMembership& FactionMembership) const;
    void BroadcastReputationUpdated(const FFactionMembership& FactionMembership) const;
    void BroadcastTierUpdated(const FFactionMembership& FactionMembership) const;
	void BroadcastMainStatusUpdated(const FFactionMembership& FactionMembership) const;
    void BroadcastFactionRemoved(const FFactionMembership& FactionMembership) const;
    // -- End broadcast methods
    
};

template<>
struct TStructOpsTypeTraits<FFactionMembershipList> : TStructOpsTypeTraitsBase2<FFactionMembershipList>
{
    enum
    {
        WithNetDeltaSerializer = true
    };
};