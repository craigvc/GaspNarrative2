// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_ReplenishStamina.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"

UCombatEffect_ReplenishStamina::UCombatEffect_ReplenishStamina()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetStaminaRegenRateAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);
	
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = UNinjaCombatAttributeSet::GetStaminaAttribute();
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(MagnitudeAttribute);

	DurationPolicy = EGameplayEffectDurationType::Infinite;
	Period = FScalableFloat(1.f);
	Modifiers.Add(ModifierInfo);

	UTargetTagRequirementsGameplayEffectComponent* TargetRequirements = CreateDefaultSubobject<UTargetTagRequirementsGameplayEffectComponent>("TargetRequirements");
	TargetRequirements->OngoingTagRequirements.IgnoreTags.AddTag(Tag_Combat_Effect_Cancel_Regeneration_Stamina);
	GEComponents.Add(TargetRequirements);
}
