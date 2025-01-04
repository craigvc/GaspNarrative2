// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "CombatCalculation_LastStandHealth.generated.h"

/**
 * Calculates how much health should be granted when a Last Stand happens.
 */
UCLASS()
class NINJACOMBAT_API UCombatCalculation_LastStandHealth : public UGameplayModMagnitudeCalculation
{
	
	GENERATED_BODY()

public:

	UCombatCalculation_LastStandHealth();
	
	// -- Begin Magnitude Calculation implementation
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
	// -- End Magnitude Calculation implementation
	
};
