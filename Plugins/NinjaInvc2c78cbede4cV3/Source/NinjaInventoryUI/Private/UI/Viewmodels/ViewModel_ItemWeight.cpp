// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemWeight.h"

#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Weight.h"

UViewModel_ItemWeight::UViewModel_ItemWeight()
{
	Weight = 0.f;
	TotalWeight = 0.f;
}

void UViewModel_ItemWeight::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	UItemFragment_Weight* WeightFragment = Item->FindFragment<UItemFragment_Weight>();
	if (IsValid(WeightFragment))
	{
		WeightFragment->OnWeightChanged.AddUniqueDynamic(this, &ThisClass::HandleWeightChanged);
	}
}

void UViewModel_ItemWeight::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	UItemFragment_Weight* WeightFragment = Item->FindFragment<UItemFragment_Weight>();
	if (IsValid(WeightFragment))
	{
		WeightFragment->OnWeightChanged.RemoveAll(this);
	}	
}

void UViewModel_ItemWeight::InitializeData_Implementation()
{
	Super::InitializeData_Implementation();
	
	const UNinjaInventoryItem* Item = GetItem();
	const UItemFragment_Weight* WeightFragment = FindFragment<UItemFragment_Weight>();
	
	if (IsValid(Item) && IsValid(WeightFragment))
	{
		const float CurrentWeight = WeightFragment->GetWeight();
		const float CurrentTotalWeight = WeightFragment->GetTotalWeight(Item);
		
		SetWeight(CurrentWeight);
		SetTotalWeight(CurrentTotalWeight);
	}
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UViewModel_ItemWeight::HandleWeightChanged(UNinjaInventoryItem* Item, const float NewWeight)
{
	if (IsSameItem(Item))
	{
		SetTotalWeight(NewWeight);
	}	
}

void UViewModel_ItemWeight::ClearData_Implementation()
{
	Super::ClearData_Implementation();
	SetWeight(0.f);
	SetTotalWeight(0.f);
}

void UViewModel_ItemWeight::SetWeight(const float NewWeight)
{
	UE_MVVM_SET_PROPERTY_VALUE(Weight, NewWeight);
}

void UViewModel_ItemWeight::SetTotalWeight(const float NewWeight)
{
	UE_MVVM_SET_PROPERTY_VALUE(TotalWeight, NewWeight);
}