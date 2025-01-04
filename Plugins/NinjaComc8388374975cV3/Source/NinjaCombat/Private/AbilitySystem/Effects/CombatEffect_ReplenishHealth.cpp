// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_ReplenishHealth.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"

UCombatEffect_ReplenishHealth::UCombatEffect_ReplenishHealth()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetHealthRegenRateAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetHealthAttribute();
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(MagnitudeAttribute);

	DurationPolicy = EGameplayEffectDurationType::Infinite;
	Period = FScalableFloat(1.f);
	Modifiers.Add(ModifierInfo);

	UTargetTagRequirementsGameplayEffectComponent* TargetRequirements = CreateDefaultSubobject<UTargetTagRequirementsGameplayEffectComponent>("TargetRequirements");
	TargetRequirements->OngoingTagRequirements.IgnoreTags.AddTag(Tag_Combat_Effect_Cancel_Regeneration_Health);
	GEComponents.Add(TargetRequirements);
}
