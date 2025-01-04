// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_CancelMagicRegeneration.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_CancelMagicRegeneration::UCombatEffect_CancelMagicRegeneration()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetMagicRegenDelayAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);

	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_Effect_Cancel_Regeneration_Magic);

	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(TargetTags);
}
