// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/Launch/Resources/Version.h"
#include "NinjaInventoryItemDragWidget.generated.h"

class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UDragDropOperation;

UCLASS()
class NINJAINVENTORYUI_API UNinjaInventoryItemDragWidget : public UUserWidget
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryItemDragWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Widget implementation
	virtual void NativeConstruct() override;
	// -- End Widget implementation
	
	/**
	 * Provides the item represented by this drag widget.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryItem* GetItem() const;
	
	/**
	 * Sets the item represented by this drag widget.
	 *
	 * It will allow the widget to use the item internally and also broadcast the item
	 * to View Models that have bindings with this widget.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	void SetItem(UNinjaInventoryItem* NewItem);

	/**
	 * Provides the loot represented by this drag widget.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryLoot* GetLoot() const;

	/**
	 * Sets the loot represented by this drag widget.
	 *
	 * It will allow the widget to use the loot's data internally and also broadcast the item
	 * to View Models that have bindings with this widget.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	void SetLoot(UNinjaInventoryLoot* NewILoot);
	
	/**
	 * Allows this widget to inform about an invalid drag operation.
	 *
	 * @param DragOperation		Details about the Drag operation.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Item Drag Widget")
	void DisplayIncompatibleDragOperation(UDragDropOperation* DragOperation);
	virtual void DisplayIncompatibleDragOperation_Implementation(UDragDropOperation* DragOperation) { }
	
	/**
	 * Allows this widget to inform about an invalid drag operation.
	 *
	 * @param DragOperation		Details about the Drag operation.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Item Drag Widget")
	void RevertIncompatibleDragOperation(UDragDropOperation* DragOperation);
	virtual void RevertIncompatibleDragOperation_Implementation(UDragDropOperation* DragOperation) { }
	
protected:

	/**
	 * If valid, forwards the current item to any view models bound to the instance.
	 */
	virtual void UpdateViewModels();

	/** Updates a view model entry. */
	virtual void UpdateItemViewModel(UObject* Source);

	/**
	 * Notifies an item that has been set to this widget.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Item Drag Widget")
	void HandleItemSet();
	virtual void HandleItemSet_Implementation() { }

	/**
	 * Notifies a loot that has been set to this widget.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Item Drag Widget")
	void HandleLootSet();
	virtual void HandleLootSet_Implementation() { }
	
private:

	/** Item represented by this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryItem> Item;

	/** Item represented by this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryLoot> Loot;
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif	
};
