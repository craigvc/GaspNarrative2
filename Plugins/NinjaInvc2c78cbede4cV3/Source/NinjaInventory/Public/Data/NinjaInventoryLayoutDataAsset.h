// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "NinjaInventoryLayoutDataAsset.generated.h"

class UNinjaInventoryContainerDataAsset;

/**
 * Defines the base layout of an Inventory.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventoryLayoutDataAsset : public UDataAsset
{
	
	GENERATED_BODY()

public:

	/** A name that can be used when the inventory using this layout is exposed to the UI. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Layout")
	FText DisplayName;
	
	/** Tag Query used to retrieve default items in this inventory. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Layout")
	FGameplayTagQuery DefaultContainerQuery;
	
	/** All container definitions used by an inventory component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Layout")
	TArray<TObjectPtr<const UNinjaInventoryContainerDataAsset>> Containers;
	
	UNinjaInventoryLayoutDataAsset();
	
};
