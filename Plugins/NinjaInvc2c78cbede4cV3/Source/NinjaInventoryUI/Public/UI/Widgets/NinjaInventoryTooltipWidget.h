// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Runtime/Launch/Resources/Version.h"
#include "NinjaInventoryTooltipWidget.generated.h"

class UNinjaInventoryItemWidget;

/**
 * 
 */
UCLASS(Abstract)
class NINJAINVENTORYUI_API UNinjaInventoryTooltipWidget : public UCommonUserWidget
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryTooltipWidget();
	
	/**
	 * Updates this tooltip widget based on the item widget that is using it.
	 * 
	 * @param ItemWidget
	 *		Source widget that is using this tooltip.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	void UpdateTooltip(const UNinjaInventoryItemWidget* ItemWidget);

	/**
	 * Provides the Item Widget that is using this tooltip.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Inventory|UI|Widgets")
	const UNinjaInventoryItemWidget* GetItemWidget() const;
	
protected:

	UFUNCTION()
	virtual void UpdateViewModels();

	virtual void UpdateItemViewModel(UObject* Source, const UNinjaInventoryItemWidget* ItemWidget);
	
	/**
	 * Performs steps to update this tooltip from a source.
	 *
	 * @param ItemWidget
	 *		Source widget that is using this tooltip.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Tooltip Widget")
	void UpdateFromSource(const UNinjaInventoryItemWidget* ItemWidget);

private:

	FTimerHandle TimerHandle;
	TWeakObjectPtr<const UNinjaInventoryItemWidget> ItemWidgetPtr; 
	
};
