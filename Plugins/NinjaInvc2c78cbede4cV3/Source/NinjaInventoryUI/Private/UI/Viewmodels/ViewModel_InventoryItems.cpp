// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_InventoryItems.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "UI/Types/FNinjaInventoryItemView.h"

TArray<FNinjaInventoryItemView> UViewModel_InventoryItems::GetItems() const
{
	TArray<FNinjaInventoryItemView> Items;
	
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (IsValid(InventoryManager) && IsValid(Container))
	{
		TArray<UNinjaInventoryItem*> NewItems = InventoryManager->GetItemsByContainer(Container);
		Items.Reserve(NewItems.Num());
		
		for (UNinjaInventoryItem* Item : NewItems)
		{
			if (IsValid(Item) && IsValid(Item->GetData()))
			{
				const UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
				if (IsValid(ContainerFragment))
				{
					FNinjaInventoryItemView& View = Items.AddDefaulted_GetRef();
					View.Item = Item;
					View.Container = Container;
					View.Position = ContainerFragment->GetPosition(Item);
				}
			}
		}
	}

	return Items;
}

void UViewModel_InventoryItems::BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	InventoryManager->OnItemAdded.AddUniqueDynamic(this, &ThisClass::HandleItemAdded);
	InventoryManager->OnItemStorageChanged.AddUniqueDynamic(this, &ThisClass::HandleItemStorageChanged);
	InventoryManager->OnItemRemoved.AddUniqueDynamic(this, &ThisClass::HandleItemRemoved);
}

void UViewModel_InventoryItems::InitializeData_Implementation()
{
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItems);
}

void UViewModel_InventoryItems::HandleItemAdded_Implementation(UNinjaInventoryItem* Item)
{
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItems);
}

void UViewModel_InventoryItems::HandleItemStorageChanged_Implementation(UNinjaInventoryItem* Item, UNinjaInventoryContainer* OtherContainer, const int32 Position)
{
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItems);
}

void UViewModel_InventoryItems::HandleItemRemoved_Implementation(UNinjaInventoryItem* Item)
{
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItems);
}

void UViewModel_InventoryItems::UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	InventoryManager->OnItemAdded.RemoveAll(this);
	InventoryManager->OnItemStorageChanged.RemoveAll(this);
	InventoryManager->OnItemRemoved.RemoveAll(this);
}

void UViewModel_InventoryItems::ClearData_Implementation()
{
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItems);
}
