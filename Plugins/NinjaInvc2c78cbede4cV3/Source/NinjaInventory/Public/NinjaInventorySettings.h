// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "NinjaInventorySettings.generated.h"

class ANinjaInventoryPickupActor;
class UDataTable;
class UEnvQuery;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryLootSelector;

/**
 * Developer settings for the Ninja Inventory module.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Ninja Inventory"))
class NINJAINVENTORY_API UNinjaInventorySettings : public UDeveloperSettings
{
	
	GENERATED_BODY()

public:

	/** Default class used for container instances. */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TSubclassOf<UNinjaInventoryContainer> DefaultContainerInstance;
	
	/** Default class used for item instances. */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TSubclassOf<UNinjaInventoryItem> DefaultItemInstance;

	/** Default Loot Selector assigned to Inventory Managers. */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TSubclassOf<UNinjaInventoryLootSelector> DefaultLootSelector;
	
	/**
	 * Maps Quality Tags to their appropriate color and Localized Text.
	 * It expects FInventoryQualityMappingTableRow entries.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Inventory", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaInventory.InventoryItemQualityMappingTableRow"))
	TSoftObjectPtr<UDataTable> QualityMappingTable;

	/**
	 * Defines if new items are automatically merged with incomplete stacks.
	 *
	 * If set to true, the default Stack Configuration will attempt to retrieve all
	 * incomplete stacks in the Inventory Manager and fill them to their capacity,
	 * before creating new entries.
	 *
	 * Keep in mind that, at least in the default stack implementation, items are
	 * compared by data alone. So if they have customizations in their memories,
	 * those might get lost during the merge process.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Item Management")
	bool bAutomaticallyMergeNewItems;

	/**
	 * Defines how this fragment tests new items being added to the inventory.
	 * 
	 * If set to true, will always check an entire stack before adding new items, so if
	 * a stack of 30 items is being added, it will ensure that all 30 items can be added,
	 * disregarding the possibility of breaking the stack.
	 *
	 * If set to false, it will add room to add at least one item from the entire stack,
	 * meaning 1 item could be added/absorbed, and the remainder would be discarded.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Item Management")
	bool bPerformStrictStackChecks;
	
	/** Defines if Item Instances should be grouped when dropped or not. */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Item Management")
	bool bGroupDroppedItemInstances;
	
	UNinjaInventorySettings();

};
