// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryContainerBoxWidget.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "Components/Widget.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "UI/Interfaces/InventoryContainerViewInterface.h"
#include "UI/Interfaces/InventoryItemViewInterface.h"
#include "UI/Types/FNinjaInventoryItemView.h"
#include "UI/Widgets/NinjaInventoryContainerWidget.h"

UNinjaInventoryContainerBoxWidget::UNinjaInventoryContainerBoxWidget()
{
	bFillEmptySlots = true;
	bHasInitializedFromView = false;
}

void UNinjaInventoryContainerBoxWidget::InitializeContainerSlot_Implementation(UUserWidget* ContainerView)
{
	if (bHasInitializedFromView)
	{
		return;
	}
	
	if (IsValid(ContainerView) && ContainerView->Implements<UInventoryContainerViewInterface>())
	{
		CurrentContainerView = Cast<UNinjaInventoryContainerWidget>(ContainerView);
		Container = IInventoryContainerViewInterface::Execute_GetContainer(CurrentContainerView);

		if (bFillEmptySlots)
		{
			const int32 SlotsCount = CurrentContainerView->GetInventoryManager()->CountTotalSlotsInContainer(Container);
			for (int32 Position = 0; Position < SlotsCount; ++Position)
			{
				// Only create new slots for positions that are not already filled in the container.
				if (!GetSlots().IsValidIndex(Position))
				{
					UUserWidget* EmptyWidget = IInventoryContainerViewInterface::Execute_CreateItemWidget(CurrentContainerView, nullptr, Position);
					AddChild(EmptyWidget);
				}
			}
		}

		bHasInitializedFromView = true;
	}
}

void UNinjaInventoryContainerBoxWidget::SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items)
{
	if (!IsValid(CurrentContainerView))
	{
		return;
	}
	
	TSet<int32> OccupiedPositions;
	OccupiedPositions.Reserve(Items.Num());
	
	for (const FNinjaInventoryItemView& ItemView : Items)
	{
		if (ItemView.IsValid())
		{
			AddOrUpdateItem(ItemView);
			OccupiedPositions.Add(ItemView.Position);	
		}
	}

	const TArray<UWidget*> Widgets = GetAllChildren();
	for (int32 Idx = 0; Idx < Widgets.Num(); ++Idx)
	{
		UWidget* ItemWidget = Widgets[Idx];
		if (ItemWidget-Implements<UInventoryItemViewInterface>() && !OccupiedPositions.Contains(Idx))
		{
			IInventoryItemViewInterface::Execute_SetItem(ItemWidget, nullptr);
		}
	}
}

void UNinjaInventoryContainerBoxWidget::AddOrUpdateItem_Implementation(const FNinjaInventoryItemView& ItemView)
{
	check(ItemView.IsValid());

	UNinjaInventoryItem* Item = ItemView.Item;
	const int32 Position = ItemView.Position;
	
	if (GetSlots().IsValidIndex(Position))
	{
		UWidget* ItemWidget = GetSlots()[Position]->Content;
		IInventoryContainerViewInterface::Execute_ConfigureItemWidget(CurrentContainerView, ItemWidget, Item, Position);
	}
	else
	{
		UUserWidget* EmptyWidget = IInventoryContainerViewInterface::Execute_CreateItemWidget(CurrentContainerView, Item, Position);
		AddChild(EmptyWidget);
	}
}

