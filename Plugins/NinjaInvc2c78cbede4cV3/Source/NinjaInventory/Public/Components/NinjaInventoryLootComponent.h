// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/NinjaInventoryCoreComponent.h"
#include "Interfaces/InventoryLootCacheInterface.h"
#include "NinjaInventoryLootComponent.generated.h"

class UDataTable;
class ILootableItemInterface;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryLoot;
class UNinjaInventoryLootSelector;

/**
 * Manages loot tables.
 *
 * This is the simplest version of the Inventory Manager, that can be used by simpler actors
 * that won't need the full Inventory Structure but are still loot providers, such as common
 * chests or simpler AI enemies that won't need inventory/equipment.
 */
UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class NINJAINVENTORY_API UNinjaInventoryLootComponent : public UNinjaInventoryCoreComponent
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryLootComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	/**
	 * Retrieves the object used for loot cache.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	TScriptInterface<IInventoryLootCacheInterface> GetLootCache() const;

	/**
	 * Evaluates a specific lootable item instance and adds it to the loot table.
	 *
	 * @param Requester			Inventory Manager requesting the item.
	 * @param Item				Item to evaluate for the loot.
	 * @param DefaultSelector	Default Loot Selector configured in the project.
	 * @param SelectedLoot		Collection of loot to already selected.
	 * @param bOutDropped		Informs if the loot has dropped.
	 * @param OutQuantity		How many items dropped.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	virtual void PerformLootRolls(UNinjaInventoryManagerComponent* Requester, UNinjaInventoryItem* Item,
		const UNinjaInventoryLootSelector* DefaultSelector, const TArray<UNinjaInventoryLoot*>& SelectedLoot,
		bool& bOutDropped, int32& OutQuantity);
	
	/**
	 * Selects all lootable items from this inventory, applying their selectors.
	 *
	 * @param Requester
	 *		Inventory Manager requesting the loot. The selected loot will be provided to that
	 *		manager, via the "ReceiveLoot" method, using this manager as a source.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	void SelectLoot(UNinjaInventoryManagerComponent* Requester);

	/**
	 * Provides the default Loot Selector configured for the project.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot")
	static const UNinjaInventoryLootSelector* GetDefaultLootSelector();
	
protected:

	/** Data table containing the loot available to this component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaInventory.InventoryLoot"))
	TObjectPtr<UDataTable> LootTable;

	/** Loot strategy for this inventory. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot", NoClear, meta = (MustImplement = "/Script/NinjaInventory.InventoryLootCacheInterface"))
	TSubclassOf<UObject> LootCacheClass;

	/**
	 * Determines if items being looted should be removed from the owner's inventory.
	 *
	 * For players dropping their items, you probably want to set this to true. But for other
	 * enemies, such as bosses, you might want to allow the same item to be dropped multiple times
	 * for different players.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot")
	bool bShouldRemoveLootFromInventory;
	
	/**
	 * Initializes the Loot Cache, from the provided class.
	 */
	void InitializeLootCache();

	/**
	 * Effectively handles the Loot selection, separated from any network/replication.
	 * 
	 * Can be extended for multiple reasons, but a common use case is to implement persistent
	 * loot once it has been generated for a requester, so the same loot is always provided.
	 */
	virtual void Internal_SelectLootFromInventory(UNinjaInventoryManagerComponent* Requester);

	/**
	 * Sends a server RPC to select loot for a requester.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SelectLoot(UNinjaInventoryManagerComponent* Requester);		
	
private:

	/** Instance of the loot cache. */
	UPROPERTY()
	TObjectPtr<UObject> LootCache;	
	
};
