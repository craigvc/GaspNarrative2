// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryItemViewInterface.generated.h"

class UWidget;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UDragDropOperation;

UINTERFACE(MinimalAPI)
class UInventoryItemViewInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * A visualization of an inventory item, most likely a widget.
 */
class NINJAINVENTORYUI_API IInventoryItemViewInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the item currently assigned to this view. May be null.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	UNinjaInventoryItem* GetItem() const;
	
	/**
	 * Sets the item represented by this view.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	void SetItem(UNinjaInventoryItem* NewItem);

	/**
	 * Provides the container backing this view.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	UNinjaInventoryContainer* GetContainer() const;
	
	/**
	 * Sets the container hosting this item view. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	void SetContainer(UNinjaInventoryContainer* NewContainer);
	
	/**
	 * Sets the position this item view occupies in the parent container.
	 *
	 * This is NOT the Item's position! This is the position that the Item Widget occupies
	 * in a container such as a Panel or List, which is used to move items around!
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	void SetPositionInContainer(int32 NewPosition);
	
	/**
	 * Checks if this Item View has an Item assigned to it.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	bool HasItem() const;
	virtual bool HasItem_Implementation() const;

	/**
	 * Compares this View's Item Instance with the one provided. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Item View Interface")
	bool CompareItem(UNinjaInventoryItem* OtherItem) const;
	virtual bool CompareItem_Implementation(UNinjaInventoryItem* OtherItem) const;

};
