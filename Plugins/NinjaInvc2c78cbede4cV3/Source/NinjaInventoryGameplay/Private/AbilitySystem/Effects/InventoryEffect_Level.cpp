// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/InventoryEffect_Level.h"

#include "AbilitySystem/NinjaInventoryAttributeSet.h"
#include "GameFramework/ItemFragments/ItemFragment_Level.h"

UInventoryEffect_Level::UInventoryEffect_Level()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;

	FSetByCallerFloat LevelData;
	LevelData.DataName = TEXT("GearLevel");
	LevelData.DataTag = Tag_Inventory_Item_Data_Level;

	FGameplayModifierInfo ModifierInfoDataCaller;
	ModifierInfoDataCaller.Attribute = UNinjaInventoryAttributeSet::GetEquipmentLevelAttribute();
	ModifierInfoDataCaller.ModifierMagnitude = FGameplayEffectModifierMagnitude(LevelData);
	ModifierInfoDataCaller.ModifierOp = EGameplayModOp::Additive;
	Modifiers.Add(ModifierInfoDataCaller);
}
