// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryLootSource.h"
#include "LootSource_DataTable.generated.h"

class UDataTable;

/**
 * 
 */
UCLASS(DisplayName = "Data Table")
class NINJAINVENTORYGAMEPLAY_API ULootSource_DataTable : public UNinjaInventoryLootSource
{
	
	GENERATED_BODY()

public:

	// -- Begin Loot Source implementation
	virtual void SelectLoot_Implementation(UNinjaInventoryLootComponent* LootComponent, UNinjaInventoryManagerComponent* Requester, float CurrentBudget,
		const TArray<UNinjaInventoryLoot*>& CurrentLoot, float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot) override;
	// -- End Loot Source implementation
	
protected:

	/** Data table containing the loot available to this component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot Source", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaInventory.InventoryLoot"))
	TObjectPtr<UDataTable> LootTable;
	
};
