// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemEquipment.generated.h"

class UNinjaEquipment;
class UNinjaEquipmentManagerComponent;

/**
 * Provides details about an item's equipment.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Equipment")
class NINJAINVENTORYUI_API UViewModel_ItemEquipment : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemEquipment();

	void SetHasEquipment(bool bNewHasEquipment);
	void SetEquipmentStateTag(FGameplayTag NewEquipmentStateTag);
	
protected:

	/** Informs if the item is represented by any equipment. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetHasEquipment")
	bool bHasEquipment;

	/** State of the equipment representing the item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	FGameplayTag EquipmentStateTag;
	
	// -- Begin Ninja Inventory Item implementation
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;
	// -- End Ninja Inventory Item implementation

	UFUNCTION()
	virtual void HandleEquipmentAdded(UNinjaEquipment* Equipment);

	UFUNCTION()
	virtual void HandleEquipmentStateChanged(UNinjaEquipment* Equipment);
	
	UFUNCTION()
	virtual void HandleEquipmentRemoved(UNinjaEquipment* Equipment);
	
private:

	UPROPERTY()
	TObjectPtr<UNinjaEquipmentManagerComponent> EquipmentManager;

};
