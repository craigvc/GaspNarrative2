// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemWeight.generated.h"

class UItemFragment_Weight;

/**
 * Provides details about an item's weight.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Weight")
class NINJAINVENTORYUI_API UViewModel_ItemWeight : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemWeight();

	void SetWeight(float NewWeight);
	void SetTotalWeight(float NewWeight);
	
protected:

	/** Base weight for the item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float Weight;
	
	/** Total Weight for the current item, considering the stack. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float TotalWeight;

	// -- Begin View Model implementation
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation

	UFUNCTION()
	void HandleWeightChanged(UNinjaInventoryItem* Item, float NewWeight);
	
};
