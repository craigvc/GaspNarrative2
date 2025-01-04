// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "CombatExecution_Damage.generated.h"

class UWorld;

/**
 * Calculates the damage to apply, considering the source's critical modifier and the target's damage mitigation.
 */
UCLASS()
class NINJACOMBAT_API UCombatExecution_Damage : public UGameplayEffectExecutionCalculation
{
	
	GENERATED_BODY()

public:

	UCombatExecution_Damage();

	// -- Begin Execution Calculation implementation
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
	// -- End Execution Calculation implementation

protected:

	// Helper value to allow a default empty gameplay tag as a function argument.
	// ReSharper disable once CppUE4CodingStandardNamingViolationWarning
	static FGameplayTag EMPTY_CALLER_TAG;
	
	/**
	 * Retrieves the base damage either from the Effect Spec or the Backing Attribute.
	 *
	 * @param ExecutionParams	Parameters for this execution.
	 * @param EvaluateParams	Parameters used during the evaluation.
	 * @param Damage			In/Out with the current ongoing damage.
	 */
	virtual void CalculateBaseDamage(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		const FAggregatorEvaluateParameters& EvaluateParams, float& Damage) const;

	/**
	 * Calculates the Critical Damage factor.
	 *
	 * If a critical damage actually happened, this method is also responsible for updating
	 * the ongoing Gameplay Effect Context, adding the critical hit tag when needed.
	 * 
	 * @param ExecutionParams	Parameters for this execution.
	 * @param EvaluateParams	Parameters used during the evaluation.
	 * @param Damage			In/Out with the current ongoing damage.
	 */
	virtual void CalculateCriticalDamage(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		const FAggregatorEvaluateParameters& EvaluateParams, float& Damage) const;

	/**
	 * Performs a random roll between min/max values, using the Combat System's Random Stream.
	 */
	static float Roll(const UWorld* World, float Min = 0.f, float Max = 1.f);
	
	/**
	 * Captures a value from the backing attribute or from the caller override.
	 */
	static void Capture(float& InOutValue, const FGameplayEffectCustomExecutionParameters& ExecutionParams, const FAggregatorEvaluateParameters& EvaluateParams,
		const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, FGameplayTag CallerTag = EMPTY_CALLER_TAG);

	/**
	 * Attempts to retrieve a world from the provided Execution Params.
	 */
	UWorld* GetWorldFromContext(const FGameplayEffectContextHandle& ContextHandle) const;
	
};
