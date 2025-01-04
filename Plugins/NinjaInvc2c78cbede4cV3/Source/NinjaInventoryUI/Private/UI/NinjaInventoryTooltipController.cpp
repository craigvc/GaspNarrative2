// Ninja Bear Studio Inc., all rights reserved.
#include "UI/NinjaInventoryTooltipController.h"

#include "NinjaInventoryLog.h"
#include "UI/Widgets/NinjaInventoryContainerWidget.h"
#include "UI/Widgets/NinjaInventoryItemWidget.h"
#include "UI/Widgets/NinjaInventoryTooltipWidget.h"

void UNinjaInventoryTooltipController::Initialize_Implementation(APlayerController* OwningPlayer)
{
	if (IsValid(ItemTooltipWidgetClass))
	{
		const FName WidgetName = TEXT("ReusableInventoryItemTooltip");
		ItemTooltipWidget = CreateWidget<UNinjaInventoryTooltipWidget>(OwningPlayer, ItemTooltipWidgetClass, WidgetName);	
	}
}

void UNinjaInventoryTooltipController::Tick_Implementation(float DeltaTime)
{
	UNinjaInventoryItemWidget* TooltipHolder = GetTooltipHolder();
	if (IsValid(TooltipHolder))
	{
		const UNinjaInventoryTooltipWidget* Tooltip = RequestTooltip(TooltipHolder);
		if (!IsValid(Tooltip))
		{
			TooltipHolderPtr.Reset();
			INVENTORY_LOG_ARGS(VeryVerbose, "Reset Tooltip Holder '%s'.", *GetNameSafe(TooltipHolder));	
		}
	}
}

UNinjaInventoryTooltipWidget* UNinjaInventoryTooltipController::RequestTooltip(UUserWidget* RequestingWidget)
{
	UNinjaInventoryItemWidget* ItemWidget = Cast<UNinjaInventoryItemWidget>(RequestingWidget);
	if (!IsValid(ItemWidget))
	{
		return nullptr;
	}
	
	UNinjaInventoryTooltipWidget* Tooltip = SelectTooltip(ItemWidget);
	if (IsValid(Tooltip))
	{
		TooltipHolderPtr = ItemWidget;
		SafelyUpdateTooltip(ItemTooltipWidget, ItemWidget);
		INVENTORY_LOG_ARGS(VeryVerbose, "Selected Tooltip '%s' for '%s'.", *GetNameSafe(Tooltip), *GetNameSafe(RequestingWidget));	
	}

	ItemWidget->SetToolTip(Tooltip);
	return Tooltip;
}

UNinjaInventoryItemWidget* UNinjaInventoryTooltipController::GetTooltipHolder() const
{
	if (TooltipHolderPtr.IsValid() && TooltipHolderPtr->IsValidLowLevelFast())
	{
		return TooltipHolderPtr.Get();
	}

	return nullptr;
}

UNinjaInventoryTooltipWidget* UNinjaInventoryTooltipController::SelectTooltip_Implementation(UNinjaInventoryItemWidget* ItemWidget)
{
	// Can't select a tooltip for an invalid item widget.
	if (!IsValid(ItemWidget))
	{
		return nullptr;
	}

	// If the widget no focus, no tooltip to display.
	if (!ItemWidget->HasAnyUserFocus())
	{
		return nullptr;
	}

	// The widget has no item, no tooltip to display.
	if (!IInventoryItemViewInterface::Execute_HasItem(ItemWidget))
	{
		return nullptr;
	}

	return ItemTooltipWidget;
}

void UNinjaInventoryTooltipController::SafelyUpdateTooltip(UNinjaInventoryTooltipWidget* Tooltip, const UNinjaInventoryItemWidget* ItemWidget)
{
	if (IsValid(Tooltip))
	{
		Tooltip->UpdateTooltip(ItemWidget);
	}
}
