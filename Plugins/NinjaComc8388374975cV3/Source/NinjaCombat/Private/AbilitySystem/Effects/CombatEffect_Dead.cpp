// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_Dead.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h"
#include "AbilitySystem/Effects/CombatEffect_ComboWindow.h"
#include "AbilitySystem/Effects/CombatEffect_Evading.h"
#include "AbilitySystem/Effects/CombatEffect_ParryWindow.h"
#include "AbilitySystem/Effects/CombatEffect_RecoverPoise.h"
#include "AbilitySystem/Effects/CombatEffect_ReplenishHealth.h"
#include "AbilitySystem/Effects/CombatEffect_ReplenishMagic.h"
#include "AbilitySystem/Effects/CombatEffect_ReplenishStamina.h"
#include "AbilitySystem/Effects/Requirements/CombatRequirement_Dead.h"
#include "GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h"
#include "GameplayEffectComponents/RemoveOtherGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_Dead::UCombatEffect_Dead()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;

	StackingType = EGameplayEffectStackingType::AggregateByTarget;
	StackLimitCount = 1;
	StackDurationRefreshPolicy = EGameplayEffectStackingDurationPolicy::NeverRefresh;
	StackPeriodResetPolicy = EGameplayEffectStackingPeriodPolicy::NeverReset;
	StackExpirationPolicy = EGameplayEffectStackingExpirationPolicy::ClearEntireStack;

	FInheritedTagContainer EffectTags;
	EffectTags.Added.AddTagFast(Tag_Combat_State_Dead);
	
	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(EffectTags);
	GEComponents.Add(TargetTags);

	UCustomCanApplyGameplayEffectComponent* Requirement = CreateDefaultSubobject<UCustomCanApplyGameplayEffectComponent>("Requirement");
	Requirement->ApplicationRequirements.Add(UCombatRequirement_Dead::StaticClass());
	GEComponents.Add(Requirement);

	RemovedEffects = CreateDefaultSubobject<URemoveOtherGameplayEffectComponent>("RemovedEffects");
	RemoveGameplayEffect(UCombatEffect_ComboWindow::StaticClass());
	RemoveGameplayEffect(UCombatEffect_Evading::StaticClass());
	RemoveGameplayEffect(UCombatEffect_ParryWindow::StaticClass());
	RemoveGameplayEffect(UCombatEffect_RecoverPoise::StaticClass());
	RemoveGameplayEffect(UCombatEffect_ReplenishHealth::StaticClass());
	RemoveGameplayEffect(UCombatEffect_ReplenishMagic::StaticClass());
	RemoveGameplayEffect(UCombatEffect_ReplenishStamina::StaticClass());
	GEComponents.Add(RemovedEffects);
}

void UCombatEffect_Dead::RemoveGameplayEffect(const TSubclassOf<UGameplayEffect> EffectClass) const
{
	FGameplayEffectQuery& Query = RemovedEffects->RemoveGameplayEffectQueries.AddDefaulted_GetRef();
	Query.EffectDefinition = EffectClass;
}
