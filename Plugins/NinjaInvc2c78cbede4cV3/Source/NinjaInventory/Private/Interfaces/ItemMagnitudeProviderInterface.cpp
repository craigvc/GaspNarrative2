// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/ItemMagnitudeProviderInterface.h"

float IItemMagnitudeValueInterface::GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, const float DefaultValue) const
{
	return DefaultValue;
}

TMap<FGameplayTag, float> IItemMagnitudeValueInterface::GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const
{
	return TMap<FGameplayTag, float>();
}