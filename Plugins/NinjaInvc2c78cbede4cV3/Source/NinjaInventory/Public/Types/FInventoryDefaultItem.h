// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "FInventoryDefaultItem.generated.h"

class UNinjaInventoryItemDataAsset;

/**
 * A default item that can be assigned to an inventory.
 */
USTRUCT(BlueprintType)
struct FInventoryDefaultItem
{
	
	GENERATED_BODY()

	/** Definition of the item being granted. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default Item")
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData;

	/** Initial values for fragment memories. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default Item")
	TArray<FInventoryDefaultItemMemory> InitialFragmentData;

	FInventoryDefaultItem();
	
	bool operator==(const FInventoryDefaultItem& Other) const;
	bool operator!=(const FInventoryDefaultItem& Other) const;
	
};