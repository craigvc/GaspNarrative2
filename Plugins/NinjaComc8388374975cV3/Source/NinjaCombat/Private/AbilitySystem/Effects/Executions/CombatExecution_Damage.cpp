// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/Executions/CombatExecution_Damage.h"

#include "GameplayTagContainer.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatSubsystem.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/GameStateBase.h"
#include "Interfaces/CombatDamageModifierInterface.h"

// ReSharper disable once CppUE4CodingStandardNamingViolationWarning
FGameplayTag UCombatExecution_Damage::EMPTY_CALLER_TAG = FGameplayTag::EmptyTag;

struct FDamageExecutionCaptures
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(BaseDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitChance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(CriticalHitMultiplier);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PendingDamage);
    
	/** Provides the proper instance for this struct. */
	static FDamageExecutionCaptures& Get()
	{
		static FDamageExecutionCaptures Singleton;
		return Singleton;
	}

private:
	
	FDamageExecutionCaptures()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, BaseDamage, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, CriticalHitChance, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, CriticalHitMultiplier, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UNinjaCombatAttributeSet, PendingDamage, Target, true);
	}
};

UCombatExecution_Damage::UCombatExecution_Damage()
{
	RelevantAttributesToCapture.Add(FDamageExecutionCaptures::Get().BaseDamageDef);
	RelevantAttributesToCapture.Add(FDamageExecutionCaptures::Get().CriticalHitChanceDef);
	RelevantAttributesToCapture.Add(FDamageExecutionCaptures::Get().CriticalHitMultiplierDef);
	RelevantAttributesToCapture.Add(FDamageExecutionCaptures::Get().PendingDamageDef);

#if WITH_EDITORONLY_DATA
	ValidTransientAggregatorIdentifiers.AddTag(Tag_Combat_Data_Damage_Multiplier);
#endif
}

void UCombatExecution_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	const TObjectPtr<UAbilitySystemComponent> SourceAbilities = ExecutionParams.GetSourceAbilitySystemComponent();
	const TObjectPtr<UAbilitySystemComponent> TargetAbilities = ExecutionParams.GetTargetAbilitySystemComponent();
	
	if (IsValid(SourceAbilities) && IsValid(TargetAbilities))
	{
		const FGameplayEffectSpec& EffectSpec = ExecutionParams.GetOwningSpec();
		FAggregatorEvaluateParameters EvaluationParams;
		EvaluationParams.SourceTags = EffectSpec.CapturedSourceTags.GetAggregatedTags();
		EvaluationParams.TargetTags = EffectSpec.CapturedTargetTags.GetAggregatedTags();

		float PendingDamage = 0.f;
		CalculateBaseDamage(ExecutionParams, EvaluationParams, PendingDamage);
		CalculateCriticalDamage(ExecutionParams, EvaluationParams, PendingDamage);

		if (PendingDamage > 0.f)
		{
			FGameplayModifierEvaluatedData Data;
			Data.Attribute = FDamageExecutionCaptures::Get().PendingDamageProperty;
			Data.ModifierOp = EGameplayModOp::Additive;
			Data.Magnitude = PendingDamage;
			
			OutExecutionOutput.AddOutputModifier(Data);
			OutExecutionOutput.MarkConditionalGameplayEffectsToTrigger();
		}
	}
}

void UCombatExecution_Damage::CalculateBaseDamage(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	const FAggregatorEvaluateParameters& EvaluateParams, float& Damage) const
{
	Capture(Damage, ExecutionParams, EvaluateParams, FDamageExecutionCaptures::Get().BaseDamageDef, Tag_Combat_Data_Damage);		
	if (Damage > 0.f)
	{
		
		float DamageMultiplier = 1.0f;
		ExecutionParams.AttemptCalculateTransientAggregatorMagnitude(Tag_Combat_Data_Damage_Multiplier, EvaluateParams, DamageMultiplier);
		Damage *= DamageMultiplier;
		
		const AActor* SourceActor = ExecutionParams.GetSourceAbilitySystemComponent()->GetAvatarActor();
		const AActor* TargetActor = ExecutionParams.GetTargetAbilitySystemComponent()->GetAvatarActor();

		const AGameStateBase* GameState = SourceActor->GetWorld()->GetGameState();
		if (IsValid(GameState) && GameState->Implements<UCombatDamageModifierInterface>())
		{
			const FGameplayTagContainer& SourceTags = EvaluateParams.SourceTags ? *EvaluateParams.SourceTags : FGameplayTagContainer::EmptyContainer;
			const FGameplayTagContainer& TargetTags = EvaluateParams.TargetTags ? *EvaluateParams.TargetTags : FGameplayTagContainer::EmptyContainer;
			
			Damage = ICombatDamageModifierInterface::Execute_ModifyDamage(GameState, Damage, SourceActor,
				TargetActor, SourceTags, TargetTags);
		}
	}
}

