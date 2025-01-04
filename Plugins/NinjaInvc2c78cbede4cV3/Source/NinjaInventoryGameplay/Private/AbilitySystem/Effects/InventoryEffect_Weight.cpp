// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/InventoryEffect_Weight.h"

#include "NinjaInventoryGameplayTags.h"
#include "AbilitySystem/NinjaInventoryAttributeSet.h"

UInventoryEffect_Weight::UInventoryEffect_Weight()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;

	FSetByCallerFloat ItemWeightData;
	ItemWeightData.DataName = TEXT("ItemWeight");
	ItemWeightData.DataTag = Tag_Inventory_Item_Data_Weight;

	FGameplayModifierInfo ModifierInfoDataCaller;
	ModifierInfoDataCaller.Attribute = UNinjaInventoryAttributeSet::GetEncumbranceAttribute();
	ModifierInfoDataCaller.ModifierMagnitude = FGameplayEffectModifierMagnitude(ItemWeightData);
	ModifierInfoDataCaller.ModifierOp = EGameplayModOp::Additive;
	Modifiers.Add(ModifierInfoDataCaller);
}
