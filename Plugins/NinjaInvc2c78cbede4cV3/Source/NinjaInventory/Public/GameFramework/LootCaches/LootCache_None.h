// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Interfaces/InventoryLootCacheInterface.h"
#include "UObject/Object.h"
#include "LootCache_None.generated.h"

class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;

/**
 * Basic cache implementation for Loot that has been generated.
 *
 * In this basic implementation, Loot is never cached, meaning that every time loot is generated from a source to a
 * receiver, it will be generated from scratch and new loot will be picked-up.
 *
 * Other strategies might define that loot should be cached so the same loot is always retrieved and even past that,
 * define where loot will be stored (i.e. In Memory, Subsystem, Backend Server, etc.).
 */
UCLASS(Blueprintable, BlueprintType, DisplayName = "None")
class NINJAINVENTORY_API ULootCache_None : public UObject, public IInventoryLootCacheInterface
{
	
	GENERATED_BODY()
	
public:

	/**
	 * Provides the loot cached for a given requester.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot Cache")
	virtual bool GetLootForRequester(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const override;

	/**
	 * Caches loot for a given requester.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot Cache")
	virtual void CacheLootForRequester(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot) override;

	/**
	 * Clears the current loot for a requester.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot Cache")
	virtual int32 ClearCachedLoot(const UNinjaInventoryManagerComponent* Requester) override;
	
protected:

	/**
	 * Extension point to filter loot for a given requester.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Cache")
	void FilterLootByRequester(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const;

	/**
	 * Saves or updates the loot for a given requester.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Cache")
	void SaveOrUpdateLoot(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot);

	/**
	 * Evicts loot assigned to a given requester.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Cache")
	int32 EvictLoot(const UNinjaInventoryManagerComponent* Requester);
	
};
