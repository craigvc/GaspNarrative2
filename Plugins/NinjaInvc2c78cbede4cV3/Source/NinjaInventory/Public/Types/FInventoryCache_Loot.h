// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FInventoryCache_Loot.generated.h"

class AActor;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;

/**
 * Stores selected loot that can be used later.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryCachedLoot
{

	GENERATED_BODY()

	/** Actor that owns the Inventory Manager that requested the loot. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cached Loot")
	TWeakObjectPtr<const AActor> RequesterActor;

	/** All loot that was pre-selected. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cached Loot")
	TArray<TObjectPtr<UNinjaInventoryLoot>> SelectedLoot;
	
};
