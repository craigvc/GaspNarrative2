// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/Requirements/CombatRequirement_Stagger.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"

UCombatRequirement_Stagger::UCombatRequirement_Stagger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PoiseAttribute = UNinjaCombatAttributeSet::GetPoiseAttribute();
	PoiseDamageAttribute = UNinjaCombatAttributeSet::GetPoiseDamageAttribute();
}

bool UCombatRequirement_Stagger::CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect,
	const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const
{
	if (ASC->HasMatchingGameplayTag(Tag_Combat_State_Dead))
	{
		// The character is dead and cannot be staggered.
		return false;	
	}
	
	if (!ASC->HasAttributeSetForAttribute(PoiseAttribute) || !ASC->HasAttributeSetForAttribute(PoiseDamageAttribute))
	{
		// No poise attributes, not possible to track poise/stagger.
		return false;
	}

	const float Poise = ASC->GetNumericAttribute(PoiseAttribute);
	const float PoiseDamage = ASC->GetNumericAttribute(PoiseDamageAttribute);
	return PoiseDamage >= Poise;
}
