// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryCommonWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"
#include "UI/Interfaces/InventoryItemViewInterface.h"
#include "UI/Interfaces/InventoryLootViewInterface.h"
#include "NinjaInventoryItemWidget.generated.h"

class UDragDropOperation;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryDragDropOperation;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemDragWidget;
class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;
class UNinjaInventoryTooltipWidget;
class UWidget;

/**
 * Represents an Inventory Item Instance in the User Interface.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryItemWidget : public UNinjaInventoryCommonWidget, public IUserObjectListEntry, 
	public IInventoryItemViewInterface, public IInventoryLootViewInterface
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryItemWidget();

	// -- Begin Widget implementation
	virtual void NativeConstruct() override;
	virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual void NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnFocusChanging(const FWeakWidgetPath& PreviousFocusPath, const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent) override;
	virtual void NativeOnFocusLost(const FFocusEvent& InFocusEvent) override;
	// -- End Widget implementation

	// -- Begin List Entry implementation
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	// -- End List Entry implementation
	
	// -- Begin Inventory Item View implementation
	virtual UNinjaInventoryItem* GetItem_Implementation() const override;
	virtual UNinjaInventoryContainer* GetContainer_Implementation() const override;
	virtual void SetItem_Implementation(UNinjaInventoryItem* NewItem) override;
	virtual void SetContainer_Implementation(UNinjaInventoryContainer* NewContainer) override;
	virtual void SetPositionInContainer_Implementation(int32 NewPosition) override;
	// -- End Inventory Item View implementation

	// -- Begin Inventory Loot View implementation
	virtual UNinjaInventoryLoot* GetLoot_Implementation() const override;
	virtual void SetLoot_Implementation(UNinjaInventoryLoot* NewLoot) override;
	// -- End Inventory Loot View implementation
	
	/**
	 * Creates the Drag Widget used by this item representation.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryItemDragWidget* CreateDragWidget() const;

	/**
	 * Gets the appropriate tooltip widget from the Inventory Window.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryTooltipWidget* GetTooltipWidget() const;
	
protected:

	/** Determines if this widget supports drag and drop operations. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Item")
	bool bSupportsDragOperation;

	/** Widget class used for the drag operation. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Item", NoClear, meta = (EditCondition = "bSupportsDragOperation"))
	TSubclassOf<UNinjaInventoryItemDragWidget> DragWidgetClass;

	/**
	 * Checks if a given drag operation is compatible between two item slots.
	 *
	 * By default, compatibility is determined by the Container receiving the Item Instance.
	 * This happens on the TARGET ITEM WIDGET, meaning it has to access a valid parent container
	 * that can execute the compatibility check against the SOURCE ITEM WIDGET's instance.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	virtual bool IsSupportedDragOperation(const UNinjaInventoryDragDropOperation* InOperation) const;

	/**
	 * Handles an item that was dropped on this widget.
	 */
	virtual bool HandleDroppedItem(UNinjaInventoryItem* ReceivedItem) const;

	/**
	 * Handles loot that was dropped on this widget.
	 */
	virtual bool HandleDroppedLoot(UNinjaInventoryLoot* ReceivedLoot) const;

	/**
	 * Refreshes the tooltips used by this widget.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI|Widgets")
	virtual void RefreshItemTooltip();
	
	/**
	 * Refreshes the item view models, checking if the view extension is valid.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI|Widgets")
	virtual void RefreshItemViewModels();

	/** Updates a view model entry. */
	virtual void UpdateItemViewModelWithItem(UObject* Source);
	
	/**
	 * Refreshes the loot view models, checking if the view extension is valid.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI|Widgets")
	virtual void RefreshLootViewModels();

	/** Updates a view model entry. */
	virtual void UpdateItemViewModelWithItemData(UObject* Source);
	
	/**
	 * Refreshes focus when an item or loot as set, after a drop operation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI|Widgets")
	virtual void RefreshFocusFromDropOperation();
	
private:
	
    /** Tracks a situation where an item was set before view models were initialized. */
	bool bPendingItemRefresh;

    /** Tracks a situation where loot was set before view models were initialized. */
	bool bPendingLootRefresh;

	/** Informs that a drop operation started and must be finished when an item is set. */
	bool bPendingDropHandling;
	
	/** Position this widget occupies in the parent. */
	int32 PositionInContainer;

	/** The item instance represented by this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryItem> Item;

	/** The item data represented by this widget. */
	UPROPERTY()
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData;

	/** Container holding this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainer> Container;

	/** Loot represented by this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryLoot> Loot;

	/** Current tooltip widget for this item. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryTooltipWidget> ItemTooltipWidget;

#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
};
