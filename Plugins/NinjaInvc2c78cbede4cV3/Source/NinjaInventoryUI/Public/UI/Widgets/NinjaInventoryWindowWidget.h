// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryCommonActivatableWidget.h"
#include "NinjaInventoryItemWidget.h"
#include "NinjaInventoryWindowWidget.generated.h"

class UNinjaEquipmentManagerComponent;
class UNinjaInventoryManagerComponent;
class UNinjaInventoryTooltipController;
class UNinjaInventoryAction_WaitForInventorySystem;

/**
 * A root widget for the Inventory view.
 *
 * It connects to the Inventory and Equipment system, so it will react to their events
 * and potentially forward such events to other widgets slotted into this one.
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryWindowWidget : public UNinjaInventoryCommonActivatableWidget
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryWindowWidget();

	// -- Begin Widget implementation
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	// -- End Widget implementation

	/**
	 * Attempts to connect to an Inventory Manager already available.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")	
	void TryConnectToInventoryManager();
	
	/**
	 * Provides the Inventory Manager represented by this window.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;

	/**
	 * Provides the Tooltip Controller available to this window.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryTooltipController* GetTooltipController() const;
	
	/**
	 * Requests the tooltip for the requesting widget.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryTooltipWidget* RequestTooltip(UUserWidget* RequestingWidget) const;
	
protected:

	UPROPERTY()
	TObjectPtr<UNinjaInventoryManagerComponent> InventoryManager;

	/**
	 * Class that will manage tooltips for Inventory Items.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Window")
	TSubclassOf<UNinjaInventoryTooltipController> TooltipControllerClass;
	
	/**
	 * How fast the widget will try to retrieve the Inventory Manager Component from the owner.
	 * This only happens during the Widget Initialization, when the Inventory must be available.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Window")
	float InventoryManagerPoolInterval;

	/**
	 * Initializes the connection with the Inventory Manager backing this Inventory Window.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|UI|Widgets")
	void InitializeInventory();

	/**
	 * Initializes the tooltip controller, which will be available using the proper getter.
	 */
	virtual void InitializeItemTooltipController();
	
	/**
	 * Initializes all relevant widgets in the widget tree.
	 */
	virtual void InitializeWidgets();

	/**
	 * Broadcasts the Inventory Manager to all inventory view models.
	 */
	virtual void InitializeViewModels();

	/**
	 * Sets this inventory window to the provided widget.
	 *
	 * By accessing the Inventory Window, widgets can access the Inventory Manager
	 * and the Inventory Tooltip Controller, both available via proper getters.
	 * 
	 * The widget must be valid and implement the Inventory Window Aware interface.
	 */
	virtual void SetInventoryWindowToWidget(UWidget* Widget);

	virtual void SetInventoryViewModel(UObject* Source);
	
private:

	UPROPERTY()
	TObjectPtr<UNinjaInventoryTooltipController> TooltipController;

	UPROPERTY()
	TObjectPtr<UNinjaInventoryAction_WaitForInventorySystem> InventoryManagerAction;
	
#if WITH_EDITOR
public:

	virtual const FText GetPaletteCategory() override
		{ return FText::FromString(TEXT("Ninja Inventory")); }

#endif
};
