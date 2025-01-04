// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_RecoverPoiseImmediately.h"

#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"

UCombatEffect_RecoverPoiseImmediately::UCombatEffect_RecoverPoiseImmediately()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	FScalableFloat PoiseRecovery;
	PoiseRecovery.Value = 0.f;
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetPoiseDamageAttribute();
	ModifierInfo.ModifierOp = EGameplayModOp::Override;
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(PoiseRecovery);
	Modifiers.Add(ModifierInfo);
}
