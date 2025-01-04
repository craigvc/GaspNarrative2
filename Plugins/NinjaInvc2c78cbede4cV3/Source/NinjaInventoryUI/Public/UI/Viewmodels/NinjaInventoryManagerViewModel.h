// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "NinjaInventoryManagerViewModel.generated.h"

class UNinjaInventoryManagerComponent;

/**
 * Base class for view models exposing aspects of the inventory manager. 
 */
UCLASS(Abstract, Blueprintable)
class NINJAINVENTORYUI_API UNinjaInventoryManagerViewModel : public UMVVMViewModelBase
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryManagerViewModel();

	/**
	 * Provides the current inventory manager set to this view model.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;
	
	/**
	 * Sets or clear the inventory manager assigned to this view model.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|View Model")
	void SetInventoryManager(UNinjaInventoryManagerComponent* InventoryManager);

protected:

	/** Informs if this view model has an item assigned to it. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory Manager View Model")
	bool bHasInventoryManager;

	/**
	 * Allows View Models to bind to delegates exposed by the Inventory Manager.
	 * 
	 * This can also be used to access/bind to delegates exposed by the Ability System Component
	 * related to/provided by the Inventory Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Manager View Model")
	void BindToInventoryManager(UNinjaInventoryManagerComponent* InventoryManager);

	/**
	 * Allows view Models to unbind from delegates from an Item and/or its fragments.
	 *
	 * This can also be used to access/unbind from delegates exposed by the Ability System Component
	 * related to/provided by the Inventory Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Manager View Model")
	void UnbindFromInventoryManager(UNinjaInventoryManagerComponent* InventoryManager);

	/**
	 * Initializes the view model using a new Inventory Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Manager View Model")
	void InitializeData();

	/**
	 * Clears the view model due to the Inventory Manager being cleared.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Manager View Model")
	void ClearData();

private:

	/** Weak reference to the inventory manager connected to this model. */
	TWeakObjectPtr<UNinjaInventoryManagerComponent> InventoryManagerPtr;
	
};
