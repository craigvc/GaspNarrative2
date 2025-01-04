// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_DamagePoise.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h"
#include "AbilitySystem/Effects/CombatEffect_Stagger.h"

UCombatEffect_DamagePoise::UCombatEffect_DamagePoise()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	// Configure the base modifier, using a flat float.
	
	FScalableFloat PoiseDamageFloat;
	PoiseDamageFloat.Value = 10.f;

	FGameplayModifierInfo ModifierInfoMagnitude;
	ModifierInfoMagnitude.Attribute = UNinjaCombatAttributeSet::GetPoiseDamageAttribute();
	ModifierInfoMagnitude.ModifierMagnitude = FGameplayEffectModifierMagnitude(PoiseDamageFloat);
	ModifierInfoMagnitude.ModifierOp = EGameplayModOp::Additive;
	Modifiers.Add(ModifierInfoMagnitude);

	// Next, we want to also support a "Set By Caller" value.
	// This might be retrieved from the Melee or Projectile interfaces.
	
	FSetByCallerFloat PoiseDamageMagnitude;
	PoiseDamageMagnitude.DataName = TEXT("PoiseDamage");
	PoiseDamageMagnitude.DataTag = Tag_Combat_Data_PoiseDamage;

	FGameplayModifierInfo ModifierInfoDataCaller;
	ModifierInfoDataCaller.Attribute = UNinjaCombatAttributeSet::GetPoiseDamageAttribute();
	ModifierInfoDataCaller.ModifierMagnitude = FGameplayEffectModifierMagnitude(PoiseDamageMagnitude);
	ModifierInfoDataCaller.ModifierOp = EGameplayModOp::Additive;
	Modifiers.Add(ModifierInfoDataCaller);

	AddAdditionalEffect(UCombatEffect_CancelPoiseRecovery::StaticClass());
	AddAdditionalEffect(UCombatEffect_Stagger::StaticClass());
}
