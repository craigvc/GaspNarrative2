// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/LootCaches/LootCache_None.h"

#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"

bool ULootCache_None::GetLootForRequester(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const
{
	FilterLootByRequester(Requester, OutLoot);
	return OutLoot.Num() > 0;
}

void ULootCache_None::CacheLootForRequester(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot)
{
	if (!IsValid(Requester) || NewLoot.IsEmpty())
	{
		return;
	}

	INVENTORY_LOG_ARGS(Verbose, "Caching loot for %s.", *GetNameSafe(Requester));
	SaveOrUpdateLoot(Requester, NewLoot);
}

int32 ULootCache_None::ClearCachedLoot(const UNinjaInventoryManagerComponent* Requester)
{
	const int32 Count = EvictLoot(Requester);
	INVENTORY_LOG_ARGS(Verbose, "Removed %d loot entries for %s.", Count, *GetNameSafe(Requester));
	return Count;
}

void ULootCache_None::FilterLootByRequester_Implementation(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const
{
	OutLoot.Empty();
}

void ULootCache_None::SaveOrUpdateLoot_Implementation(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot)
{
}

int32 ULootCache_None::EvictLoot_Implementation(const UNinjaInventoryManagerComponent* Requester)
{
	return 0;
}