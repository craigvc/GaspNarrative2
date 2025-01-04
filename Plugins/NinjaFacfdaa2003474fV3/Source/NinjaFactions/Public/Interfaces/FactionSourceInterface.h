// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "FactionSourceInterface.generated.h"

class UNinjaFactionDataAsset;
class UNinjaFactionComponent;

UINTERFACE(MinimalAPI)
class UFactionSourceInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * Represents a source of Faction Memberships and Reputation.
 */
class NINJAFACTIONS_API IFactionSourceInterface
{
    
    GENERATED_BODY()

public:

    /**
     * Checks if this source can actually provide a certain Faction and Reputation.
     *
     * @param Faction       Faction to be evaluated.
     * @param Reputation    Amount of reputation being evaluated.
     * @param EventTag		Event that would potentially yield such reputation gains.
     * @return              True if this faction and reputation can be granted by this character.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Faction Source Interface")
    bool CanProvideFactionValues(const UNinjaFactionDataAsset* Faction, int32 Reputation, UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag) const;
    virtual bool CanProvideFactionValues_Implementation(const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag) const;

    /**
     * Provides a map of all reputation rewards granted by this source.
     *
     * For Event Types, you can use the "Faction Event Type" enum as a starting point, but you
     * can create your own enumeration or constant values to represent your own events.
     *
     * @param FactionMember
     *      The member requesting the rewards. You may use this to modify the rewards so, for
     *      example, the faction is always dynamic, based on the requesting member.
     *      
     * @param EventTag
     *      Arbitrary event type, used to differentiate multiple reasons why this reward is
     *      being collected. Available events are to be defined by each project, but some common
     *      examples would be "character was killed", "item was collected", "quest was finished".
     *
     * @return
     *      A map of factions and reputation gains provided by this source, for a given event.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Faction Source Interface")
    TMap<UNinjaFactionDataAsset*, int32> GetReputationRewards(const UNinjaFactionComponent* FactionMember, UPARAM(meta = (Categories = "Factions.Event")) FGameplayTag EventTag) const;
    
};
