// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_InventoryLayout.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryLayoutDataAsset.h"

UViewModel_InventoryLayout::UViewModel_InventoryLayout()
{
	DisplayName = FText::GetEmpty();
}

void UViewModel_InventoryLayout::SetDisplayName(const FText NewDisplayName)
{
	UE_MVVM_SET_PROPERTY_VALUE(DisplayName, NewDisplayName);
}

void UViewModel_InventoryLayout::InitializeData_Implementation()
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if(IsValid(InventoryManager))
	{
		const UNinjaInventoryLayoutDataAsset* LayoutData = InventoryManager->GetLayout();
		if (IsValid(LayoutData))
		{
			SetDisplayName(LayoutData->DisplayName);
		}
	}
}

void UViewModel_InventoryLayout::ClearData_Implementation()
{
	SetDisplayName(FText::GetEmpty());
}
