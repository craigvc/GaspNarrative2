// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FInventoryItemDropRequest.generated.h"

class AActor;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Represents a drop request in progress.
 */
USTRUCT(BlueprintType)
struct FInventoryItemDropRequest
{
	
	GENERATED_BODY()

	/** Defines if items should be grouped together. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Request")
	bool bGroupItems = true;
	
	/** Identifier for the EQS Placement Query. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Request")
	int32 PlacementQueryID = INDEX_NONE;

	/**
	 * Class that represents this item when placed in the world.
	 * Only required if items are being grouped into a single pickup actor.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Request", meta = (EditCondition = "bGroupItems", MustImplement = "/Script/NinjaInventory.InventoryPickupInterface"))
	TSubclassOf<AActor> PickupActorClass;

	/** Inventory Manager that requested this drop. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Request")
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager = nullptr;
	
	/** Item Instance being dropped. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Request")
	TArray<TObjectPtr<UNinjaInventoryItem>> ItemInstances;
	
	/**
	 * Checks if this request has valid data.
	 */
	bool HasValidData() const;
	
};