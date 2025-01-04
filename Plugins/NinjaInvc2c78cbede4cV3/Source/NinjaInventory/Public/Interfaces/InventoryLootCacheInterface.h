// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryLootCacheInterface.generated.h"

class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UInventoryLootCacheInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the contract for a loot cache.
 */
class NINJAINVENTORY_API IInventoryLootCacheInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the loot cached for a given requester.
	 *
	 * @param Requester			Inventory Manager that is requesting the loot.
	 * @param OutLoot			Output array that will store the loot.
	 * @return					True if there was loot assigned, false otherwise.
	 */
	virtual bool GetLootForRequester(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const = 0;

	/**
	 * Caches loot for a given requester.
	 *
	 * @param Requester			Inventory Manager that is requesting the loot.
	 * @param NewLoot			New loot to be cached. Always replaces any entries.
	 */
	virtual void CacheLootForRequester(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot) = 0;

	/**
	 * Clears the current loot for a requester.
	 *
	 * @param Requester			Inventory Manager that owns the cached loot.
	 * @return					Number of entries that were removed.
	 */
	virtual int32 ClearCachedLoot(const UNinjaInventoryManagerComponent* Requester) = 0;
	
};

