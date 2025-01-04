// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/FactionSourceInterface.h"

bool IFactionSourceInterface::CanProvideFactionValues_Implementation(const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag) const
{
    return true;
}