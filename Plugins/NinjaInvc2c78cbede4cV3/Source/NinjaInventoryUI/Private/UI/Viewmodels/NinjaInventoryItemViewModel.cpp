// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/NinjaInventoryItemViewModel.h"

#include "GameFramework/NinjaInventoryItem.h"

UNinjaInventoryItemViewModel::UNinjaInventoryItemViewModel()
{
	bHasItem = false;
}

bool UNinjaInventoryItemViewModel::IsSameItem(const UNinjaInventoryItem* OtherItem) const
{
	return GetItem() == OtherItem;
}

UNinjaInventoryItem* UNinjaInventoryItemViewModel::GetItem() const
{
	if (ItemPtr.IsValid() && ItemPtr->IsValidLowLevelFast())
	{
		return ItemPtr.Get();		
	}

	return nullptr;	
}

void UNinjaInventoryItemViewModel::SetItem(UNinjaInventoryItem* NewItem)
{
	if (ItemPtr.IsValid() && ItemPtr->IsValidLowLevelFast())
	{
		UnbindFromItem(ItemPtr.Get());
		ItemPtr.Reset();
	}

	if (IsValid(NewItem))
	{
		ItemPtr = NewItem;
		SetItemData(NewItem->GetData());
		BindToItem(NewItem);
		UE_MVVM_SET_PROPERTY_VALUE(bHasItem, true);
	}
	else
	{
		SetItemData(nullptr);
		UE_MVVM_SET_PROPERTY_VALUE(bHasItem, false);
	}	
}

void UNinjaInventoryItemViewModel::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Item->OnItemAdded.AddUniqueDynamic(this, &ThisClass::HandleItemAdded);
	Item->OnItemRemoved.AddUniqueDynamic(this, &ThisClass::HandleItemRemoved);
}

void UNinjaInventoryItemViewModel::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Item->OnItemAdded.RemoveAll(this);
	Item->OnItemRemoved.RemoveAll(this);
}

void UNinjaInventoryItemViewModel::HandleItemAdded(UNinjaInventoryItem*)
{
	InitializeData();
}

void UNinjaInventoryItemViewModel::HandleItemRemoved(UNinjaInventoryItem*)
{
	ClearData();
}
