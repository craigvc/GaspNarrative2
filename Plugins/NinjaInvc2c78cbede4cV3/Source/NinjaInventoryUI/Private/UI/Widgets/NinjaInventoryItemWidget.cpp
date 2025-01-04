// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryItemWidget.h"

#include "MVVMSubsystem.h"
#include "NinjaInventoryGameplayFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Components/PanelWidget.h"
#include "Components/Widget.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryLoot.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "Types/FInventoryItemContext.h"
#include "Types/FItemFragmentOperationPayload.h"
#include "UI/NinjaInventoryDragDropOperation.h"
#include "UI/Viewmodels/NinjaInventoryItemViewModel.h"
#include "UI/Widgets/NinjaInventoryItemDragWidget.h"
#include "UI/Widgets/NinjaInventoryTooltipWidget.h"
#include "UI/Widgets/NinjaInventoryWindowWidget.h"
#include "View/MVVMView.h"

UNinjaInventoryItemWidget::UNinjaInventoryItemWidget()
{
	SetIsFocusable(false);

	bPendingItemRefresh = false;
	bPendingLootRefresh = false;
	bPendingDropHandling = false;
	
	bSupportsDragOperation = true;
	DragWidgetClass = UNinjaInventoryItemDragWidget::StaticClass();
}

void UNinjaInventoryItemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (bPendingItemRefresh)
	{
		RefreshItemViewModels();
	}

	if (bPendingLootRefresh)
	{
		RefreshLootViewModels();
	}
}

void UNinjaInventoryItemWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (Execute_HasItem(this))
	{
		SetFocus();
		RefreshItemTooltip();
	}
}

void UNinjaInventoryItemWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	if (HasUserFocus(GetOwningPlayer()))
	{
		UWidgetBlueprintLibrary::SetFocusToGameViewport();
		RefreshItemTooltip();
	}
}

FReply UNinjaInventoryItemWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (bSupportsDragOperation && Execute_HasItem(this))
	{
		const FKey LeftMouseButton(EKeys::LeftMouseButton);
		const FEventReply Reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, LeftMouseButton);
		return Reply.NativeReply;
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);	
}

void UNinjaInventoryItemWidget::NativeOnFocusChanging(const FWeakWidgetPath& PreviousFocusPath,
	const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent)
{
	Super::NativeOnFocusChanging(PreviousFocusPath, NewWidgetPath, InFocusEvent);
	RefreshItemTooltip();	
}

void UNinjaInventoryItemWidget::NativeOnFocusLost(const FFocusEvent& InFocusEvent)
{
	Super::NativeOnFocusLost(InFocusEvent);
	RefreshItemTooltip();
}

void UNinjaInventoryItemWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	bool bHandledDrag = false;

	UNinjaInventoryItemDragWidget* Widget = CreateDragWidget();
	if (IsValid(Widget))
	{
		UNinjaInventoryDragDropOperation* Operation = nullptr;
		
		if (IsValid(Item))
		{
			Operation = UNinjaInventoryDragDropOperation::CreateItemOperation(Item);
			Widget->SetItem(Item);
		}
		else if (IsValid(Loot))
		{
			Operation = UNinjaInventoryDragDropOperation::CreateLootOperation(Loot);
			Widget->SetLoot(Loot);
		}

		if (IsValid(Operation))
		{
			Operation->DefaultDragVisual = Widget;
			OutOperation = Operation;
			bHandledDrag = true;
		}
	}

	if (!bHandledDrag)
	{
		// This event can't be handled here. Give the default implementation a chance to handle it.
		Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	}
}

UNinjaInventoryItemDragWidget* UNinjaInventoryItemWidget::CreateDragWidget() const
{
	if (IsValid(DragWidgetClass))
	{
		APlayerController* Owner = GetOwningPlayer();
		return CreateWidget<UNinjaInventoryItemDragWidget>(Owner, DragWidgetClass, TEXT("DragVisual"));	
	}

	return nullptr;
}

UNinjaInventoryTooltipWidget* UNinjaInventoryItemWidget::GetTooltipWidget() const
{
	INVENTORY_LOG_ARGS(Verbose, "Invoked tooltip getter for '%s', current value is '%s'.", *GetNameSafe(this), *GetNameSafe(ItemTooltipWidget));	
	return ItemTooltipWidget;
}

void UNinjaInventoryItemWidget::NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UNinjaInventoryDragDropOperation* DragOperation = Cast<UNinjaInventoryDragDropOperation>(InOperation);
	if (!IsSupportedDragOperation(DragOperation))
	{
		UNinjaInventoryItemDragWidget* DraggedItemWidget = Cast<UNinjaInventoryItemDragWidget>(InOperation->DefaultDragVisual);
		if (IsValid(DraggedItemWidget))
		{
			DraggedItemWidget->DisplayIncompatibleDragOperation(InOperation);
		}
		
		DragOperation->MarkUnsupportedOperation(this);
	}
}

