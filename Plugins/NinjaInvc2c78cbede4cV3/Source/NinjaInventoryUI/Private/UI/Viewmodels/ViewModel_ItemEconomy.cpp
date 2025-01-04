// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemEconomy.h"

#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Economy.h"

UViewModel_ItemEconomy::UViewModel_ItemEconomy()
{
	bCanBeBought = false;
	bCanBeSold = false;
	UnitBuyPrice = 0.f;
	TotalBuyPrice = 0.f;
	UnitSellPrice = 0.f;
	TotalSellPrice = 0.f;
}

void UViewModel_ItemEconomy::SetCanBeBought(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bCanBeBought, bNewValue);
}

void UViewModel_ItemEconomy::SetCanBeSold(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bCanBeSold, bNewValue);
}

void UViewModel_ItemEconomy::SetUnitBuyPrice(const float NewPrice)
{
	UE_MVVM_SET_PROPERTY_VALUE(UnitBuyPrice, NewPrice);
}

void UViewModel_ItemEconomy::SetTotalBuyPrice(const float NewPrice)
{
	UE_MVVM_SET_PROPERTY_VALUE(TotalBuyPrice, NewPrice);
}

void UViewModel_ItemEconomy::SetUnitSellPrice(const float NewPrice)
{
	UE_MVVM_SET_PROPERTY_VALUE(UnitSellPrice, NewPrice);
}

void UViewModel_ItemEconomy::SetTotalSellPrice(const float NewPrice)
{
	UE_MVVM_SET_PROPERTY_VALUE(TotalBuyPrice, NewPrice);
}

void UViewModel_ItemEconomy::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	UItemFragment_Economy* EconomyFragment = Item->FindFragment<UItemFragment_Economy>();
	if (IsValid(EconomyFragment))
	{
		EconomyFragment->OnTotalPriceChanged.AddUniqueDynamic(this, &ThisClass::HandleTotalPriceChanged);
	}
}

void UViewModel_ItemEconomy::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	UItemFragment_Economy* EconomyFragment = Item->FindFragment<UItemFragment_Economy>();
	if (IsValid(EconomyFragment))
	{
		EconomyFragment->OnTotalPriceChanged.RemoveAll(this);
	}	
}

void UViewModel_ItemEconomy::InitializeData_Implementation()
{
	Super::InitializeData_Implementation();

	const UNinjaInventoryItem* Item = GetItem();
	const UItemFragment_Economy* EconomyFragment = FindFragment<UItemFragment_Economy>();
	
	if (IsValid(Item) && IsValid(EconomyFragment))
	{
		SetCanBeBought(EconomyFragment->CanBeBought());
		SetCanBeSold(EconomyFragment->CanBeSold());
		SetUnitBuyPrice(EconomyFragment->GetBuyPrice());
		SetTotalBuyPrice(EconomyFragment->GetTotalBuyPrice(Item));	
		SetUnitSellPrice(EconomyFragment->GetSellPrice());
		SetTotalSellPrice(EconomyFragment->GetTotalSellPrice(Item));
	}
	else
	{
		ClearData();
	}
}

void UViewModel_ItemEconomy::ClearData_Implementation()
{
	Super::ClearData_Implementation();

	constexpr bool bHasPrice = false;
	constexpr float NewPrice = 0.f;

	SetCanBeBought(bHasPrice);
	SetCanBeBought(bHasPrice);
	SetUnitBuyPrice(NewPrice);
	SetTotalBuyPrice(NewPrice);	
	SetUnitSellPrice(NewPrice);
	SetTotalSellPrice(NewPrice);
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UViewModel_ItemEconomy::HandleTotalPriceChanged(UNinjaInventoryItem* Item, const float BuyPrice, const float SellPrice)
{
	if (IsSameItem(Item))
	{
		SetTotalBuyPrice(BuyPrice);
		SetTotalSellPrice(SellPrice);	
	}
}