void UCombatExecution_Damage::CalculateCriticalDamage(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	const FAggregatorEvaluateParameters& EvaluateParams, float& Damage) const
{
	if (Damage == 0.f)
	{
		COMBAT_LOG(Verbose, "Zero damage being applied, no Critical Damage to calculate.");
		return;
	}

	const FGameplayEffectContextHandle& ContextHandle = ExecutionParams.GetOwningSpec().GetContext();
	if (!ContextHandle.IsValid())
	{
		COMBAT_LOG(Warning, "Invalid Context handle for Critical Damage calculation!");
		return;
	}
	
	const UWorld* World = GetWorldFromContext(ContextHandle);
	if (!World)
	{
		COMBAT_LOG(Warning, "Unable to access World for Critical Chance roll!");
		return;
	}

	const float CriticalChanceRoll = Roll(World);

	float CriticalHitChance = 0.f;
	Capture(CriticalHitChance, ExecutionParams, EvaluateParams, FDamageExecutionCaptures::Get().CriticalHitChanceDef, Tag_Combat_Data_CriticalHitChance);	
	if (CriticalHitChance == 0.f) return;
	
	if (CriticalChanceRoll <= CriticalHitChance)
	{
		float CriticalHitMultiplier = 0.f;
		Capture(CriticalHitMultiplier, ExecutionParams, EvaluateParams, FDamageExecutionCaptures::Get().CriticalHitMultiplierDef, Tag_Combat_Data_CriticalHitMultiplier);
		if (CriticalHitMultiplier == 0.f) return;
		
		FGameplayEffectSpec* MutableSpec = ExecutionParams.GetOwningSpecForPreExecuteMod();
		MutableSpec->AddDynamicAssetTag(Tag_Combat_Effect_Damage_Critical);
		Damage *= CriticalHitMultiplier;
	}
}

float UCombatExecution_Damage::Roll(const UWorld* World, const float Min, const float Max)
{
	const UNinjaCombatSubsystem* CombatSubsystem = World ? World->GetGameInstance()->GetSubsystem<UNinjaCombatSubsystem>() : nullptr;
	check(IsValid(CombatSubsystem));
	return CombatSubsystem->GetRandomFloatInRange(Min, Max);
}

void UCombatExecution_Damage::Capture(float& InOutValue,
	const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	const FAggregatorEvaluateParameters& EvaluateParams, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef,
	const FGameplayTag CallerTag)
{
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(InCaptureDef, EvaluateParams, InOutValue);
	
	if (CallerTag.IsValid())
	{
		constexpr bool bIgnoreMagnitudeNotFound = false;
		InOutValue = ExecutionParams.GetOwningSpec().GetSetByCallerMagnitude(CallerTag, bIgnoreMagnitudeNotFound, InOutValue);
	}
}

UWorld* UCombatExecution_Damage::GetWorldFromContext(const FGameplayEffectContextHandle& ContextHandle) const
{
	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		return World;
	}
	
	if (!ContextHandle.IsValid())
	{
		return nullptr;
	}
	
	const UObject* SourceObject = ContextHandle.GetSourceObject();
	World = IsValid(SourceObject) ? SourceObject->GetWorld() : nullptr;
	if (IsValid(World))
	{
		return World;
	}

	const AActor* Instigator = ContextHandle.GetInstigator();
	World = IsValid(Instigator) ? Instigator->GetWorld() : nullptr;
	if (IsValid(World))
	{
		return World;
	}

	const AActor* EffectCauser = ContextHandle.GetEffectCauser();
	World = IsValid(EffectCauser) ? EffectCauser->GetWorld() : nullptr;
	if (IsValid(World))
	{
		return World;
	}
	
	const UGameplayAbility* Ability = ContextHandle.GetAbility();
	World = IsValid(Ability) ? Ability->GetWorld() : nullptr;
	if (IsValid(World))
	{
		return World;
	}

	return nullptr;
}
