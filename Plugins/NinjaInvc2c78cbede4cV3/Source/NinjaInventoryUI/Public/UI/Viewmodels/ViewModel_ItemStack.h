// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemStack.generated.h"

class UItemFragment_Stack;

/**
 * Provides details about an item's stack.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Stack")
class NINJAINVENTORYUI_API UViewModel_ItemStack : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemStack();

	void SetHasStack(bool bNewHasStack);
	void SetStackSize(int32 NewStackSize);
	void SetStackLimit(int32 NewStackLimit);
	void SetMaximumLimit(int32 NewMaximumLimit);
	
protected:

	/** Informs if the item has a stack, meaning more than one item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetHasStack")
	bool bHasStack;
	
	/** Stack size for the current item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	int32 StackSize;

	/** Maximum stack size for the current item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	int32 StackLimit;

	/** Maximum amount of items allowed in the inventory. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	int32 MaximumLimit;

	// -- Begin View Model implementation
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	// -- End View Model implementation
	
	UFUNCTION()
	void HandleStackSizeChanged(UNinjaInventoryItem* Item, int NewStackSize);

};
