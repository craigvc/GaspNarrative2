// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FNinjaInventoryItemView.generated.h"

class UNinjaInventoryContainerDataAsset;
class UNinjaEquipment;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * A consolidated view of an item, with all relevant information readily available.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORYUI_API FNinjaInventoryItemView
{
	
	GENERATED_BODY()

	/** Actual item represented by this view. */
	UPROPERTY(BlueprintReadOnly, Category = "Item View")
	TObjectPtr<UNinjaInventoryItem> Item = nullptr;

	/** Container storing the item. */
	UPROPERTY(BlueprintReadOnly, Category = "Item View")
	TObjectPtr<UNinjaInventoryContainer> Container = nullptr;

	/** Equipment representing this item. */
	UPROPERTY(BlueprintReadOnly, Category = "Item View")
	TObjectPtr<UNinjaEquipment> Equipment = nullptr;
	
	/** Position occupied by the item in the container. */
	UPROPERTY(BlueprintReadOnly, Category = "Item View")
	int32 Position = INDEX_NONE;

	bool IsValid() const;
	
};
