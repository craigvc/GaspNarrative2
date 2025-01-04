// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_LastStand.h"

#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "AbilitySystem/Effects/Calculations/CombatCalculation_LastStandHealth.h"

UCombatEffect_LastStand::UCombatEffect_LastStand()
{
	// Set health to the Last Stand percent of max health.
	
	FCustomCalculationBasedFloat CustomCalculationFloat;
	CustomCalculationFloat.CalculationClassMagnitude = UCombatCalculation_LastStandHealth::StaticClass();
	
	FGameplayModifierInfo HealthModifierInfo;
	HealthModifierInfo.Attribute = UNinjaCombatAttributeSet::GetHealthAttribute();
	HealthModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(CustomCalculationFloat);
	HealthModifierInfo.ModifierOp = EGameplayModOp::Override;
	Modifiers.Add(HealthModifierInfo);

	// Decrease the count of Last Stand chances remaining.

	FScalableFloat LastStandDecreaseFloat;
	LastStandDecreaseFloat.Value = -1.f;
	
	FGameplayModifierInfo LastStandChanceModifierInfo;
	LastStandChanceModifierInfo.Attribute = UNinjaCombatAttributeSet::GetLastStandCountAttribute();
	LastStandChanceModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(LastStandDecreaseFloat);
	LastStandChanceModifierInfo.ModifierOp = EGameplayModOp::Additive;
	Modifiers.Add(LastStandChanceModifierInfo);
}
