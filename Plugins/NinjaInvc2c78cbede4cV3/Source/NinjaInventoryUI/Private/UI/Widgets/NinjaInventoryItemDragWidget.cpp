// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryItemDragWidget.h"

#include "MVVMSubsystem.h"
#include "NinjaInventoryLog.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryLoot.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "UI/Viewmodels/NinjaInventoryItemViewModel.h"
#include "UI/Widgets/NinjaInventoryItemWidget.h"
#include "View/MVVMView.h"

UNinjaInventoryItemDragWidget::UNinjaInventoryItemDragWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetVisibilityInternal(ESlateVisibility::HitTestInvisible);
}

void UNinjaInventoryItemDragWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (IsValid(Item) || IsValid(Loot))
	{
		UpdateViewModels();
	}
	else
	{
		INVENTORY_LOG(Warning, "Drag Widget intialized without an Item or Loot!");
	}
}

UNinjaInventoryItem* UNinjaInventoryItemDragWidget::GetItem() const
{
	return Item;
}

void UNinjaInventoryItemDragWidget::SetItem(UNinjaInventoryItem* NewItem)
{
	if (IsValid(Item) || IsValid(Loot))
	{
		INVENTORY_LOG(Warning, "Tried to set an item after initial setup!");
		return;
	}
	
	Item = NewItem;
	HandleItemSet();
}

UNinjaInventoryLoot* UNinjaInventoryItemDragWidget::GetLoot() const
{
	return Loot;
}

void UNinjaInventoryItemDragWidget::SetLoot(UNinjaInventoryLoot* NewILoot)
{
	if (IsValid(Item) || IsValid(Loot))
	{
		INVENTORY_LOG(Warning, "Tried to set an loot after initial setup!");
		return;
	}
	
	Loot = NewILoot;
	HandleLootSet();
}

void UNinjaInventoryItemDragWidget::UpdateViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		INVENTORY_LOG(Warning, "No Viewmodel sources assigned or initialized for Drag Widget!");
		return;
	}

#if ENGINE_MINOR_VERSION == 3

	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		UpdateItemViewModel(Source);
	}
	
#elif ENGINE_MINOR_VERSION > 3
	
	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		UpdateItemViewModel(Source);
	}

#endif
}

void UNinjaInventoryItemDragWidget::UpdateItemViewModel(UObject* Source)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryItemViewModel>())
	{
		UNinjaInventoryItemViewModel* ViewModel = Cast<UNinjaInventoryItemViewModel>(Source);

		if (IsValid(Item))
		{
			ViewModel->SetItem(Item);
		}
		else if (IsValid(Loot))
		{
			TArray<FInventoryDefaultItemMemory> Memories = Loot->GetDefaultMemories();
			ViewModel->SetItemData(Loot->GetItemData());
			ViewModel->SetDefaultMemories(Memories);
		}
	}	
}
