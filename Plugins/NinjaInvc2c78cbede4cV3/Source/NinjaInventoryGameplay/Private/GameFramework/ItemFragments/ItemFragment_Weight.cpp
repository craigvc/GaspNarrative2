// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Weight.h"

#include "AbilitySystemComponent.h"
#include "NinjaInventoryGameplayTags.h"
#include "AbilitySystem/NinjaInventoryAttributeSet.h"
#include "AbilitySystem/Effects/InventoryEffect_Weight.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "Types/FInventoryItemContext.h"
#include "Types/FItemFragmentMemories.h"

UItemFragment_Weight::UItemFragment_Weight()
{
	Weight = 0.f;
	EffectClass = UInventoryEffect_Weight::StaticClass();
	EncumbranceAttribute = UNinjaInventoryAttributeSet::GetEncumbranceAttribute();
	WeightLimitAttribute = UNinjaInventoryAttributeSet::GetWeightLimitAttribute();
}

bool UItemFragment_Weight::CanAddToInventory(const FInventoryItemContext& ItemContext) const
{
	const UNinjaInventoryItemDataAsset* ItemData = ItemContext.Request.ItemData;
	const TArray<FInventoryDefaultItemMemory>& DefaultMemories = ItemContext.Request.FragmentMemories;
		
	float TotalWeight = Weight;
	
	const UItemFragment_Stack* Stack = ItemData->FindFragment<UItemFragment_Stack>();
	if (IsValid(Stack))
	{
		// The item has a stack fragment, so we need to account for the stack size.
		for (const FInventoryDefaultItemMemory& DefaultMemory : DefaultMemories)
		{
			if (DefaultMemory.IsCompatibleWithFragmentClass(UItemFragment_Stack::StaticClass()))
			{
				const FInventoryItemFragmentStackMemory& Memory = DefaultMemory.Memory.Get<FInventoryItemFragmentStackMemory>();
				TotalWeight *= Memory.StackSize;
				break;
			}
		}
	}

	return Internal_CanAddWeight(ItemContext.InventoryManager, TotalWeight);
}

void UItemFragment_Weight::OnApplyFragment_Implementation(UNinjaInventoryItem* Item)
{
	UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
	if (IsValid(StackFragment))
	{
		StackFragment->OnStackSizeChanged.AddUniqueDynamic(this, &ThisClass::HandleStackSizeChanged);
	}
}

void UItemFragment_Weight::HandleStackSizeChanged(UNinjaInventoryItem* Item, const int StackSize)
{
	RemoveEffect(Item);
	ApplyEffect(Item);

	const float TotalWeight = StackSize * Weight;
	OnWeightChanged.Broadcast(Item, TotalWeight);
}

float UItemFragment_Weight::GetWeight() const
{
	return Weight;
}

float UItemFragment_Weight::GetTotalWeight(const UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		const UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
		if (IsValid(StackFragment))
		{
			return Weight * StackFragment->GetStackSize(Item);
		}	
	}
	
	return Weight;	
}

bool UItemFragment_Weight::CanAddWeight(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItem* Item) const
{
	check(IsValid(InventoryManager));
	
	const float TotalWeight = GetTotalWeight(Item);
	return Internal_CanAddWeight(InventoryManager, TotalWeight);
}

bool UItemFragment_Weight::Internal_CanAddWeight(const UNinjaInventoryManagerComponent* InventoryManager, const float TotalWeight) const
{
	// We don't have an Ability Component, and therefore no maximum weight attribute.
	const UAbilitySystemComponent* AbilityComponent = InventoryManager->GetAbilitySystemComponent();
	if (!IsValid(AbilityComponent))
	{
		return true;
	}

	// Even though we have an Ability Component, we don't have a weight limit attribute.
	if (!AbilityComponent->HasAttributeSetForAttribute(WeightLimitAttribute))
	{
		return true;
	}
	
	const float Encumbrance = AbilityComponent->GetNumericAttribute(EncumbranceAttribute);
	const float WeightLimit = AbilityComponent->GetNumericAttribute(WeightLimitAttribute);
	return Encumbrance + TotalWeight <= WeightLimit;
}

void UItemFragment_Weight::SetByCallerMagnitudes(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const
{
	Super::SetByCallerMagnitudes(Item, EffectSpecHandle);
	
	const float TotalWeight = GetTotalWeight(Item);
	EffectSpecHandle.Data->SetSetByCallerMagnitude(Tag_Inventory_Item_Data_Weight, TotalWeight);
}

