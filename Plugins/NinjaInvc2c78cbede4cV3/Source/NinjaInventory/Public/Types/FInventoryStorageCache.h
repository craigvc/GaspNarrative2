// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FInventoryStorageCache.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * Caches storage information about items and their storage.
 */
USTRUCT(BlueprintType)
struct FInventoryStorageCache
{
	
	GENERATED_BODY()

	/** Item owning this storage information. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Cache")
	TObjectPtr<UNinjaInventoryItem> Item;

	/** Primary Container where the item is stored. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Cache")
	TObjectPtr<UNinjaInventoryContainer> Container;

	/** Informs if this is the primary container for the item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Cache")
	bool bIsPrimaryContainer;
	
	/** Position the item is in the container. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Container Cache")
	int32 Position;

	FInventoryStorageCache()
	{
		bIsPrimaryContainer = false;
		Position = INDEX_NONE;
	}
};