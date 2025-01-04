// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemEquipment.h"

#include "NinjaEquipmentFunctionLibrary.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaInventoryItem.h"

UViewModel_ItemEquipment::UViewModel_ItemEquipment()
{
	bHasEquipment = false;
	EquipmentStateTag = FGameplayTag::EmptyTag;
}

void UViewModel_ItemEquipment::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	const UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	if (IsValid(InventoryManager))
	{
		EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForInventory(InventoryManager);
		if (IsValid(EquipmentManager))
		{
			EquipmentManager->OnEquipmentAdded.AddUniqueDynamic(this, &ThisClass::HandleEquipmentAdded);
			EquipmentManager->OnEquipmentRemoved.AddUniqueDynamic(this, &ThisClass::HandleEquipmentRemoved);
		}
	}
}

void UViewModel_ItemEquipment::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	const UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	if (IsValid(InventoryManager))
	{
		EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForInventory(InventoryManager);
		if (IsValid(EquipmentManager))
		{
			EquipmentManager->OnEquipmentAdded.RemoveAll(this);
			EquipmentManager->OnEquipmentRemoved.RemoveAll(this);
		}
	}	
}

void UViewModel_ItemEquipment::HandleEquipmentAdded(UNinjaEquipment* Equipment)
{
	if (Equipment->GetItem() == GetItem())
	{
		SetHasEquipment(true);
		Equipment->OnEquipmentStateChanged.AddUniqueDynamic(this, &ThisClass::HandleEquipmentStateChanged);
	}
}

void UViewModel_ItemEquipment::HandleEquipmentStateChanged(UNinjaEquipment* Equipment)
{
	if (Equipment->GetItem() == GetItem())
	{
		const FGameplayTag NewStateTag = Equipment->GetStateTag();
		SetEquipmentStateTag(NewStateTag);
	}
}

void UViewModel_ItemEquipment::HandleEquipmentRemoved(UNinjaEquipment* Equipment)
{
	if (Equipment->GetItem() == GetItem())
	{
		SetHasEquipment(false);
		Equipment->OnEquipmentStateChanged.RemoveAll(this);
	}
}

void UViewModel_ItemEquipment::SetHasEquipment(const bool bNewHasEquipment)
{
	UE_MVVM_SET_PROPERTY_VALUE(bHasEquipment, bNewHasEquipment);
}

void UViewModel_ItemEquipment::SetEquipmentStateTag(const FGameplayTag NewEquipmentStateTag)
{
	UE_MVVM_SET_PROPERTY_VALUE(EquipmentStateTag, NewEquipmentStateTag);
}
