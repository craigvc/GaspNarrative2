// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "NinjaInventoryTooltipController.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryItemWidget;
class UNinjaInventoryTooltipWidget;

/**
 * Controls the widget instances and which ones are provided for certain scenarios.
 *
 * By default, this controller will provide a classic tooltip for items that are currently
 * being focused in the UI, with an Inventory Item assigned to them.
 *
 * You can extend this component to provide tooltips to other scenarios, such as empty item
 * widgets, representing Equipment Slots, where the Container name should be displayed.
 *
 * Furthermore, this controller uses the Unreal Engine's Widget Tooltip system, but you can
 * also opt out of that and create your own full tooltip system. For that, keep in mind that
 * you have access to the Tick function, routed from the Inventory Window.
 */
UCLASS(Blueprintable, BlueprintType)
class NINJAINVENTORYUI_API UNinjaInventoryTooltipController : public UObject
{
	
	GENERATED_BODY()

public:

	/**
	 * Initializes the tooltip widgets.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Tooltip Controller")
	void Initialize(APlayerController* OwningPlayer);

	/**
	 * Ticks this controller, aligned with the Inventory Window's tick.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Tooltip Controller")
	void Tick(float DeltaTime);
	
	/**
	 * Requests the tooltip for the requesting widget.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryTooltipWidget* RequestTooltip(UUserWidget* RequestingWidget);

	/**
	 * Provides the current Item Widget holding the tooltip.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	UNinjaInventoryItemWidget* GetTooltipHolder() const;
	
protected:

	/** Widget class used for tooltips representing any items. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tooltip Controller")
	TSubclassOf<UNinjaInventoryTooltipWidget> ItemTooltipWidgetClass;

	/**
	 * Selects the appropriate tooltip widget for the requesting item widget.
	 * 
	 * You can decide on your needs if you need to call super/parent or fully re-implement
	 * this function to perform a completely new logic to select your tooltip.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Tooltip Controller")
	UNinjaInventoryTooltipWidget* SelectTooltip(UNinjaInventoryItemWidget* ItemWidget);

	/**
	 * Safely updates a tooltip widget with the provided item widget.
	 *
	 * @param Tooltip			Tooltip widget to receive new data.
	 * @param ItemWidget		Widget containing data for the tooltip.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	static void SafelyUpdateTooltip(UNinjaInventoryTooltipWidget* Tooltip, const UNinjaInventoryItemWidget* ItemWidget);
	
private:

	/** Widget that is currently using the tooltip. */
	TWeakObjectPtr<UNinjaInventoryItemWidget> TooltipHolderPtr;

	/** Reusable widget for items that are being focused. */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryTooltipWidget> ItemTooltipWidget;

};
