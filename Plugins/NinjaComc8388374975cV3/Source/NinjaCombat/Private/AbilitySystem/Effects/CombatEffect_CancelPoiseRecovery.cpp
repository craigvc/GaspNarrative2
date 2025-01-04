// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_CancelPoiseRecovery::UCombatEffect_CancelPoiseRecovery()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetPoiseRecoveryIntervalAttribute(),
		EGameplayEffectAttributeCaptureSource::Target, false);
	
	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;
	
	FInheritedTagContainer EffectTags;
	EffectTags.Added.AddTagFast(Tag_Combat_Effect_Cancel_Regeneration_Poise);
	
	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(EffectTags);
	GEComponents.Add(TargetTags);
}
