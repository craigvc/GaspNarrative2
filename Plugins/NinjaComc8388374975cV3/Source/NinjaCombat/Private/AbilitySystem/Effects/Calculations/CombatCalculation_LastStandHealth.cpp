// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/Calculations/CombatCalculation_LastStandHealth.h"

#include "GameplayEffectExecutionCalculation.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"

struct FLastStandHealthCaptures
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxHealthTotal);
	DECLARE_ATTRIBUTE_CAPTUREDEF(LastStandHealthPercent);

	/** Provides the proper instance for this struct. */
	static FLastStandHealthCaptures& Get()
	{
		static FLastStandHealthCaptures Singleton;
		return Singleton;
	}

private:

	FLastStandHealthCaptures()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, MaxHealthTotal, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, LastStandHealthPercent, Source, true);
	}
};

UCombatCalculation_LastStandHealth::UCombatCalculation_LastStandHealth()
{
	RelevantAttributesToCapture.Add(FLastStandHealthCaptures::Get().MaxHealthTotalDef);
	RelevantAttributesToCapture.Add(FLastStandHealthCaptures::Get().LastStandHealthPercentDef);
}

float UCombatCalculation_LastStandHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;
	
	float MaxHealth = 0.f;
	GetCapturedAttributeMagnitude(FLastStandHealthCaptures::Get().MaxHealthTotalDef, Spec, EvaluationParameters, MaxHealth);
	MaxHealth = FMath::Max(MaxHealth, 0.0f);

	float HealthPercent = 0.f;
	GetCapturedAttributeMagnitude(FLastStandHealthCaptures::Get().LastStandHealthPercentDef, Spec, EvaluationParameters, HealthPercent);
	HealthPercent = FMath::Clamp(HealthPercent, 0.f, 1.f);

	return MaxHealth * HealthPercent;
}
