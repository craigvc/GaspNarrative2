// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_BlockCost.h"

#include "AbilitySystem/NinjaCombatAttributeSet.h"

UCombatEffect_BlockCost::UCombatEffect_BlockCost()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.Coefficient = -1.f;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetBlockStaminaCostAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetStaminaAttribute();
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(MagnitudeAttribute);

	Modifiers.Add(ModifierInfo);	
}