void UNinjaInventoryItemWidget::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UNinjaInventoryDragDropOperation* DragOperation = Cast<UNinjaInventoryDragDropOperation>(InOperation);
	if (!IsValid(DragOperation) || !DragOperation->IsSourceForUnsupportedOperation(this))
	{
		return;
	}
	
	DragOperation->ClearUnsupportedOperation();
	
	UNinjaInventoryItemDragWidget* DraggedItemWidget = Cast<UNinjaInventoryItemDragWidget>(InOperation->DefaultDragVisual);
	if (IsValid(DraggedItemWidget))
	{
		DraggedItemWidget->RevertIncompatibleDragOperation(InOperation);
	}
}

bool UNinjaInventoryItemWidget::IsSupportedDragOperation(const UNinjaInventoryDragDropOperation* InOperation) const
{
	if (!IsValid(InOperation))
	{
		return false;
	}
	
	if (!IsValid(Container))
	{
		return false;
	}

	if (InOperation->HasItem())
	{
		const UNinjaInventoryItem* DraggedItem = InOperation->GetItem();
    	return Container->GetData()->SupportsItem(DraggedItem);
	}

	if (InOperation->HasLoot())
	{
		const UNinjaInventoryLoot* DraggedLoot = InOperation->GetLoot();
		return Container->GetData()->SupportsItemData(DraggedLoot->GetItemData());
	}

	return false;
}

bool UNinjaInventoryItemWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	const UNinjaInventoryDragDropOperation* InventoryDragOperation = Cast<UNinjaInventoryDragDropOperation>(InOperation);
	if (!IsSupportedDragOperation(InventoryDragOperation))
	{
		return false;
	}

	bool bHandled = false;
	
	if (InventoryDragOperation->HasItem())
	{
		UNinjaInventoryItem* ReceivedItem = InventoryDragOperation->GetItem();
		bHandled = HandleDroppedItem(ReceivedItem);
	}

	if (InventoryDragOperation->HasLoot())
	{
		UNinjaInventoryLoot* ReceivedLoot = InventoryDragOperation->GetLoot();
		bHandled = HandleDroppedLoot(ReceivedLoot);
	}

	if (bHandled)
	{
		bPendingDropHandling = true;
		return bHandled;
	}

	// Give the original implementation a chance to handle this operation.
	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}

void UNinjaInventoryItemWidget::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	if (!IsValid(ListItemObject))
	{
		return;
	}
	
	if (ListItemObject->IsA<UNinjaInventoryItem>())
	{
		UNinjaInventoryItem* NewItem = Cast<UNinjaInventoryItem>(ListItemObject);
		Execute_SetItem(this, NewItem);
	}
	else if (ListItemObject->IsA<UNinjaInventoryLoot>())
	{
		UNinjaInventoryLoot* NewLoot = Cast<UNinjaInventoryLoot>(ListItemObject);
		Execute_SetLoot(this, NewLoot);
	}
}

bool UNinjaInventoryItemWidget::HandleDroppedItem(UNinjaInventoryItem* ReceivedItem) const
{
	UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	check(IsValid(InventoryManager));
	
	if (Execute_HasItem(this))
	{
		if (Item != ReceivedItem)
		{
			// Let fragments decide which operation should be performed for these items.
			InventoryManager->PerformFragmentOperationOnItems(Item, ReceivedItem);
			return true;
		}
	}
	else
	{
		const TInstancedStruct<FInventoryFragmentPayload> Payload = UNinjaInventoryGameplayFunctionLibrary::CreateMovePayload(ReceivedItem, Container, PositionInContainer); 
		InventoryManager->TryPerformOperation(Payload);
		return true;
	}

	return false;
}

bool UNinjaInventoryItemWidget::HandleDroppedLoot(UNinjaInventoryLoot* ReceivedLoot) const
{
	UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	check(IsValid(InventoryManager));

	const UItemFragment_Container* ContainerFragment = ReceivedLoot->GetItemData()->FindFragment<UItemFragment_Container>();

	FInventoryItemContextEntry ItemContextEntry;
	ItemContextEntry.ItemData = ReceivedLoot->GetItemData();

	const FInventoryDefaultItemMemory Memory = ContainerFragment->CreateDefaultMemory(Container, PositionInContainer);
	ItemContextEntry.FragmentMemories.Add(Memory);
	
	FInventoryItemContext ItemContext;
	ItemContext.ItemsToAdd.Add(ItemContextEntry);

	if (Execute_HasItem(this))
	{
		TMap<UNinjaInventoryContainer*, TArray<int32>> AdditionalPositions;
		AdditionalPositions.Add(Container, { PositionInContainer });

		int32 NewPosition = ContainerFragment->FindBestPositionForEntry(ItemContextEntry, AdditionalPositions);
		if (NewPosition != INDEX_NONE)
		{
			FInventoryItemContextEntry& Update = ItemContext.ItemsToUpdate.AddDefaulted_GetRef();
			Update.Item = Execute_GetItem(this);

			const FInventoryDefaultItemMemory UpdatedMemory = ContainerFragment->CreateDefaultMemory(Container, NewPosition);
			Update.FragmentMemories.Add(UpdatedMemory);
		}
		else
		{
			FInventoryItemContextEntry& Drop = ItemContext.ItemsToDrop.AddDefaulted_GetRef();
			Drop.Item = Execute_GetItem(this);
		}
	}

	FInventoryItemContext Result;
	InventoryManager->AddItem(ItemContext, Result);
	return true;
}

