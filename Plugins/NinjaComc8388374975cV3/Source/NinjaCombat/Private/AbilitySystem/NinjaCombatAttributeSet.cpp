// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Net/UnrealNetwork.h"

UNinjaCombatAttributeSet::UNinjaCombatAttributeSet()
{
}

void UNinjaCombatAttributeSet::InitMaxHealth(const float NewVal)
{
	MaxHealth.SetBaseValue(NewVal);
	MaxHealth.SetCurrentValue(NewVal);
	RecalculateTotalHealth();
}

void UNinjaCombatAttributeSet::InitMaxHealthAdd(const float NewVal)
{
	MaxHealthAdd.SetBaseValue(NewVal);
	MaxHealthAdd.SetCurrentValue(NewVal);
	RecalculateTotalHealth();
}

void UNinjaCombatAttributeSet::InitMaxHealthPercent(const float NewVal)
{
	MaxHealthPercent.SetBaseValue(NewVal);
	MaxHealthPercent.SetCurrentValue(NewVal);
	RecalculateTotalHealth();
}

void UNinjaCombatAttributeSet::InitMaxStamina(const float NewVal)
{
	MaxStamina.SetBaseValue(NewVal);
	MaxStamina.SetCurrentValue(NewVal);
	RecalculateTotalStamina();
}

void UNinjaCombatAttributeSet::InitMaxStaminaAdd(const float NewVal)
{
	MaxStaminaAdd.SetBaseValue(NewVal);
	MaxStaminaAdd.SetCurrentValue(NewVal);
	RecalculateTotalStamina();
}

void UNinjaCombatAttributeSet::InitMaxStaminaPercent(const float NewVal)
{
	MaxStaminaPercent.SetBaseValue(NewVal);
	MaxStaminaPercent.SetCurrentValue(NewVal);
	RecalculateTotalStamina();
}

void UNinjaCombatAttributeSet::InitMaxMagic(const float NewVal)
{
	MaxMagic.SetBaseValue(NewVal);
	MaxMagic.SetCurrentValue(NewVal);
	RecalculateTotalMagic();
}

void UNinjaCombatAttributeSet::InitMaxMagicAdd(const float NewVal)
{
	MaxMagicAdd.SetBaseValue(NewVal);
	MaxMagicAdd.SetCurrentValue(NewVal);
	RecalculateTotalMagic();
}

void UNinjaCombatAttributeSet::InitMaxMagicPercent(const float NewVal)
{
	MaxMagicPercent.SetBaseValue(NewVal);
	MaxMagicPercent.SetCurrentValue(NewVal);
	RecalculateTotalMagic();
}

void UNinjaCombatAttributeSet::InitFromMetaDataTable(const UDataTable* DataTable)
{
	Super::InitFromMetaDataTable(DataTable);
	RecalculateTotalHealth();
	RecalculateTotalStamina();
	RecalculateTotalMagic();
}

void UNinjaCombatAttributeSet::RecalculateTotalHealth()
{
	float AbsoluteValue = GetAbsoluteMaxHealth();

	MaxHealthTotal.SetBaseValue(AbsoluteValue);
	MaxHealthTotal.SetCurrentValue(AbsoluteValue);	
	
	const FGameplayAttribute& HealthAttribute = GetMaxHealthTotalAttribute();
	HealthAttribute.SetNumericValueChecked(AbsoluteValue, this);
}

void UNinjaCombatAttributeSet::RecalculateTotalStamina()
{
	float AbsoluteValue = GetAbsoluteMaxStamina();

	MaxStaminaTotal.SetBaseValue(AbsoluteValue);
	MaxStaminaTotal.SetCurrentValue(AbsoluteValue);

	const FGameplayAttribute& StaminaAttribute = GetMaxStaminaTotalAttribute();
	StaminaAttribute.SetNumericValueChecked(AbsoluteValue, this);	
}

void UNinjaCombatAttributeSet::RecalculateTotalMagic()
{
	float AbsoluteValue = GetAbsoluteMaxMagic();

	MaxMagicTotal.SetBaseValue(AbsoluteValue);
	MaxMagicTotal.SetCurrentValue(AbsoluteValue);

	const FGameplayAttribute& MagicAttribute = GetMaxMagicTotalAttribute();
	MagicAttribute.SetNumericValueChecked(AbsoluteValue, this);
}

void UNinjaCombatAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, const float OldValue, const float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetMaxHealthAttribute() || Attribute == GetMaxHealthAddAttribute() || Attribute == GetMaxHealthPercentAttribute())
	{
		RecalculateFromAttributeChange(GetHealthAttribute(), GetMaxHealthAttribute(), GetMaxHealthAddAttribute(),
			GetMaxHealthPercentAttribute(), GetMaxHealthTotalAttribute(), Attribute, NewValue);
	}
	else if (Attribute == GetMaxStaminaAttribute() || Attribute == GetMaxStaminaAddAttribute() || Attribute == GetMaxStaminaPercentAttribute())
	{
		RecalculateFromAttributeChange(GetStaminaAttribute(), GetMaxStaminaAttribute(), GetMaxStaminaAddAttribute(),
			GetMaxStaminaPercentAttribute(), GetMaxStaminaTotalAttribute(), Attribute, NewValue);
	}
	else if (Attribute == GetMaxMagicAttribute() || Attribute == GetMaxMagicAddAttribute() || Attribute == GetMaxMagicPercentAttribute())
	{
		RecalculateFromAttributeChange(GetMagicAttribute(), GetMaxMagicAttribute(), GetMaxMagicAddAttribute(),
			GetMaxMagicPercentAttribute(), GetMaxMagicTotalAttribute(), Attribute, NewValue);
	}
}

void UNinjaCombatAttributeSet::RecalculateFromAttributeChange(FGameplayAttribute Current, FGameplayAttribute Base,
	FGameplayAttribute Add, FGameplayAttribute Percent, FGameplayAttribute Total, FGameplayAttribute Changed, float NewValue)
{
	const float CurrentValue = Current.GetNumericValue(this);
	const float BaseValue = Changed == Base ? NewValue : Base.GetNumericValue(this);
	const float AddValue = Changed == Add ? NewValue : Add.GetNumericValue(this);
	const float PercentValue = Changed == Percent ? NewValue : Percent.GetNumericValue(this);
	const float TotalValue = GetAbsoluteValue_Internal(BaseValue, AddValue, PercentValue);

	UAbilitySystemComponent* AbilityComponent = GetOwningAbilitySystemComponent();
	if (ensure(AbilityComponent))
	{
		AbilityComponent->ApplyModToAttribute(Total, EGameplayModOp::Override, TotalValue);

		if (CurrentValue < 0.f || CurrentValue > TotalValue)
		{
			const float ClampedValue = FMath::Clamp(CurrentValue, 0.f, TotalValue);
			AbilityComponent->ApplyModToAttribute(Current, EGameplayModOp::Override, ClampedValue);	
		}
	}
}

void UNinjaCombatAttributeSet::AdjustAttributeForMaxValueChange(const FGameplayAttributeData& AffectedAttribute,
	const FGameplayAttributeData& MaxAttribute, const float NewMaxValue,
	const FGameplayAttribute& AffectedAttributeProperty) const
{
	UAbilitySystemComponent* AbilityComponent = GetOwningAbilitySystemComponent();
	if (ensure(AbilityComponent))
	{
		const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
		if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue))
		{
			const float CurrentValue = AffectedAttribute.GetCurrentValue();
			const float NewDelta = CurrentMaxValue > 0.f ? CurrentValue * NewMaxValue / CurrentMaxValue - CurrentValue : NewMaxValue;
			AbilityComponent->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
		}
	}	
}

void UNinjaCombatAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		const float ClampedHealth = FMath::Clamp(GetHealth(), 0.f, GetMaxHealthTotal()); 
		SetHealth(ClampedHealth);
		AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Health, GetHealth(), GetMaxHealthTotal());
	}
	else if (Data.EvaluatedData.Attribute == GetHealthRegenRateAttribute())
	{
		const float PositiveHealthRegenRate = FMath::Max(GetHealthRegenRate(), 0.f);
		SetHealthRegenRate(PositiveHealthRegenRate);
	}	
	else if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		const float ClampedStamina = FMath::Clamp(GetStamina(), 0.f, GetMaxStaminaTotal()); 
		SetStamina(ClampedStamina);
		AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Stamina, GetStamina(), GetMaxStaminaTotal());
	}
	else if (Data.EvaluatedData.Attribute == GetStaminaRegenRateAttribute())
	{
		const float PositiveStaminaRegenRate = FMath::Max(GetStaminaRegenRate(), 0.f);
		SetStaminaRegenRate(PositiveStaminaRegenRate);
	}		
	else if (Data.EvaluatedData.Attribute == GetMagicAttribute())
	{
		const float ClampedMagic = FMath::Clamp(GetMagic(), 0.f, GetMaxMagicTotal()); 
		SetMagic(ClampedMagic);
		AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Magic, GetMagic(), GetMaxMagicTotal());
	}
	else if (Data.EvaluatedData.Attribute == GetMagicRegenRateAttribute())
	{
		const float PositiveMagicRegenRate = FMath::Max(GetMagicRegenRate(), 0.f);
		SetMagicRegenRate(PositiveMagicRegenRate);
	}	
	else if (Data.EvaluatedData.Attribute == GetBaseDamageAttribute())
	{
		const float PositiveBaseDamage = FMath::Max(GetBaseDamage(), 0.f);
		SetBaseDamage(PositiveBaseDamage);
	}
	else if (Data.EvaluatedData.Attribute == GetCriticalHitChanceAttribute())
	{
		const float ClampedMagicCriticalHitChance = FMath::Clamp(GetCriticalHitChance(), 0.f, 1.f); 
		SetCriticalHitChance(ClampedMagicCriticalHitChance);
	}
	else if (Data.EvaluatedData.Attribute == GetCriticalHitMultiplierAttribute())
	{
		const float PositiveCriticalHitMultiplier = FMath::Max(GetCriticalHitMultiplier(), 0.f);
		SetCriticalHitMultiplier(PositiveCriticalHitMultiplier);
	}
	else if (Data.EvaluatedData.Attribute == GetArmorReductionAttribute())
	{
		const float PositiveArmorReduction = FMath::Max(GetArmorReduction(), 0.f);
		SetArmorReduction(PositiveArmorReduction);
	}
	else if (Data.EvaluatedData.Attribute == GetBlockChanceAttribute())
	{
		const float ClampedBlockChance = FMath::Clamp(GetBlockChance(), 0.f, 1.f); 
		SetBlockChance(ClampedBlockChance);
	}	
	else if (Data.EvaluatedData.Attribute == GetBlockMitigationAttribute())
	{
		const float ClampedBlockMitigation = FMath::Clamp(GetBlockMitigation(), 0.f, 1.f); 
		SetBlockMitigation(ClampedBlockMitigation);
	}
	else if (Data.EvaluatedData.Attribute == GetBlockStaminaCostRateAttribute())
	{
		const float PositiveBlockStaminaCostRate = FMath::Max(GetBlockStaminaCostRate(), 0.f);
		SetBlockStaminaCostRate(PositiveBlockStaminaCostRate);
	}	
	else if (Data.EvaluatedData.Attribute == GetDefenseChanceAttribute())
	{
		const float ClampedDefenseChance = FMath::Clamp(GetDefenseChance(), 0.f, 1.f); 
		SetDefenseChance(ClampedDefenseChance);
	}	
	else if (Data.EvaluatedData.Attribute == GetDefenseMitigationAttribute())
	{
		const float ClampedDefenseMitigation = FMath::Clamp(GetDefenseMitigation(), 0.f, 1.f); 
		SetDefenseMitigation(ClampedDefenseMitigation);
	}
	else if (Data.EvaluatedData.Attribute == GetDefenseStaminaCostRateAttribute())
	{
		const float PositiveDefenseStaminaCostRate = FMath::Max(GetDefenseStaminaCostRate(), 0.f);
		SetDefenseStaminaCostRate(PositiveDefenseStaminaCostRate);
	}
	else if (Data.EvaluatedData.Attribute == GetPoiseDamageAttribute())
	{
		const float ClampedPoiseDamage = FMath::Clamp(GetPoiseDamage(), 0.f, GetPoise()); 
		SetPoiseDamage(ClampedPoiseDamage);
	}	
	else if (Data.EvaluatedData.Attribute == GetPendingDamageAttribute())
	{
		HandleIncomingDamage(Data);
		SetPendingDamage(0.f);
	}
	else if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute() || Data.EvaluatedData.Attribute == GetMaxHealthAddAttribute() || Data.EvaluatedData.Attribute == GetMaxHealthPercentAttribute())
	{
		RecalculateTotalHealth();
	}
	else if (Data.EvaluatedData.Attribute == GetMaxStaminaAttribute() || Data.EvaluatedData.Attribute == GetMaxStaminaAddAttribute() || Data.EvaluatedData.Attribute == GetMaxStaminaPercentAttribute())
	{
		RecalculateTotalStamina();
	}
	else if (Data.EvaluatedData.Attribute == GetMaxMagicAttribute() || Data.EvaluatedData.Attribute == GetMaxMagicAddAttribute() || Data.EvaluatedData.Attribute == GetMaxMagicPercentAttribute())
	{
		RecalculateTotalMagic();
	}	
}

