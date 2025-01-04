// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "ItemFragment_Economy.generated.h"

class UNinjaInventoryManagerComponent;
class UNinjaInventoryItem;

/**
 * Defines prices for when items are bought or sold.
 */
UCLASS(DisplayName = "Economy")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Economy : public UNinjaInventoryItemFragment
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemTotalPriceChangedSignature, UNinjaInventoryItem*, Item, float, BuyPrice, float, SellPrice);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the prices change, which is usually consequence of changing the stack. */
	UPROPERTY(BlueprintAssignable)
	FItemTotalPriceChangedSignature OnTotalPriceChanged;
	
	UItemFragment_Economy();

	// -- Begin Effect Fragment implementation
	virtual void OnInitializeFragment_Implementation(UNinjaInventoryItem* Item) override;
	// -- End Effect Fragment implementation
	
	/**
	 * Checks if this item can be bought.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	bool CanBeBought() const { return bCanBeBought; }

	/**
	 * Checks if this item can be sold.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	bool CanBeSold() const { return bCanBeSold; }

	/**
	 * Provides the individual unitary price when buying.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	float GetBuyPrice() const;

	/**
	 * Provides the individual unitary price when buying.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	float GetSellPrice() const;
	
	/**
	 * Provides the total buy price for an item, considering its stack.
	 * If the item cannot be bought, this value is always zero.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual float GetTotalBuyPrice(const UNinjaInventoryItem* Item) const;	

	/**
	 * Provides the total buy price for an item, considering its stack.
	 * If the item cannot be bought, this value is always zero.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual float GetTotalSellPrice(const UNinjaInventoryItem* Item) const;
	
protected:

	/** Determines if owners can buy this item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bCanBeBought;
	
	/** Price for this item when is being bought by owners. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0, UIMax = 1, ClampMax = 1, EditCondition = "bCanBeBought"))
	float BuyPrice;

	/** Determines if owners can sell this item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bCanBeSold;
	
	/** Price for this item when is being sold by owners. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0, UIMax = 1, ClampMax = 1, EditCondition = "bCanBeSold"))
	float SellPrice;

	/**
	 * Provides the stack size from a stack fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	static int32 GetStackSize(const UNinjaInventoryItem* Item);

	/**
	 * Reacts to a change in the stack size, so we can update the prices.
	 */
	UFUNCTION()
	void HandleStackSizeChanged(UNinjaInventoryItem* Item, int StackSize);
	
};
