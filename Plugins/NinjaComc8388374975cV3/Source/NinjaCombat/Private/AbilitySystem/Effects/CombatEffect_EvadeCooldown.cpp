// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_EvadeCooldown.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_EvadeCooldown::UCombatEffect_EvadeCooldown()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetEvadeCooldownAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);

	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_Cooldown_Evade);

	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(TargetTags);
}
