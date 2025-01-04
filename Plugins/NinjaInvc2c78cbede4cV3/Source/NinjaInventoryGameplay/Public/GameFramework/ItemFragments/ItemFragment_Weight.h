// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "ItemFragment_GameplayEffect.h"
#include "Interfaces/Aspects/WeightableItemInterface.h"
#include "Interfaces/Context/ItemContextValidatorInterface.h"
#include "ItemFragment_Weight.generated.h"

class UNinjaInventoryItem;

/**
 * Represents the weight that an item has, so it contributes to encumbrance.
 */
UCLASS(DisplayName = "Weight")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Weight : public UItemFragment_GameplayEffect,
	public IWeightableItemInterface, public IItemContextValidatorInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemWeightChangedSignature, UNinjaInventoryItem*, Item, float, Weight);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the weight changes, which is usually consequence of changing the stack. */
	UPROPERTY(BlueprintAssignable)
	FItemWeightChangedSignature OnWeightChanged;

	UItemFragment_Weight();

	// -- Begin Validatable Item implementation
	virtual bool CanAddToInventory(const FInventoryItemContext& ItemContext) const override;
	// -- Begin Validatable Item implementation

	/**
	 * Provides the individual weight of a given item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual float GetWeight() const override;

	/**
	 * Provides the total weight of a given item, considering the stack.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual float GetTotalWeight(const UNinjaInventoryItem* Item) const override;
	
	/**
	 * Checks if an Inventory Manager can receive an item's weight.
	 *
	 * @param InventoryManager		Inventory Manager receiving the item.
	 * @param Item					Item to be tested.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanAddWeight(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItem* Item) const override;
	
protected:

	/**
	 * An arbitrary number that expresses the item's weight in either Kilograms or Pounds.
	 *
	 * This is assigned to the adequate Gameplay Effect that affects the Encumbrance, after being
	 * multiplied by the item's Stack Size, which generates the total weight.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0))
	float Weight;

	/**
	 * Gameplay Attribute used to store the current encumbrance.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FGameplayAttribute EncumbranceAttribute;
	
	/**
	 * Gameplay Attribute used to track the maximum weight allowed by the inventory.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FGameplayAttribute WeightLimitAttribute;
	
	// -- Begin Effect Fragment implementation
	virtual void OnApplyFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void SetByCallerMagnitudes(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const override;
	// -- End Effect Fragment implementation

	/**
	 * Internal check for the weight, without requiring any item or item data.
	 */
	bool Internal_CanAddWeight(const UNinjaInventoryManagerComponent* InventoryManager, float TotalWeight) const;
	
	/**
	 * Reacts to a change in the stack size, so we can update the weight.
	 */
	UFUNCTION()
	void HandleStackSizeChanged(UNinjaInventoryItem* Item, int StackSize);

};
