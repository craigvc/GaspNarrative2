// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryContainerBorderWidget.h"

#include "GameFramework/NinjaInventoryItem.h"
#include "UI/Interfaces/InventoryContainerViewInterface.h"
#include "UI/Types/FNinjaInventoryItemView.h"
#include "UI/Widgets/NinjaInventoryContainerWidget.h"

UNinjaInventoryContainerBorderWidget::UNinjaInventoryContainerBorderWidget()
{
	bFillEmptySlots = false;
	bCanHaveMultipleChildren = false;
	bHasInitializedFromView = false;
}

void UNinjaInventoryContainerBorderWidget::InitializeContainerSlot_Implementation(UUserWidget* ContainerView)
{
	if (!bHasInitializedFromView)
	{
		if (IsValid(ContainerView) && ContainerView->Implements<UInventoryContainerViewInterface>())
		{
			CurrentContainerView = Cast<UNinjaInventoryContainerWidget>(ContainerView);
			Container = IInventoryContainerViewInterface::Execute_GetContainer(CurrentContainerView);

			constexpr int32 Position = 0;

			if (GetChildrenCount() > 0)
			{
				UWidget* EmptyWidget = GetChildAt(Position);
				IInventoryContainerViewInterface::Execute_ConfigureItemWidget(CurrentContainerView, EmptyWidget, nullptr, Position);
			}
			else if (GetChildrenCount() == 0 && bFillEmptySlots)
			{
				UUserWidget* EmptyWidget = IInventoryContainerViewInterface::Execute_CreateItemWidget(CurrentContainerView, nullptr, Position);
				AddChild(EmptyWidget);
			}

			bHasInitializedFromView = true;			
		}
	}
}

void UNinjaInventoryContainerBorderWidget::SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items)
{
	if (!IsValid(CurrentContainerView))
	{
		return;
	}
	
	constexpr int32 Position = 0;
	UNinjaInventoryItem* Item = nullptr;
	
	if (Items.IsValidIndex(Position) && Items[Position].IsValid())
	{
		const FNinjaInventoryItemView& ItemView = Items[Position];
		if (ItemView.IsValid() && ItemView.Position == Position)
		{
			Item = ItemView.Item;
		}
	}
	
	if (GetChildrenCount() > 0)
	{
		UWidget* ItemWidget = GetChildAt(Position);
		if (IsValid(ItemWidget))
		{
			IInventoryContainerViewInterface::Execute_ConfigureItemWidget(CurrentContainerView, ItemWidget, Item, Position);
		}
	}
	else
	{
		UUserWidget* ItemWidget = IInventoryContainerViewInterface::Execute_CreateItemWidget(CurrentContainerView, Item, Position);
		AddChild(ItemWidget);
	}
}

