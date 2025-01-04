// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemLevel.generated.h"

/**
 * Provides details about an item's level.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Level")
class NINJAINVENTORYUI_API UViewModel_ItemLevel : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()
	
public:

	UViewModel_ItemLevel();

	void SetLevel(float NewLevel);

protected:

	/** Level assigned to the backing item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float Level;

	// -- Begin View Model implementation
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;	
	// -- End View Model implementation

	UFUNCTION()
	void HandleLevelChanged(UNinjaInventoryItem* Item, int32 NewLevel);
	
};
