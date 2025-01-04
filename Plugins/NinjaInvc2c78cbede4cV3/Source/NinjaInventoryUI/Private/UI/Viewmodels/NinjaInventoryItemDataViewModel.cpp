// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/NinjaInventoryItemDataViewModel.h"

#include "Data/NinjaInventoryItemDataAsset.h"
#include "Types/FInventoryDefaultItemMemory.h"

UNinjaInventoryItemDataViewModel::UNinjaInventoryItemDataViewModel()
{
	bHasItemData = false;
}

const UNinjaInventoryItemDataAsset* UNinjaInventoryItemDataViewModel::GetItemData() const
{
	if (ItemDataPtr.IsValid() && ItemDataPtr->IsValidLowLevelFast())
	{
		return ItemDataPtr.Get();	
	}

	return nullptr;
}

void UNinjaInventoryItemDataViewModel::SetItemData(const UNinjaInventoryItemDataAsset* NewItemData)
{
	if (GetItemData() == NewItemData)
	{
		return;
	}

	// Always clear memories when a new item data is provided.
	DefaultMemories.Empty();

	if (IsValid(NewItemData))
	{
		ItemDataPtr = NewItemData;
		InitializeData();
		UE_MVVM_SET_PROPERTY_VALUE(bHasItemData, true);
	}
	else
	{
		ClearData();
		ItemDataPtr.Reset();
		UE_MVVM_SET_PROPERTY_VALUE(bHasItemData, false);
	}
}

void UNinjaInventoryItemDataViewModel::SetDefaultMemories(TArray<FInventoryDefaultItemMemory>& NewDefaultMemories)
{
	DefaultMemories.Empty();
	DefaultMemories = NewDefaultMemories;	
}
