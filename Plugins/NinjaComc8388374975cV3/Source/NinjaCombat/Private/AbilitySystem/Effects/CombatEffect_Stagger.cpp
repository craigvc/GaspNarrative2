// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_Stagger.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "AbilitySystem/Effects/CombatEffect_RecoverPoiseImmediately.h"
#include "AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h"
#include "AbilitySystem/Effects/Requirements/CombatRequirement_Stagger.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_Stagger::UCombatEffect_Stagger()
{
	FAttributeBasedFloat MagnitudeAttribute;
	MagnitudeAttribute.BackingAttribute = FGameplayEffectAttributeCaptureDefinition(
		UNinjaCombatAttributeSet::GetStaggerDurationAttribute(),
		EGameplayEffectAttributeCaptureSource::Target, false);
	
	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	DurationMagnitude = MagnitudeAttribute;

	StackingType = EGameplayEffectStackingType::AggregateByTarget;
	StackLimitCount = 1;
	StackDurationRefreshPolicy = EGameplayEffectStackingDurationPolicy::NeverRefresh;
	StackPeriodResetPolicy = EGameplayEffectStackingPeriodPolicy::NeverReset;
	StackExpirationPolicy = EGameplayEffectStackingExpirationPolicy::ClearEntireStack;

	FInheritedTagContainer EffectTags;
	EffectTags.Added.AddTagFast(Tag_Combat_State_Staggered);
	
	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(EffectTags);
	GEComponents.Add(TargetTags);

	UCustomCanApplyGameplayEffectComponent* Requirement = CreateDefaultSubobject<UCustomCanApplyGameplayEffectComponent>("Requirement");
	Requirement->ApplicationRequirements.Add(UCombatRequirement_Stagger::StaticClass());
	GEComponents.Add(Requirement);

	UAdditionalEffectsGameplayEffectComponent* AdditionalEffects = CreateDefaultSubobject<UAdditionalEffectsGameplayEffectComponent>("AdditionalEffects");
	AdditionalEffects->OnCompleteAlways.Add(UCombatEffect_RecoverPoiseImmediately::StaticClass());
	GEComponents.Add(AdditionalEffects);
	
	UGameplayEffectUIData_CombatStatus* StatusData = CreateDefaultSubobject<UGameplayEffectUIData_CombatStatus>("StatusData");
	StatusData->DisplayName = NSLOCTEXT("CombatStatusData", "stagger.name", "Stagger");
	GEComponents.Add(StatusData);
}
