// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeDamageExecCalc.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "NarrativeGameplayTags.h"
#include "UnrealFramework/NarrativePhysicalMaterial.h"

struct FDamageStatics
{
	//When dealing damage, we capture AttackDamage, AttackRating (essentially an attack multiplier), and targets armor. 
	FGameplayEffectAttributeCaptureDefinition AttackDamageDef;
	FGameplayEffectAttributeCaptureDefinition AttackRatingDef;

	FGameplayEffectAttributeCaptureDefinition ArmorDef;

	FDamageStatics()
	{
		AttackDamageDef = FGameplayEffectAttributeCaptureDefinition(UNarrativeAttributeSetBase::GetAttackDamageAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
		AttackRatingDef = FGameplayEffectAttributeCaptureDefinition(UNarrativeAttributeSetBase::GetAttackRatingAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);

		ArmorDef = FGameplayEffectAttributeCaptureDefinition(UNarrativeAttributeSetBase::GetArmorAttribute(), EGameplayEffectAttributeCaptureSource::Target, false);
	}
};

static FDamageStatics& DamageStatics()
{
	static FDamageStatics Statics;
	return Statics;
}

UNarrativeDamageExecCalc::UNarrativeDamageExecCalc()
{
	RelevantAttributesToCapture.Add(DamageStatics().AttackDamageDef);
	RelevantAttributesToCapture.Add(DamageStatics().AttackRatingDef);
	RelevantAttributesToCapture.Add(DamageStatics().ArmorDef);
}

void UNarrativeDamageExecCalc::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Gather the tags from the source and target as that can affect which buffs should be used
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Armor = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorDef, EvaluationParameters, Armor);
	Armor = FMath::Max<float>(Armor, 0.0f);

	float Damage = 0.0f;
	// Capture optional damage value set on the damage GE as a CalculationModifier under the ExecutionCalculation
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AttackDamageDef, EvaluationParameters, Damage);

	float AttackRating = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AttackRatingDef, EvaluationParameters, AttackRating);
	AttackRating = FMath::Max<float>(AttackRating, 0.f);

	//Attack rating is basically 20PTS = 120% damage, 130PTS = 230% damage, etc. 
	const float AttackMultiplier = 1.f + (AttackRating / 100.f);

	//Armor is basically the same but we'll divide by it. So 30PTS defence = FinalDamage (12) / 1.3 = 9.23 points damage 
	const float DefenceMultiplier = (1.f + Armor / 100.f);

	float MaterialMultiplier = 1.f;
	if (const FHitResult* Hit = Spec.GetContext().GetHitResult())
	{
		if (UNarrativePhysicalMaterial* NPM = Cast<UNarrativePhysicalMaterial>(Hit->PhysMaterial.Get()))
		{
			MaterialMultiplier = NPM->DamageMultiplier;
		}
	}

	//10 * 120% = 12 / 1.f
	float FinalDamage = ((Damage * AttackMultiplier) / DefenceMultiplier) * MaterialMultiplier; 

	if (FinalDamage > 0.f)
	{
		// Set the Target's damage meta attribute
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(UNarrativeAttributeSetBase::GetDamageAttribute(), EGameplayModOp::Additive, FinalDamage));
	}
}
