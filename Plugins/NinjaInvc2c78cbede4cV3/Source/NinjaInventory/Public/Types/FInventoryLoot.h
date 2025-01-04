// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FInventoryLoot.generated.h"

class UNinjaInventoryItemDataAsset;

/**
 * Table Structure for available loot.
 */
USTRUCT(BlueprintType)
struct FInventoryLoot : public FTableRowBase
{
	
	GENERATED_BODY()

	/** Item Data, containing a Loot Fragment. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot")
	TObjectPtr<UNinjaInventoryItemDataAsset> ItemData;

};