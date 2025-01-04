// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectCustomApplicationRequirement.h"
#include "CombatRequirement_Stagger.generated.h"

/**
 * Checks the conditions necessary to apply the Stagger effect (usually, this means poise damage == poise).
 */
UCLASS()
class NINJACOMBAT_API UCombatRequirement_Stagger : public UGameplayEffectCustomApplicationRequirement
{
	
	GENERATED_BODY()
	
public:

	UCombatRequirement_Stagger(const FObjectInitializer& ObjectInitializer);
	
	// -- Begin Custom Application Requirement implementation
	virtual bool CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const override;
	// -- End Custom Application Requirement implementation

protected:

	FGameplayAttribute PoiseAttribute;
	FGameplayAttribute PoiseDamageAttribute;
	
};
