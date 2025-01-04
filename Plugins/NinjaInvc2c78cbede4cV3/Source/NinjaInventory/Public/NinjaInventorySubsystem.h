// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/StreamableManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Types/FInventoryItemDropRequest.h"
#include "Types/FInventoryItemQualityMappingTableRow.h"
#include "NinjaInventorySubsystem.generated.h"

class UNinjaInventoryItem;
class UEnvQuery;
class UDataTable;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;

/**
 * Multiple core functionalities related to the Inventory System.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventorySubsystem : public UGameInstanceSubsystem
{
	
	GENERATED_BODY()

public:
	
	// -- Begin Subsystem implementation
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// -- End Subsystem implementation

	/**
	 * Provides a random float value within a given range.
	 *
	 * The float will be retrieved from an internal seed initialized along with the Subsystem, meaning
	 * it will have a far more accurate distribution than simple floats from the Math Library or from
	 * un-initialized/different seeds.
	 *
	 * @param Min			Minimum value for the range, inclusive.
	 * @param Max			Maximum value for the range, inclusive.
	 *
	 * @return
	 *		A randomly generated float, withing the determined range, created
	 *		using an internal seed for better distribution.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory")
	float GetRandomFloatInRange(float Min, float Max) const;
	
	/**
	 * Provides Quality information for a given Gameplay Tag.
	 *
	 * @param OutRow		Row containing the Quality Information.
	 * @param QualityTag	Gameplay Tag representing the quality.
	 * @return				True if the Quality Mapping was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Found?"))
	bool GetQualityMapping(FInventoryItemQualityMappingTableRow& OutRow, UPARAM(meta = (Categories = "Inventory.Quality")) FGameplayTag QualityTag) const;

	/**
	 * Drops a default item instance, generated from the provided definition.
	 *
	 * It will use the Placement Query to find a proper location around the inventory's avatar.
	 *
	 * @param InventoryManager		Inventory Manager performing this request.
	 * @param ItemDefinition		Definition used for the item.
	 * @param Amount				Initial stack size for the item.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Item Instance"))
	void DropItemDefinition(UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItemDataAsset* ItemDefinition, int32 Amount);

	/**
	 * Drops an item instance.
	 *
	 * It will use the Placement Query to find a proper location around the inventory's avatar.
	 *
	 * @param InventoryManager		Inventory Manager performing this request.
	 * @param ItemInstance			Item Instance to drop.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Item Instance"))
	void DropItemInstance(UNinjaInventoryManagerComponent* InventoryManager, UNinjaInventoryItem* ItemInstance);

	/**
	 * Drops an array of item instances.
	 *
	 * It will group all instances in one actor or drop multiple actors based on the global setting
	 * "bGroupDroppedItemInstances", in the Ninja Inventory settings page.
	 *
	 * @param InventoryManager		Inventory Manager performing this request.
	 * @param ItemInstances			Item Instances to drop.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Item Instance"))
	void DropItemInstances(UNinjaInventoryManagerComponent* InventoryManager, TArray<UNinjaInventoryItem*> ItemInstances);

	/**
	 * Executes the Item Placement Query and returns results to the requester.
	 *
	 * The method "Instantiate Loot Actor From Query Results" is used to provide the Placement results
	 * from the Environment Query, once it finishes executing.
	 * 
	 * @param InventoryManager		Object requesting the locations.
	 * @return						The Query ID that can be used to identify this request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory", meta = (ReturnDisplayName = "Query ID"))
	int32 ExecuteItemPlacementQuery(UNinjaInventoryManagerComponent* InventoryManager);

protected:

	/** Quality table obtained from settings and fully loaded. */
	UPROPERTY()
	TObjectPtr<UDataTable> QualityMappingTable;

	/** Placement query obtained from settings and fully loaded. */
	UPROPERTY()
	TObjectPtr<UEnvQuery> ItemPlacementQuery;

	/** Requests the Asset Manager to load assets from the configuration. */
	virtual void LoadAssetsFromSettings();

	/** Handles assets loaded by the Asset Manager which may be stored now. */
	virtual void OnAssetsFromSettingsLoaded();

	/** Initializes the internal random stream. */
	virtual void InitializeStream();
	
	/**
	 * Receives the result of a Loot Placement Query and proceeds with the Loot Spawning.
	 * The Query ID should be used to trace back to the original request in "DropRequests".
	 */	
	void OnItemPlacementQueryCompleted(const TSharedPtr<FEnvQueryResult> Result);
	
private:

	/** Ensures that assets loaded from the Settings are kept in memory. */
	TSharedPtr<FStreamableHandle> AssetsHandle;

	/** All requests pending EQS results. */
	TMap<int32, FInventoryItemDropRequest> DropRequests;

	/** Stream used by the Subsystem to provide random floats. */
	FRandomStream RandomStream;
	
};
