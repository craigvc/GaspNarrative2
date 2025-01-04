// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FFactionReputationTableRow.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "FFactionMembership.generated.h"

class UNinjaFactionDataAsset;

/**
 * Represents a faction that has been assigned to an actor.
 */
USTRUCT(BlueprintType)
struct NINJAFACTIONS_API FFactionMembership : public FFastArraySerializerItem
{
    
    GENERATED_BODY()

	/** The Data Asset representing the faction. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Faction Membership")
    TObjectPtr<UNinjaFactionDataAsset> FactionData;
	
	/** Is this the main faction for the member? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Faction Membership")
	uint8 bMainFaction:1;
	
    /** Current reputation in this membership. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Faction Membership")
    int32 Reputation;

	/** Informs if this is a new assignment.*/
	UPROPERTY(BlueprintReadOnly, Category = "Faction Membership")
	uint8 bIsNewMembership:1;
	
    /** Minimum amount of Reputation for the current tier. */
    UPROPERTY(BlueprintReadOnly, Category = "Faction Membership")
    int32 MinReputation;
    
    /** Maximum amount of Reputation for the current tier. */
    UPROPERTY(BlueprintReadOnly, Category = "Faction Membership")
    int32 MaxReputation;

    /** Unique name of this current tier, as per the Tier Table. */
    UPROPERTY(BlueprintReadOnly, Category = "Faction Membership")
    FName TierName;

    FFactionMembership();

    explicit FFactionMembership(const UNinjaFactionDataAsset* InFactionData);

    /** Provides the faction represented by this membership. */
    UNinjaFactionDataAsset* GetFactionData() const;

    /** Checks if this Membership has valid values. */
    bool IsValid() const;

    /** Checks if this Faction Data has the same tag as the one provided. */
    bool HasSameTag(const FGameplayTag& FactionTag) const;

	/** Checks if the provided reputation is in the current tier's range. */
	bool ReputationInRange(int32 InReputation) const;
	
    /** Informs if this membership has pending changes. */
    bool HasChangesReputationChanges() const { return HasReputationChanges() || HasTierChanges(); }

    /** Informs if this membership has pending changes in the reputation. */
    bool HasReputationChanges() const { return bChangedReputation; }

    /** Informs if this membership has pending changes in the tier. */
    bool HasTierChanges() const { return bChangedTier; }

	/** Informs if this membership has pending changes in its main status. */
	bool HasMainStatusChanges() const { return bChangedMainStatus; }
	
    /** Checks if this membership contains a Main Faction. */
    bool IsMainFaction() const;

    /** Provides the Gameplay Tag representing this membership's Faction. */
    FGameplayTag GetFactionTag() const;

	/** Provides the Generic Team Id containing in this membership's faction. */
	FGenericTeamId GetGenericTeamId() const;

    /** Copies data from the source */
    void Clone(const FFactionMembership& Source);
    
    /** Updates the reputation and tier and create backups/change flags. */
    bool UpdateReputation(float NewReputation, const FFactionReputationTableRow* NewReputationTier);

	/** Sets the main faction status. */
	bool UpdateMainFaction(bool bNewMainFaction);
	
    /** Removes pending changes flags. */
    void ClearChanges();
    
    FORCEINLINE bool operator == (const FFactionMembership& In) const
        { return In.FactionData == FactionData; }

    FORCEINLINE bool operator != (const FFactionMembership& In) const
        { return In.FactionData != FactionData; }

private:

    UPROPERTY(NotReplicated)
    bool bChangedReputation;

    UPROPERTY(NotReplicated)
    bool bChangedTier;

	UPROPERTY(NotReplicated)
	bool bChangedMainStatus;
    
};