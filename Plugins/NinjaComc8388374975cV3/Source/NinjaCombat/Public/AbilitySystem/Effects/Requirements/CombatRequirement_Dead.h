// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectCustomApplicationRequirement.h"
#include "CombatRequirement_Dead.generated.h"

/**
 * Checks the conditions necessary to apply the Dead effect (usually, this means health == 0).
 */
UCLASS()
class NINJACOMBAT_API UCombatRequirement_Dead : public UGameplayEffectCustomApplicationRequirement
{
	
	GENERATED_BODY()
	
public:

	UCombatRequirement_Dead(const FObjectInitializer& ObjectInitializer);
	
	// -- Begin Custom Application Requirement implementation
	virtual bool CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const override;
	// -- End Custom Application Requirement implementation

protected:

	FGameplayAttribute HealthAttribute;
	
};
