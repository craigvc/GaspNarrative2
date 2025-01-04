// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryItemViewModel.h"
#include "ViewModel_ItemDurability.generated.h"

/**
 * Provides details about an item's durability.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Item Durability")
class NINJAINVENTORYUI_API UViewModel_ItemDurability : public UNinjaInventoryItemViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_ItemDurability();

	void SetIsIndestructible(bool bNewIsIndestructible);
	void SetIsBroken(bool bNewIsBroken);
	void SetDurability(int32 NewDurability);
	
protected:

	/** Informs if the item is indestructible. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetIsIndestructible")
	bool bIsIndestructible;

	/** Informs if the item is broken, so you don't have to keep tracking durability for that. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter = "SetIsBroken")
	bool bIsBroken;
	
	/** Level assigned to the backing item. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Category = "Inventory View Model", Setter)
	int32 Durability;

	// -- Begin View Model implementation
	virtual void InitializeData_Implementation() override;
	virtual void ClearData_Implementation() override;
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item) override;
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item) override;
	// -- End View Model implementation

	UFUNCTION()
	void HandleDurabilityChanged(UNinjaInventoryItem* Item, int32 NewDurability);

};
