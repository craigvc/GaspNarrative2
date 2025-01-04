// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryWindowAwareInterface.generated.h"

class UNinjaInventoryWindowWidget;

UINTERFACE(MinimalAPI)
class UInventoryWindowAwareInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Makes inventory widgets aware of their parent window.
 */
class NINJAINVENTORYUI_API IInventoryWindowAwareInterface
{
	GENERATED_BODY()

public:

	/**
	 * Provides the Inventory Window hosting other Inventory Widgets.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Inventory Window Aware Interface")
	void SetInventoryWindowWidget(UNinjaInventoryWindowWidget* InventoryWindowWidget);
	
};