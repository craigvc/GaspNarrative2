// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_ReplenishMagic.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"

UCombatEffect_ReplenishMagic::UCombatEffect_ReplenishMagic()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetMagicRegenRateAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetMagicAttribute();
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(MagnitudeAttribute);

	DurationPolicy = EGameplayEffectDurationType::Infinite;
	Period = FScalableFloat(1.f);
	Modifiers.Add(ModifierInfo);

	UTargetTagRequirementsGameplayEffectComponent* TargetRequirements = CreateDefaultSubobject<UTargetTagRequirementsGameplayEffectComponent>("TargetRequirements");
	TargetRequirements->OngoingTagRequirements.IgnoreTags.AddTag(Tag_Combat_Effect_Cancel_Regeneration_Magic);
	GEComponents.Add(TargetRequirements);
}
