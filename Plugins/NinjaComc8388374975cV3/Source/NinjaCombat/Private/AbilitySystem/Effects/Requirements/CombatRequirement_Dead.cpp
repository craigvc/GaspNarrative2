// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/Requirements/CombatRequirement_Dead.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"

UCombatRequirement_Dead::UCombatRequirement_Dead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	HealthAttribute = UNinjaCombatAttributeSet::GetHealthAttribute();
}

bool UCombatRequirement_Dead::CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect,
	const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const
{
	if (!ASC->HasAttributeSetForAttribute(HealthAttribute))
	{
		return false;
	}

	const float Health = ASC->GetNumericAttribute(HealthAttribute);
	return Health <= 0.f;
}
