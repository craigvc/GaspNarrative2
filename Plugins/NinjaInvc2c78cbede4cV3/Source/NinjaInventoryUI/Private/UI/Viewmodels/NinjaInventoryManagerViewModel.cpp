// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/NinjaInventoryManagerViewModel.h"

#include "Components/NinjaInventoryManagerComponent.h"

UNinjaInventoryManagerViewModel::UNinjaInventoryManagerViewModel()
{
	bHasInventoryManager = false;
}

UNinjaInventoryManagerComponent* UNinjaInventoryManagerViewModel::GetInventoryManager() const
{
	if (InventoryManagerPtr.IsValid() && InventoryManagerPtr->IsValidLowLevelFast())
	{
		return InventoryManagerPtr.Get();		
	}

	return nullptr;	
}

void UNinjaInventoryManagerViewModel::SetInventoryManager(UNinjaInventoryManagerComponent* InventoryManager)
{
	if (InventoryManagerPtr.IsValid() && InventoryManagerPtr->IsValidLowLevelFast())
	{
		UnbindFromInventoryManager(InventoryManagerPtr.Get());
		InventoryManagerPtr.Reset();
	}

	if (IsValid(InventoryManager))
	{
		InventoryManagerPtr = InventoryManager;
		BindToInventoryManager(InventoryManager);
		InitializeData();
		UE_MVVM_SET_PROPERTY_VALUE(bHasInventoryManager, true);
	}
	else
	{
		ClearData();
		UE_MVVM_SET_PROPERTY_VALUE(bHasInventoryManager, false);
	}		
}

void UNinjaInventoryManagerViewModel::BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
}

void UNinjaInventoryManagerViewModel::UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
}

void UNinjaInventoryManagerViewModel::InitializeData_Implementation()
{
}

void UNinjaInventoryManagerViewModel::ClearData_Implementation()
{
}
