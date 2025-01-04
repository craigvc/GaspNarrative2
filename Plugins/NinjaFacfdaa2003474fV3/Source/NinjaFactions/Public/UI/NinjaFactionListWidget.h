// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/FFactionMembership.h"
#include "Types/FFactionReputationTableRow.h"
#include "NinjaFactionListWidget.generated.h"

class UNinjaFactionMembershipView;

/**
 * Retrieves all factions available to the owner, considering reputation.
 */
UCLASS(DisplayName = "Faction List Widget")
class NINJAFACTIONS_API UNinjaFactionListWidget : public UUserWidget
{
    
    GENERATED_BODY()
    
    /**
     * Retrieves all Faction Memberships assigned to this widget's owner.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions|UI")
    TArray<UNinjaFactionMembershipView*> GetFactionMemberships() const;

protected:

    /** Converts a list of Memberships into their widget-friendly views. */
    virtual TArray<UNinjaFactionMembershipView*> ProcessMemberships(const TArray<FFactionMembership>& Memberships) const;

    /** Retrieves the proper tier data for a given unique name. */
    virtual FFactionReputationTableRow GetReputationTier(const FName& TierName) const;
    
};
