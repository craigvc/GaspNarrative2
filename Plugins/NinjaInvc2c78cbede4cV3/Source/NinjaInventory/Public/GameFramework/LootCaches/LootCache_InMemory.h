// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/LootCaches/LootCache_None.h"
#include "LootCache_InMemory.generated.h"

struct FInventoryCachedLoot;

class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;

/**
 * Stores cached loot in memory.
 */
UCLASS(DisplayName = "In-Memory")
class NINJAINVENTORY_API ULootCache_InMemory : public ULootCache_None
{

	GENERATED_BODY()

protected:

	/** Loot that has been cached for requesters */
	UPROPERTY()
	TArray<FInventoryCachedLoot> CachedLoot;

	// -- Begin Loot Cache implementation
	virtual void FilterLootByRequester_Implementation(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const override;
	virtual void SaveOrUpdateLoot_Implementation(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot) override;
	virtual int32 EvictLoot_Implementation(const UNinjaInventoryManagerComponent* Requester) override;
	// -- End Loot Cache implementation

	/**
	 * Removes cached entries related to an actor that has been destroyed.
	 */
	UFUNCTION()
	void HandleActorDestroyed(AActor* DestroyedActor);
	
};