void UNinjaCombatAttributeSet::HandleIncomingDamage(const FGameplayEffectModCallbackData& Data)
{
	const AActor* TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
	check(IsValid(TargetActor));
	
	const UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(TargetActor);
	if (IsValid(DamageComponent) && ensure(DamageComponent->Implements<UCombatDamageManagerInterface>()))
	{
		FDamageCalculationInput Input;
		InitializeDamageCalculationInput(Data, Input);

		FDamageCalculationOutput Output;
		ICombatDamageManagerInterface::Execute_CalculateDamage(DamageComponent, Input, Output);

		if (!Output.bIsCancelled)
		{
			// Unless the damage was fully cancelled, we'll apply the damage, even for zero damage.
			// Zero damage should still trigger reactions, it just means a very good mitigation.
			ApplyDamage(Data, Output);	
		}
	}
}

void UNinjaCombatAttributeSet::InitializeDamageCalculationInput(const FGameplayEffectModCallbackData& Data, FDamageCalculationInput& Input) const
{
	Input.DamageInstigator = Data.EffectSpec.GetContext().GetInstigator();
	Input.TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
	Input.Damage = Data.EvaluatedData.Attribute.GetNumericValue(this);
	Input.CurrentHealth = GetHealth();
	Input.CurrentStamina = GetStamina();
	Input.BlockChance = GetBlockChance();
	Input.BlockMitigation = GetBlockMitigation();
	Input.BlockLimit = GetBlockLimit();
	Input.BlockStaminaCostRate = GetBlockStaminaCostRate();
	Input.DefenseChance = GetDefenseChance();
	Input.DefenseMitigation = GetDefenseMitigation();
	Input.DefenseLimit = GetDefenseLimit();
	Input.DefenseStaminaCostRate = GetDefenseStaminaCostRate();
	Input.ArmorReduction = GetArmorReduction();
	Input.SetHitResult(Data.EffectSpec.GetContext().GetHitResult());
	
	const FGameplayTagContainer* AggregatedSourceTags = Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	if (AggregatedSourceTags != nullptr)
	{
		Input.SourceTags = *AggregatedSourceTags;
	}

	const FGameplayTagContainer* AggregatedTargetTags = Data.EffectSpec.CapturedTargetTags.GetAggregatedTags();
	if (AggregatedTargetTags != nullptr)
	{
		Input.TargetTags = *AggregatedTargetTags;
	}
}

