// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemStack.h"

#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"

UViewModel_ItemStack::UViewModel_ItemStack()
{
	bHasStack = false;
	StackSize = 0;
	StackLimit = 0;
	MaximumLimit = 0;
}

void UViewModel_ItemStack::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
	if (IsValid(StackFragment))
	{
		StackFragment->OnStackSizeChanged.AddUniqueDynamic(this, &ThisClass::HandleStackSizeChanged);
	}
}

void UViewModel_ItemStack::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
	if (IsValid(StackFragment))
	{
		StackFragment->OnStackSizeChanged.RemoveAll(this);
	}	
}

void UViewModel_ItemStack::InitializeData_Implementation()
{
	const UItemFragment_Stack* StackFragment = FindFragment<UItemFragment_Stack>();
	if (IsValid(StackFragment))
	{
		// If there is a data asset, we'll consider at least one item in the stack.
		//
		// Hopefully we'll be able to fine-tune this value either with an actual item,
		// or with default Item Memories that might contain a Stack Memory.
		//
		int32 CurrentStackSize = 1;  
	
		const UNinjaInventoryItem* Item = GetItem();
		if (IsValid(Item))
		{
			CurrentStackSize = StackFragment->GetStackSize(Item);
		}
		else 
		{
			int32 DefaultStackSize; 
			if (StackFragment->GetStackSizeFromDefaultMemories(DefaultMemories, DefaultStackSize))
			{
				CurrentStackSize = DefaultStackSize;
			}
		}
	
		SetStackSize(CurrentStackSize);
		SetStackLimit(StackFragment->GetStackLimit());
		SetMaximumLimit(StackFragment->GetMaximumLimit());
		SetHasStack(CurrentStackSize > 1);
	}
	else
	{
		ClearData();
	}
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UViewModel_ItemStack::HandleStackSizeChanged(UNinjaInventoryItem* Item, const int NewStackSize)
{
	if (IsSameItem(Item))
	{
		SetStackSize(NewStackSize);
		SetHasStack(NewStackSize > 1);
	}
}

void UViewModel_ItemStack::ClearData_Implementation()
{
	SetHasStack(false);
	SetStackSize(0);
	SetStackLimit(0);
	SetMaximumLimit(0);
}

void UViewModel_ItemStack::SetHasStack(const bool bNewHasStack)
{
	UE_MVVM_SET_PROPERTY_VALUE(bHasStack, bNewHasStack);
}

void UViewModel_ItemStack::SetStackSize(const int32 NewStackSize)
{
	UE_MVVM_SET_PROPERTY_VALUE(StackSize, NewStackSize);
}

void UViewModel_ItemStack::SetStackLimit(const int32 NewStackLimit)
{
	UE_MVVM_SET_PROPERTY_VALUE(StackLimit, NewStackLimit);
}

void UViewModel_ItemStack::SetMaximumLimit(const int32 NewMaximumLimit)
{
	UE_MVVM_SET_PROPERTY_VALUE(MaximumLimit, NewMaximumLimit);
}
