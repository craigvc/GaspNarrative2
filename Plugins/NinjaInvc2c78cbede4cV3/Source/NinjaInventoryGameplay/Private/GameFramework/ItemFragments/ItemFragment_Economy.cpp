// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Economy.h"

#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"

UItemFragment_Economy::UItemFragment_Economy()
{
	bCanBeBought = true;
	bCanBeSold = true;
	BuyPrice = 0.f;
	SellPrice = 0.f;
}

void UItemFragment_Economy::OnInitializeFragment_Implementation(UNinjaInventoryItem* Item)
{
	UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
	if (IsValid(StackFragment))
	{
		StackFragment->OnStackSizeChanged.AddUniqueDynamic(this, &ThisClass::HandleStackSizeChanged);
	}	
}

float UItemFragment_Economy::GetBuyPrice() const
{
	return bCanBeBought ? BuyPrice : 0.f;
}

float UItemFragment_Economy::GetSellPrice() const
{
	return bCanBeSold ? SellPrice : 0.f;
}

float UItemFragment_Economy::GetTotalBuyPrice(const UNinjaInventoryItem* Item) const
{
	if (!bCanBeBought)
	{
		return 0.f;
	}
	
	if (!IsValid(Item))
	{
		return 0.f;
	}

	const int32 StackSize = GetStackSize(Item);
	return BuyPrice * StackSize;
}

float UItemFragment_Economy::GetTotalSellPrice(const UNinjaInventoryItem* Item) const
{
	if (!bCanBeSold)
	{
		return 0.f;
	}
	
	if (!IsValid(Item))
	{
		return 0.f;
	}

	const int32 StackSize = GetStackSize(Item);
	return SellPrice * StackSize;
}

int32 UItemFragment_Economy::GetStackSize(const UNinjaInventoryItem* Item)
{
	const UNinjaInventoryItemFragment* StackFragment = Item->FindFragmentByInterface(UStackableItemInterface::StaticClass());
	if (IsValid(StackFragment))
	{
		return Cast<IStackableItemInterface>(StackFragment)->GetStackSize(Item);
	}

	return 1;
}

// ReSharper disable once CppMemberFunctionMayBeConst
void UItemFragment_Economy::HandleStackSizeChanged(UNinjaInventoryItem* Item, const int StackSize)
{
	const float TotalBuyPrice = StackSize * GetBuyPrice();
	const float TotalSellPrice = StackSize * GetSellPrice();
	OnTotalPriceChanged.Broadcast(Item, TotalBuyPrice, TotalSellPrice);
}
