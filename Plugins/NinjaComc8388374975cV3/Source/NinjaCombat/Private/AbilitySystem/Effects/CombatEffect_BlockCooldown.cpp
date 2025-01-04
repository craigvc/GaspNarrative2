// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_BlockCooldown.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_BlockCooldown::UCombatEffect_BlockCooldown()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetBlockCooldownAttribute(),
		EGameplayEffectAttributeCaptureSource::Source, false);

	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_Cooldown_Block);

	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(TargetTags);
}
