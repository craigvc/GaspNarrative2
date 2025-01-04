// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryCommonWidget.h"

#include "UI/Widgets/NinjaInventoryWindowWidget.h"

void UNinjaInventoryCommonWidget::SetInventoryWindowWidget_Implementation(UNinjaInventoryWindowWidget* InventoryWindowWidget)
{
	if (IsValid(InventoryWindowWidget))
	{
		InventoryWindowWidgetPtr = InventoryWindowWidget;
		HandleInventoryWindowSet();
	}
}

UNinjaInventoryWindowWidget* UNinjaInventoryCommonWidget::GetInventoryWindow() const
{
	if (InventoryWindowWidgetPtr.IsValid() && InventoryWindowWidgetPtr->IsValidLowLevelFast())
	{
		return InventoryWindowWidgetPtr.Get();
	}

	return nullptr;
}

UNinjaInventoryManagerComponent* UNinjaInventoryCommonWidget::GetInventoryManager() const
{
	const UNinjaInventoryWindowWidget* InventoryWindowWidget = GetInventoryWindow();
	if (IsValid(InventoryWindowWidget))
	{
		return InventoryWindowWidget->GetInventoryManager();
	}

	return nullptr;
}

void UNinjaInventoryCommonWidget::HandleInventoryWindowSet_Implementation()
{
}
