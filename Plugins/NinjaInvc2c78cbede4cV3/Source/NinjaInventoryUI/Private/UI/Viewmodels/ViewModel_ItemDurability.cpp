// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemDurability.h"

#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Durability.h"

UViewModel_ItemDurability::UViewModel_ItemDurability()
{
	bIsIndestructible = false;
	bIsBroken = false;
	Durability = 0;
}

void UViewModel_ItemDurability::SetIsIndestructible(const bool bNewIsIndestructible)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsIndestructible, bNewIsIndestructible);
}

void UViewModel_ItemDurability::SetIsBroken(const bool bNewIsBroken)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsBroken, bNewIsBroken);
}

void UViewModel_ItemDurability::SetDurability(const int32 NewDurability)
{
	UE_MVVM_SET_PROPERTY_VALUE(Durability, NewDurability);
}

void UViewModel_ItemDurability::InitializeData_Implementation()
{
	Super::InitializeData_Implementation();

	const UNinjaInventoryItem* Item = GetItem();
	const UItemFragment_Durability* DurabilityFragment = FindFragment<UItemFragment_Durability>();
	
	if (IsValid(Item) && IsValid(DurabilityFragment))
	{
		const bool bNewIsIndestructible = DurabilityFragment->IsIndestructible(Item);
		const bool bNewIsBroken = DurabilityFragment->IsBroken(Item);
		const int32 NewCurrentDurability = DurabilityFragment->GetDurability(Item);
		
		SetIsIndestructible(bNewIsIndestructible);
		SetIsBroken(bNewIsBroken);
		SetDurability(NewCurrentDurability);
	}
	else
	{
		ClearData();
	}
}

void UViewModel_ItemDurability::ClearData_Implementation()
{
	Super::ClearData_Implementation();
	
	SetIsIndestructible(false);
	SetIsBroken(false);
	SetDurability(0.f);
}

void UViewModel_ItemDurability::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	UItemFragment_Durability* DurabilityFragment = Item->FindFragment<UItemFragment_Durability>();
	if (IsValid(DurabilityFragment))
	{
		DurabilityFragment->OnDurabilityChanged.AddUniqueDynamic(this, &ThisClass::HandleDurabilityChanged);
	}
}

void UViewModel_ItemDurability::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	UItemFragment_Durability* DurabilityFragment = Item->FindFragment<UItemFragment_Durability>();
	if (IsValid(DurabilityFragment))
	{
		DurabilityFragment->OnDurabilityChanged.RemoveAll(this);
	}	
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UViewModel_ItemDurability::HandleDurabilityChanged(UNinjaInventoryItem* Item, const int32 NewDurability)
{
	if (IsSameItem(Item))
	{
		SetDurability(NewDurability);

		const bool bNewIsBroken = NewDurability == 0;
		SetIsBroken(bNewIsBroken);
	}
}
