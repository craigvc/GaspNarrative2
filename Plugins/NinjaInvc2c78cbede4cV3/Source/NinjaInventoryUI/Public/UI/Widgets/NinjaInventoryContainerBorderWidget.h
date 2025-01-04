// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CommonBorder.h"
#include "UI/Interfaces/InventoryContainerSlotInterface.h"
#include "NinjaInventoryContainerBorderWidget.generated.h"

struct FNinjaInventoryItemView;

class UUserWidget;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryContainerWidget;

/**
 * A border used to represent a container meant to display Equipment Instances.
 * 
 * Since Equipment Containers are set to have one slot, this widget is configured to only support
 * a single element (bCanHaveMultipleChildren = false), meaning either a pre-defined widget added
 * in design-time or a dynamic widget, instantiated in code.
 *
 * Since equipment pieces will usually occupy specific areas of the inventory UI, and also commonly
 * display something like "empty icons", this border is designed to support already having a child widget.
 *
 * However, if you design your UI that way, then MAKE SURE that your child widget implements the Inventory
 * Item View Interface and that it properly switches between empty and occupied states, defined when
 * the Inventory Item instance is null or set, respectively (Has Inventory Item function).
 */
UCLASS(DisplayName = "Inventory Container Border", meta = (Category = "Ninja Inventory"))
class NINJAINVENTORYUI_API UNinjaInventoryContainerBorderWidget : public UCommonBorder, public IInventoryContainerSlotInterface
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryContainerBorderWidget();
	
	// -- Begin Inventory Container Slot implementation
	virtual void InitializeContainerSlot_Implementation(UUserWidget* ContainerView) override;
	virtual void SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items) override;
	// -- End Inventory Container Slot implementation	

protected:

	/** Determines if the container renders empty slots or only slots occupied by items. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Container Border")
	bool bFillEmptySlots;

private:

	bool bHasInitializedFromView;
	
	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainerWidget> CurrentContainerView;

	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainer> Container;
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
};