void UNinjaCombatAttributeSet::ApplyDamage(const FGameplayEffectModCallbackData& Data, const FDamageCalculationOutput& Output)
{
	const AActor* TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
	check(IsValid(TargetActor));
	
	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(TargetActor);
	if (IsValid(DamageComponent))
	{
		const float Damage = Output.GetAppliedDamage();
		const float MitigationCost = Output.GetMitigationCost();
		const float PreviousHealth = GetHealth();
		const float PreviousStamina = GetStamina();

		const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
		if (Proxy != nullptr)
		{
			const FGameplayEffectSpec& Spec = Data.EffectSpec;

			FGameplayEffectSpec& ModifiableSpec = const_cast<FGameplayEffectSpec&>(Spec);
			if (Output.bIsBlocked && !Output.bIsBreaker) { ModifiableSpec.AddDynamicAssetTag(Tag_Combat_Effect_Damage_Blocked); }
			if (Output.bIsBreaker) { ModifiableSpec.AddDynamicAssetTag(Tag_Combat_Effect_Damage_Breaker); }
			if (Output.bIsFatal) { ModifiableSpec.AddDynamicAssetTag(Tag_Combat_Effect_Damage_Fatal); }
			if (Output.bIsLastStand) { ModifiableSpec.AddDynamicAssetTag(Tag_Combat_Effect_Damage_LastStand); }
			if (GetPoiseDamage() == GetPoise()) { ModifiableSpec.AddDynamicAssetTag(Tag_Combat_Effect_Damage_Stagger); }
			
			FGameplayEffectContext* EffectContext = Spec.GetContext().Get();
			Proxy->SetPreviousHealthOnTarget(EffectContext, PreviousHealth);
			Proxy->SetPreviousStaminaOnTarget(EffectContext, PreviousStamina);
			Proxy->SetDamageApplied(EffectContext, Damage);
			Proxy->SetMitigationCost(EffectContext, MitigationCost);
		}
		
		const float CurrentHealth = FMath::Clamp(PreviousHealth - Damage, 0.f, GetMaxHealthTotal());
		SetHealth(CurrentHealth);

		const float CurrentStamina = FMath::Clamp(PreviousStamina - MitigationCost, 0.f, GetMaxStaminaTotal());
		SetStamina(CurrentStamina);

		if (Output.bIsLastStand)
		{
			UActorComponent* DefenseComponent = UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(TargetActor);
			if (IsValid(DefenseComponent))
			{
				ICombatDefenseManagerInterface::Execute_CommitLastStand(DefenseComponent);
			}
		}
		
		ICombatDamageManagerInterface::Execute_RegisterDamageReceived(DamageComponent, Data.EffectSpec);
	}
}

float UNinjaCombatAttributeSet::GetAbsoluteMaxHealth() const
{
	return GetAbsoluteValue_Internal(GetMaxHealth(), GetMaxHealthAdd(), GetMaxHealthPercent());
}

float UNinjaCombatAttributeSet::GetAbsoluteMaxStamina() const
{
	return GetAbsoluteValue_Internal(GetMaxStamina(), GetMaxStaminaAdd(), GetMaxStaminaPercent());
}

float UNinjaCombatAttributeSet::GetAbsoluteMaxMagic() const
{
	return GetAbsoluteValue_Internal(GetMaxMagic(), GetMaxMagicAdd(), GetMaxMagicPercent());
}

float UNinjaCombatAttributeSet::GetAbsoluteValue_Internal(const float Base, const float Add, const float Percent) const
{
	const float SafePercent = Percent != 0.f ? Percent : 1.f;
	return (Base + Add) * SafePercent;
}

void UNinjaCombatAttributeSet::AddOrRemoveLooseGameplayTag(const FGameplayTag Tag, const float Value, const float MaxValue) const
{
	UAbilitySystemComponent* OwnerASC = GetOwningAbilitySystemComponent();
	if (IsValid(OwnerASC))
	{
		if (Value == MaxValue)
		{
			OwnerASC->AddLooseGameplayTag(Tag);
		}
		else
		{
			OwnerASC->RemoveLooseGameplayTag(Tag);
		}
	}	
}

void UNinjaCombatAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxHealthAdd, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxHealthPercent, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxStaminaAdd, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxStaminaPercent, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, StaminaRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, StaminaRegenDelay, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Magic, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxMagic, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxMagicAdd, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxMagicPercent, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MagicRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MagicRegenDelay, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BaseDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, CriticalHitChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, CriticalHitMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockMitigation, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockAngle, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockLimit, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockStaminaCostRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockStaminaCost, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BlockCooldown, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, EvadeStaminaCost, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, EvadeCooldown, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, DefenseChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, DefenseMitigation, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, DefenseLimit, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, DefenseStaminaCostRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, ArmorReduction, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, LastStandCount, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, LastStandHealthPercent, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Poise, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, PoiseDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, PoiseRecovery, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, PoiseRecoveryInterval, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, StaggerDuration, COND_None, REPNOTIFY_Always);
}

void UNinjaCombatAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Health, OldValue);
	AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Health, GetHealth(), GetMaxHealthTotal());
}

void UNinjaCombatAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxHealthTotal();
	RecalculateTotalHealth();

	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealth, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealthTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxHealthAdd(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxHealthTotal();
	RecalculateTotalHealth();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealthAdd, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealthTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxHealthPercent(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxHealthTotal();
	RecalculateTotalHealth();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealthPercent, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxHealthTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_HealthRegenRate(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, HealthRegenRate, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Stamina, OldValue);
	AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Stamina, GetStamina(), GetMaxStaminaTotal());
}

void UNinjaCombatAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxStaminaTotal();
	RecalculateTotalStamina();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStamina, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStaminaTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxStaminaAdd(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxStaminaTotal();
	RecalculateTotalStamina();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStaminaAdd, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStaminaTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxStaminaPercent(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxStaminaTotal();
	RecalculateTotalStamina();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStaminaPercent, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxStaminaTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_StaminaRegenRate(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, StaminaRegenRate, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_StaminaRegenDelay(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, StaminaRegenDelay, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_Magic(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Magic, OldValue);
	AddOrRemoveLooseGameplayTag(Tag_Combat_Effect_Cancel_Regeneration_Magic, GetMagic(), GetMaxMagicTotal());
}

void UNinjaCombatAttributeSet::OnRep_MaxMagic(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxMagicTotal();
	RecalculateTotalMagic();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagic, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagicTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxMagicAdd(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxMagicTotal();
	RecalculateTotalMagic();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagicAdd, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagicTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MaxMagicPercent(const FGameplayAttributeData& OldValue)
{
	const float OldTotal = GetMaxMagicTotal();
	RecalculateTotalMagic();
	
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagicPercent, OldValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxMagicTotal, OldTotal);
}

void UNinjaCombatAttributeSet::OnRep_MagicRegenRate(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MagicRegenRate, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_MagicRegenDelay(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MagicRegenDelay, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_BaseDamage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BaseDamage, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_CriticalHitChance(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, CriticalHitChance, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_CriticalHitMultiplier(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, CriticalHitMultiplier, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_BlockChance(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockChance, OldValue);	
}

void UNinjaCombatAttributeSet::OnRep_BlockMitigation(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockMitigation, OldValue);	
}

void UNinjaCombatAttributeSet::OnRep_BlockAngle(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockAngle, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_BlockLimit(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockLimit, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_BlockStaminaCostRate(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockStaminaCostRate, OldValue);	
}

void UNinjaCombatAttributeSet::OnRep_BlockStaminaCost(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockStaminaCost, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_BlockCooldown(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, BlockCooldown, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_EvadeStaminaCost(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, EvadeStaminaCost, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_EvadeCooldown(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, EvadeCooldown, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_DefenseChance(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, DefenseChance, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_DefenseMitigation(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, DefenseMitigation, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_DefenseLimit(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, DefenseLimit, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_DefenseStaminaCostRate(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, DefenseStaminaCostRate, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_ArmorReduction(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, ArmorReduction, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_LastStandCount(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, LastStandCount, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_LastStandHealthPercent(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, LastStandHealthPercent, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_Poise(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Poise, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_PoiseDamage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, PoiseDamage, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_PoiseRecovery(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, PoiseRecovery, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_PoiseRecoveryInterval(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, PoiseRecoveryInterval, OldValue);
}

void UNinjaCombatAttributeSet::OnRep_StaggerDuration(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, StaggerDuration, OldValue);
}
