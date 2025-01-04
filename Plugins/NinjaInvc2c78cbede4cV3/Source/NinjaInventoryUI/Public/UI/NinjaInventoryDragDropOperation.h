// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "Components/NinjaInventoryLootComponent.h"
#include "NinjaInventoryDragDropOperation.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;
class UNinjaInventoryDragDropOperation;

/**
 * Specialized Drag and Drop operation that handles Inventory Items.
 */
UCLASS()
class NINJAINVENTORYUI_API UNinjaInventoryDragDropOperation : public UDragDropOperation
{
	
	GENERATED_BODY()

public:

	/**
	 * Creates a Drag and Drop Operation configured for the provided Item.
	 *
	 * @param Item					The Item instance added to the payload.
	 * @return						Instance configured with the proper objects.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI")
	static UNinjaInventoryDragDropOperation* CreateItemOperation(UNinjaInventoryItem* Item);

	/**
	 * Creates a Drag and Drop operation configured for the provided Loot.
	 *
	 * @param Loot					The Loot Entry added to the payload.
	 * @return						Instance configured with the proper objects.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI")	
	static UNinjaInventoryDragDropOperation* CreateLootOperation(UNinjaInventoryLoot* Loot);

	/**
	 * Informs if this payload has an item assigned to it.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	bool HasItem() const;

	/**
	 * Informs if this payload has loot assigned to it.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	bool HasLoot() const;
	
	/**
	 * Provides the Item stored in this operation. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	UNinjaInventoryItem* GetItem() const;

	/** Provides the Loot stored in this operation. */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	UNinjaInventoryLoot* GetLoot() const;

	/**
	 * Provides the Inventory Manager that originated this operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;

	/**
	 * Provides the Loot Manager that originated this operation.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	UNinjaInventoryLootComponent* GetLootManager() const;
	
	/**
	 * Checks if a given widget is the source for the current unsupported status.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|UI")
	bool IsSourceForUnsupportedOperation(UUserWidget* Source) const;
	
	/**
	 * Marks an unsupported operation from an incompatible drag.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI")
	void MarkUnsupportedOperation(UUserWidget* Source);

	/**
	 * Clears the current unsupported operation status.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI")
	void ClearUnsupportedOperation();
	
protected:

	UPROPERTY()
	TObjectPtr<UUserWidget> UnsupportedDragSource;
	
};
