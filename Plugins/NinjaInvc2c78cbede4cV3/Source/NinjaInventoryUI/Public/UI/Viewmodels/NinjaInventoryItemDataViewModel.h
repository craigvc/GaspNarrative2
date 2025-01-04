// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "NinjaInventoryItemDataViewModel.generated.h"

struct FInventoryDefaultItemMemory;

class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;

/**
 * Base class for view models exposing aspects of an item data.
 * Can be used to support view models that won't require specific information from an item.
 */
UCLASS(Abstract, Blueprintable)
class NINJAINVENTORYUI_API UNinjaInventoryItemDataViewModel : public UMVVMViewModelBase
{
	
	GENERATED_BODY()

public:
	
	UNinjaInventoryItemDataViewModel();

	/**
	 * Provides the current item data set to this view model.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	const UNinjaInventoryItemDataAsset* GetItemData() const;
	
	/**
	 * Sets or clear the item data assigned to this view model.
	 * If the data is cleared (set to null), memories are also cleared.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetItemData(const UNinjaInventoryItemDataAsset* NewItemData);

	/**
	 * Sets memories that could be used in conjunction with the Item Data.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetDefaultMemories(TArray<FInventoryDefaultItemMemory>& NewDefaultMemories);
	
protected:
	
	/** Informs if this view model has item data assigned to it. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory Item View Model")
	bool bHasItemData;

	/** Default memories that might be granted from initial items or loot. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory Item View Model")
	TArray<FInventoryDefaultItemMemory> DefaultMemories;
	
	/**
	 * Initializes the view model.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Item View Model")
	void InitializeData();
	virtual void InitializeData_Implementation() { }
	
	/**
	 * Clears the view model, resetting it to the initial state.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Item View Model")
	void ClearData();
	virtual void ClearData_Implementation() { }	

	/**
	 * Retrieves a fragment by a given class, defined by the provided template value.
	 */	
	template <typename ResultClass = UNinjaInventoryItemFragment>
	ResultClass* FindFragment() const
	{
		const UNinjaInventoryItemDataAsset* ItemData = GetItemData();
		if (!ItemData) return nullptr;
		return ItemData->FindFragment<ResultClass>();
	}	
	
private:

	/** Reference to the item data represented by this model. */
	TWeakObjectPtr<const UNinjaInventoryItemDataAsset> ItemDataPtr;
	
};
