// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryTooltipWidget.h"

#include "MVVMSubsystem.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "UI/Viewmodels/NinjaInventoryItemViewModel.h"
#include "UI/Widgets/NinjaInventoryItemWidget.h"
#include "View/MVVMView.h"

UNinjaInventoryTooltipWidget::UNinjaInventoryTooltipWidget()
{
	SetIsFocusable(false);
}

void UNinjaInventoryTooltipWidget::UpdateTooltip(const UNinjaInventoryItemWidget* ItemWidget)
{
	ItemWidgetPtr = ItemWidget;
	if (IsValid(ItemWidget))
	{
		UpdateViewModels();
		UpdateFromSource(ItemWidget);
	}
}

const UNinjaInventoryItemWidget* UNinjaInventoryTooltipWidget::GetItemWidget() const
{
	if (ItemWidgetPtr.IsValid() && ItemWidgetPtr->IsValidLowLevelFast())
	{
		return ItemWidgetPtr.Get();
	}

	return nullptr;
}

void UNinjaInventoryTooltipWidget::UpdateViewModels()
{
	const UNinjaInventoryItemWidget* ItemWidget = GetItemWidget();
	if (!IsValid(ItemWidget))
	{
		return;
	}

	FTimerManager& Manager = GetWorld()->GetTimerManager();
	
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		if (!Manager.IsTimerActive(TimerHandle))
		{
			const FTimerDelegate Delegate = FTimerDelegate::CreateUObject(this, &ThisClass::UpdateViewModels);
			TimerHandle = Manager.SetTimerForNextTick(Delegate);	
		}
		
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		UpdateItemViewModel(Source, ItemWidget);
	}

#elif ENGINE_MINOR_VERSION > 3

	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateItemViewModel(Source, ItemWidget);
	}
	
#endif
	
	Manager.ClearTimer(TimerHandle);
}

void UNinjaInventoryTooltipWidget::UpdateItemViewModel(UObject* Source, const UNinjaInventoryItemWidget* ItemWidget)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryItemViewModel>())
	{
		UNinjaInventoryItemViewModel* ViewModel = Cast<UNinjaInventoryItemViewModel>(Source);

		UNinjaInventoryItem* Item = IInventoryItemViewInterface::Execute_GetItem(ItemWidget);
		ViewModel->SetItem(Item);
	}
}

void UNinjaInventoryTooltipWidget::UpdateFromSource_Implementation(const UNinjaInventoryItemWidget* ItemWidget)
{
}
