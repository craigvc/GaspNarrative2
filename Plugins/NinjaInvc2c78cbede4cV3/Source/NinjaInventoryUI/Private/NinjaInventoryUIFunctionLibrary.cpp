// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventoryUIFunctionLibrary.h"

#include "Components/Widget.h"
#include "UI/Viewmodels/NinjaInventoryItemViewModel.h"


UNinjaInventoryItemViewModel* UNinjaInventoryUIFunctionLibrary::ConstructItemViewModel(
	const TSubclassOf<UNinjaInventoryItemViewModel> ViewModelClass, UWidget* Outer, UNinjaInventoryItem* Item)
{
	UNinjaInventoryItemViewModel* ItemViewModel = NewObject<UNinjaInventoryItemViewModel>(Outer, ViewModelClass);
	ItemViewModel->SetItem(Item);
	return ItemViewModel;	
}
