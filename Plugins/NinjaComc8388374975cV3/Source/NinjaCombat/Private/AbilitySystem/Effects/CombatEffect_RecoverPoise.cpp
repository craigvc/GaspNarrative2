// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_RecoverPoise.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"

UCombatEffect_RecoverPoise::UCombatEffect_RecoverPoise()
{
	// Period setup is different from other "replenish" effects.
	//
	// This is a periodic effect, happening every 1.0 second (or any other value configured). It
	// never triggers as soon as it's applied, but instead it's triggered after the first period elapses.
	//
	// Furthermore, this can be interrupted but the Tag_Combat_Effect_Cancel_Regeneration_Poise tag and
	// whenever this inhibition ends, it will reset the period and then wait again, like a "cooldown".
	//
	DurationPolicy = EGameplayEffectDurationType::Infinite;
	Period = FScalableFloat(1.0f);
	bExecutePeriodicEffectOnApplication = false;
	PeriodicInhibitionPolicy = EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod;

	// Add to the poise damage, the inverse of how much Poise replenishes.
	//
	FAttributeBasedFloat PoiseRecovery;
	PoiseRecovery.Coefficient = -1.f;
	PoiseRecovery.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetPoiseRecoveryAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetPoiseDamageAttribute();
	ModifierInfo.ModifierOp = EGameplayModOp::Additive;
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(PoiseRecovery);
	Modifiers.Add(ModifierInfo);

	// And finally, as mentioned before, replenishing poise can be interrupted if the owner 
	// has the "Tag_Combat_Effect_Cancel_Regeneration_Poise". This is most likely applied by
	// another Gameplay Effect, probably attached to an Attack.
	//
	UTargetTagRequirementsGameplayEffectComponent* TargetRequirements = CreateDefaultSubobject<UTargetTagRequirementsGameplayEffectComponent>("TargetRequirements");
	TargetRequirements->OngoingTagRequirements.IgnoreTags.AddTag(Tag_Combat_Effect_Cancel_Regeneration_Poise);
	GEComponents.Add(TargetRequirements);
}
