// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_EvadeCost.h"

#include "AbilitySystem/NinjaCombatAttributeSet.h"

UCombatEffect_EvadeCost::UCombatEffect_EvadeCost()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.Coefficient = -1.f;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetEvadeStaminaCostAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetStaminaAttribute();
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(MagnitudeAttribute);

	Modifiers.Add(ModifierInfo);
}
