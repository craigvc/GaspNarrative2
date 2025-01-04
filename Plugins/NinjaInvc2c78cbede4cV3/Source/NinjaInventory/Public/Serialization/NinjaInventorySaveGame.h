// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FInventorySerialization.h"
#include "GameFramework/SaveGame.h"
#include "NinjaInventorySaveGame.generated.h"

class UNinjaInventoryManagerComponent;

/**
 * Save Game representation for the Inventory Manager.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventorySaveGame : public USaveGame
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Retrieves the Inventory Manager's data and saves it. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Save Game")
	virtual void SaveInventory(UNinjaInventoryManagerComponent* InventoryManager);

	/**
	 * Loads a saved game into an Inventory Manager.
	 * 
	 * If the target inventory is already initialized, it might reset it and override
	 * any current data with the one obtained from the saved game.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Save Game")
	virtual void LoadInventory(UNinjaInventoryManagerComponent* InventoryManager);

protected:

	UPROPERTY()
	FInventoryManagerRecord InventoryRecord;
	
};
