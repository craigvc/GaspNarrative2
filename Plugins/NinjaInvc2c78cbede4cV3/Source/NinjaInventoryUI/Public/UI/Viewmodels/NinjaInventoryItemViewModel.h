// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemDataViewModel.h"
#include "NinjaInventoryItemViewModel.generated.h"

class UNinjaInventoryItem;

/**
 * Base class for view models exposing aspects of items. 
 */
UCLASS(Abstract, Blueprintable)
class NINJAINVENTORYUI_API UNinjaInventoryItemViewModel : public UNinjaInventoryItemDataViewModel
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryItemViewModel();

	/**
	 * Checks if the provided item matches the one assigned to this view model.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	bool IsSameItem(const UNinjaInventoryItem* OtherItem) const;
	
	/**
	 * Provides the current item set to this view model.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	UNinjaInventoryItem* GetItem() const;
	
	/**
	 * Sets or clear the item assigned to this view model.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetItem(UNinjaInventoryItem* NewItem);

protected:

	/** Informs if this view model has an item assigned to it. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory Item View Model")
	bool bHasItem;

	/**
	 * Allows View Models to bind to delegates from an item and/or its fragments. 
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Item View Model")
	void BindToItem(UNinjaInventoryItem* Item);

	/**
	 * Allows view Models to unbind from delegates from an Item and/or its fragments. 
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Item View Model")
	void UnbindFromItem(UNinjaInventoryItem* Item);
	
private:

	/** Weak reference to the item represented by this model. */
	TWeakObjectPtr<UNinjaInventoryItem> ItemPtr;
	
	UFUNCTION()
	void HandleItemAdded(UNinjaInventoryItem* Item);
	
	UFUNCTION()
	void HandleItemRemoved(UNinjaInventoryItem* Item);	
	
};
