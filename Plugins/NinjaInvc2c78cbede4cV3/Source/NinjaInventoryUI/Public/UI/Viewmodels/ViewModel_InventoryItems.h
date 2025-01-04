// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryContainerViewModel.h"
#include "NinjaInventoryManagerViewModel.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "ViewModel_InventoryItems.generated.h"

struct FNinjaInventoryItemView;

class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * Provides updates on the items stored in the inventory.
 */
UCLASS(BlueprintType, DisplayName = "Inventory Items")
class NINJAINVENTORYUI_API UViewModel_InventoryItems : public UNinjaInventoryContainerViewModel
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides all items (item views) stored in this view model.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model", FieldNotify)
	TArray<FNinjaInventoryItemView> GetItems() const;

protected:

	// -- Begin Inventory Manager View Model implementation
	virtual void BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	virtual void UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End Inventory Manager View Model implementation

	/**
	 * Handles an Inventory Item that was added to the backing inventory.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = " Inventory Manager View Model")
	void HandleItemAdded(UNinjaInventoryItem* Item);

	/**
	 * Handles a change in the cached item storage.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = " Inventory Manager View Model")
	void HandleItemStorageChanged(UNinjaInventoryItem* Item, UNinjaInventoryContainer* OtherContainer, int32 Position);
	
	/**
	 * Handles an Inventory Item that was removed from the backing inventory.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = " Inventory Manager View Model")
	void HandleItemRemoved(UNinjaInventoryItem* Item);

};