void UNinjaInventoryItemWidget::RefreshItemTooltip()
{
	const UNinjaInventoryWindowWidget* InventoryWindow = GetInventoryWindow();
	if (IsValid(InventoryWindow))
	{
		ItemTooltipWidget = InventoryWindow->RequestTooltip(this);
	}
}

UNinjaInventoryItem* UNinjaInventoryItemWidget::GetItem_Implementation() const
{
	return Item;
}

UNinjaInventoryContainer* UNinjaInventoryItemWidget::GetContainer_Implementation() const
{
	return Container;
}

UNinjaInventoryLoot* UNinjaInventoryItemWidget::GetLoot_Implementation() const
{
	return Loot;
}

void UNinjaInventoryItemWidget::SetContainer_Implementation(UNinjaInventoryContainer* NewContainer)
{
	if (Container != NewContainer)
	{
		Container = NewContainer;
		const FString ContainerName = IsValid(Container) ? GetNameSafe(Container->GetData()) : "NONE"; 
		INVENTORY_LOG_ARGS(VeryVerbose, "Set Container '%s' for widget '%s'.", *ContainerName, *GetNameSafe(this));
	}
}

void UNinjaInventoryItemWidget::SetPositionInContainer_Implementation(const int32 NewPosition)
{
	if (PositionInContainer != NewPosition)
	{
		PositionInContainer = NewPosition;
		INVENTORY_LOG_ARGS(VeryVerbose, "Set Position %d for widget '%s'.", NewPosition, *GetNameSafe(this));	
	}
}

void UNinjaInventoryItemWidget::SetItem_Implementation(UNinjaInventoryItem* NewItem)
{
	if (Item == NewItem)
	{
		return;
	}
	
	Item = NewItem;
	SetIsFocusable(Execute_HasItem(this));
	RefreshFocusFromDropOperation();
	RefreshItemViewModels();
	RefreshItemTooltip();
	
	const FString ItemName = IsValid(Item) ? GetNameSafe(Item->GetData()) : "NONE"; 
	INVENTORY_LOG_ARGS(VeryVerbose, "Set Item '%s' for widget '%s'.", *ItemName, *GetNameSafe(this));
}

void UNinjaInventoryItemWidget::RefreshItemViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		bPendingItemRefresh = true;
		INVENTORY_LOG(Verbose, "No Viewmodel sources assigned or initialized for Item Widget!");
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateItemViewModelWithItem(Source);
	}

#elif ENGINE_MINOR_VERSION > 3

	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateItemViewModelWithItem(Source);
	}
	
#endif
	
	bPendingItemRefresh = false;
}

void UNinjaInventoryItemWidget::UpdateItemViewModelWithItem(UObject* Source)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryItemViewModel>())
	{
		UNinjaInventoryItemViewModel* ViewModel = Cast<UNinjaInventoryItemViewModel>(Source);
		ViewModel->SetItem(Item);
	}	
}

void UNinjaInventoryItemWidget::SetLoot_Implementation(UNinjaInventoryLoot* NewLoot)
{
	if (Loot == NewLoot)
	{
		return;
	}
	
	Loot = NewLoot;
	SetIsFocusable(Execute_HasLoot(this));
	RefreshFocusFromDropOperation();
	RefreshLootViewModels();
	RefreshItemTooltip();

	const FString LootName = IsValid(Item) ? GetNameSafe(Loot->GetItemData()) : "NONE"; 
	INVENTORY_LOG_ARGS(VeryVerbose, "Set Loot '%s' for widget '%s'.", *LootName, *GetNameSafe(this));
}

void UNinjaInventoryItemWidget::RefreshLootViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		bPendingLootRefresh = true;
		INVENTORY_LOG(Verbose, "No Viewmodel sources assigned or initialized for Item Widget!");
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		UpdateItemViewModelWithItemData(Source);
	}

#elif ENGINE_MINOR_VERSION > 3

	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		UpdateItemViewModelWithItemData(Source);
	}
	
#endif	
	
	bPendingLootRefresh = false;	
}

void UNinjaInventoryItemWidget::UpdateItemViewModelWithItemData(UObject* Source)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryItemViewModel>())
	{
		UNinjaInventoryItemViewModel* ViewModel = Cast<UNinjaInventoryItemViewModel>(Source);

		if (IsValid(Loot))
		{
			TArray<FInventoryDefaultItemMemory> DefaultMemories = Loot->GetDefaultMemories();
			ViewModel->SetItemData(Loot->GetItemData());
			ViewModel->SetDefaultMemories(DefaultMemories);
		}
	}
}

void UNinjaInventoryItemWidget::RefreshFocusFromDropOperation()
{
	if (bPendingDropHandling)
	{
		bPendingDropHandling = false;
		if (Execute_HasItem(this))
		{
			SetFocus();	
		}
	}
}
