// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_CancelStaminaRegeneration::UCombatEffect_CancelStaminaRegeneration()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetStaminaRegenDelayAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);

	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_Effect_Cancel_Regeneration_Stamina);

	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(TargetTags);
}
