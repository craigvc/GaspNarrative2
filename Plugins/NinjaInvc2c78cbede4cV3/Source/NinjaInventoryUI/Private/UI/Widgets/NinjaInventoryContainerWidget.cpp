// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryContainerWidget.h"

#include "MVVMSubsystem.h"
#include "NinjaInventoryLog.h"
#include "Blueprint/WidgetTree.h"
#include "Components/NamedSlot.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "UI/Interfaces/InventoryContainerSlotInterface.h"
#include "UI/Interfaces/InventoryItemViewInterface.h"
#include "UI/Viewmodels/NinjaInventoryContainerViewModel.h"
#include "View/MVVMView.h"

void UNinjaInventoryContainerWidget::HandleInventoryWindowSet_Implementation()
{
	UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	Container = InventoryManager->GetFirstContainerByData(ContainerData);

	if (IsValid(Container))
	{
		// We already have our container, let's process it right away.
		HandleContainerAdded(Container);
	}
	else
	{
		// This container is not available. Maybe the inventory is initializing.
		// Let's wait for the container to become available and handle it later.
		InventoryManager->OnContainerAdded.AddUniqueDynamic(this, &ThisClass::HandleContainerAdded);
	}
}

void UNinjaInventoryContainerWidget::SetItems_Implementation(const TArray<FNinjaInventoryItemView>& Items)
{
	UWidget* SlotContent = GetContainerViewFromSlot();
	if (IsValid(SlotContent) && SlotContent->Implements<UInventoryContainerSlotInterface>())
	{
		IInventoryContainerSlotInterface::Execute_SetItems(SlotContent, Items);
	}
}

UNinjaInventoryContainer* UNinjaInventoryContainerWidget::GetContainer_Implementation() const
{
	return Container;
}

UUserWidget* UNinjaInventoryContainerWidget::CreateItemWidget_Implementation(UNinjaInventoryItem* Item, const int32 PositionInContainer)
{
	if (!IsValid(ItemWidgetClass) || !ItemWidgetClass->ImplementsInterface(UInventoryItemViewInterface::StaticClass()))
	{
		INVENTORY_LOG_ARGS(Warning, "Container Widget %s does not have a valid Item Widget Class!", *GetNameSafe(this));
		return nullptr;
	}

	if (!IsValid(Container))
	{
		INVENTORY_LOG_ARGS(Warning, "Container Widget %s does not have a valid Container!", *GetNameSafe(this));
		return nullptr;
	}

	const FString ContainerName = GetNameSafe(Container->GetData());
	const FName WidgetName = *FString::Printf(TEXT("%s_Item_%d"), *ContainerName, PositionInContainer);

	UUserWidget* ItemWidget = CreateWidget(GetOwningPlayer(), ItemWidgetClass, WidgetName);
	Execute_ConfigureItemWidget(this, ItemWidget, Item, PositionInContainer);

	if (ItemWidget->Implements<UInventoryWindowAwareInterface>())
	{
		UNinjaInventoryWindowWidget* InventoryWindowWidget = GetInventoryWindow();
		Execute_SetInventoryWindowWidget(ItemWidget, InventoryWindowWidget);
	}
	
	return ItemWidget;
}

void UNinjaInventoryContainerWidget::ConfigureItemWidget_Implementation(UWidget* ItemWidget, UNinjaInventoryItem* Item, const int32 PositionInContainer)
{
	if (IsValid(ItemWidget) && ItemWidget->Implements<UInventoryItemViewInterface>())
	{
		IInventoryItemViewInterface::Execute_SetItem(ItemWidget, Item);
		IInventoryItemViewInterface::Execute_SetContainer(ItemWidget, Container);
		IInventoryItemViewInterface::Execute_SetPositionInContainer(ItemWidget, PositionInContainer);
	}
}

void UNinjaInventoryContainerWidget::RefreshItems(const TArray<FNinjaInventoryItemView>& Items)
{
	Execute_SetItems(this, Items);
	UpdateWidgetTree();
}

void UNinjaInventoryContainerWidget::HandleContainerAdded(UNinjaInventoryContainer* NewContainer)
{
	if (NewContainer->GetData() == ContainerData)
	{
		Container = NewContainer;

		UWidget* SlotContent = GetContainerViewFromSlot();
		if (IsValid(SlotContent) )
		{
			if (SlotContent->Implements<UInventoryContainerSlotInterface>())
			{
				IInventoryContainerSlotInterface::Execute_InitializeContainerSlot(SlotContent, this);
			}
		}
		
		InitializeViewModels();
		UpdateWidgetTree();

		UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
		InventoryManager->OnContainerAdded.RemoveAll(this);
	}
}

void UNinjaInventoryContainerWidget::UpdateWidgetTree()
{
	WidgetTree->ForEachWidget([&] (UWidget* Widget)
	{
		if (IsValid(Widget) && Widget->Implements<UInventoryWindowAwareInterface>())
		{
			UNinjaInventoryWindowWidget* InventoryWindowWidget = GetInventoryWindow();
			Execute_SetInventoryWindowWidget(Widget, InventoryWindowWidget);
		}
	});
}

void UNinjaInventoryContainerWidget::InitializeViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		INVENTORY_LOG(Warning, "No Viewmodel sources assigned or initialized Container Widget!");
		return;
	}
	
#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateContainerViewModel(Source);
	}

#elif ENGINE_MINOR_VERSION > 3
	
	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateContainerViewModel(Source);
	}

#endif
}

void UNinjaInventoryContainerWidget::UpdateContainerViewModel(UObject* Source)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryContainerViewModel>())
	{
		UNinjaInventoryContainerViewModel* ViewModel = Cast<UNinjaInventoryContainerViewModel>(Source);
		ViewModel->SetInventoryManager(GetInventoryManager());
		ViewModel->SetContainer(Container);
	}
}

UWidget* UNinjaInventoryContainerWidget::GetContainerViewFromSlot() const
{
	if (IsValid(ContainerViewSlot))
	{
		return ContainerViewSlot->GetContent(); 
	}

	return nullptr;
}
