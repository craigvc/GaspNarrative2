// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryLootViewInterface.generated.h"

class UWidget;
class UNinjaInventoryLoot;

UINTERFACE(MinimalAPI)
class UInventoryLootViewInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A visualization of an inventory loot, most likely a widget.
 */
class NINJAINVENTORYUI_API IInventoryLootViewInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the loot currently assigned to this view. May be null.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	UNinjaInventoryLoot* GetLoot() const;
	
	/**
	 * Sets the loot represented by this view.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	void SetLoot(UNinjaInventoryLoot* NewLoot);

	/**
	 * Informs if the view has a loot assigned to it.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	bool HasLoot() const;
	virtual bool HasLoot_Implementation() const;

};
