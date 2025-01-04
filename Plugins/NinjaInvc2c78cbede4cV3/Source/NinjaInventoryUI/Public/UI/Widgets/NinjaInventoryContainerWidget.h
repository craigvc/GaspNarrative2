// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryCommonWidget.h"
#include "Blueprint/UserWidget.h"
#include "UI/Interfaces/InventoryContainerViewInterface.h"
#include "NinjaInventoryContainerWidget.generated.h"

class UNamedSlot;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryManagerComponent;

/**
 * Base widget for any container representation.
 *
 * It's responsible for managing the View Model and receiving events from it.
 * These events are properly broadcast to any actual view added to the named
 * slot available in this widget.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryContainerWidget : public UNinjaInventoryCommonWidget, public IInventoryContainerViewInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Inventory Container View implementation
	virtual void SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items) override;
	virtual UNinjaInventoryContainer* GetContainer_Implementation() const override;
	virtual UUserWidget* CreateItemWidget_Implementation(UNinjaInventoryItem* Item, int32 PositionInContainer) override;
	virtual void ConfigureItemWidget_Implementation(UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer) override;
	virtual void HandleInventoryWindowSet_Implementation() override;
	// -- End Inventory Container View implementation	

	/**
	 * A viewmodel-friendly function that can set items in the container.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, category = "Ninja Inventory|UI|Widgets")
	void RefreshItems(const TArray<FNinjaInventoryItemView>& Items);

protected:

	/** The container represented by this widget. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Container")
	TObjectPtr<UNinjaInventoryContainerDataAsset> ContainerData;

	/** Widget instantiated to represent an item in this container. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Container", meta = (MustImplement = "/Script/NinjaInventoryUI.InventoryItemViewInterface"))
	TSubclassOf<UUserWidget> ItemWidgetClass;
	
	/** The Slot containing the actual container view. */
	UPROPERTY(BlueprintReadWrite, Category = "Inventory Container", meta = (BindWidget))
	TObjectPtr<UNamedSlot> ContainerViewSlot;
	
	UFUNCTION()
	virtual void HandleContainerAdded(UNinjaInventoryContainer* NewContainer);
	
	/** Broadcasts the Inventory Manager to all inventory view models. */
	UFUNCTION()
	virtual void InitializeViewModels();

	/** Updates a view model entry. */
	virtual void UpdateContainerViewModel(UObject* Source);
	
	virtual void UpdateWidgetTree();

	UWidget* GetContainerViewFromSlot() const;

private:

	/** Reusable tooltip widget that can be assigned to children. */
	UPROPERTY()
	TObjectPtr<UWidget> ItemTooltipWidget;

	/** The container represented by this widget. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryContainer> Container;

	/** Stores a reference to the Inventory Window. */
	TWeakObjectPtr<UNinjaInventoryWindowWidget> WindowWidget;
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
	
};
