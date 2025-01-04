// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemEconomy.generated.h"

/**
 * Provides details about an item's prices.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Economy")
class NINJAINVENTORYUI_API UViewModel_ItemEconomy : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemEconomy();

	void SetCanBeBought(bool bNewValue);
	void SetCanBeSold(bool bNewValue);
	void SetUnitBuyPrice(float NewPrice);
	void SetTotalBuyPrice(float NewPrice);	
	void SetUnitSellPrice(float NewPrice);
	void SetTotalSellPrice(float NewPrice);
	
protected:

	/** Informs if this item can be bought. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetCanBeBought")
	bool bCanBeBought;

	/** Informs if this item can be sold. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetCanBeSold")
	bool bCanBeSold;
	
	/** Buy price for the current item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float UnitBuyPrice;

	/** Buy price for the current item, including the stack. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float TotalBuyPrice;
	
	/** Sell price for the current item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float UnitSellPrice;

	/** Sell price for the current item, including the stack. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	float TotalSellPrice;

	// -- Begin View Model implementation
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation

	UFUNCTION()
	void HandleTotalPriceChanged(UNinjaInventoryItem* Item, float BuyPrice, float SellPrice);

};
