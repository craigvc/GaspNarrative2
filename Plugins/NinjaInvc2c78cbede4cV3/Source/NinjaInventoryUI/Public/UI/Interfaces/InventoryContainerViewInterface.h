// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryContainerViewInterface.generated.h"

struct FNinjaInventoryItemView;

class UNinjaInventoryContainer;
class UNinjaInventoryItem;

UINTERFACE(MinimalAPI)
class UInventoryContainerViewInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A visualization of a container, most likely a widget.
 */
class NINJAINVENTORYUI_API IInventoryContainerViewInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Sets new items to the container.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container View Interface")
	void SetItems(const TArray<FNinjaInventoryItemView>& Items);
	
	/**
	 * Provides the container storing this item view.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container View Interface")
	UNinjaInventoryContainer* GetContainer() const;

	/**
	 * Creates an item widget that can be used by the container.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container View Interface")
	UUserWidget* CreateItemWidget(UNinjaInventoryItem* Item, int32 PositionInContainer);

	/**
	 * Central way to set all required properties in an item widget, via interface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Container View Interface")
	void ConfigureItemWidget(UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer);
	
};