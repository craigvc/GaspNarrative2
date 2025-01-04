// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h"

#include "AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h"

float UNinjaCombatEffectContextProxy::GetPreviousHealthOnTarget(const FGameplayEffectContext* EffectContext) const
{
	const FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<const FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	return CombatEffectContext->GetPreviousHealthOnTarget();
}

void UNinjaCombatEffectContextProxy::SetPreviousHealthOnTarget(FGameplayEffectContext* EffectContext, const float PreviousHealthOnTarget) const
{
	FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	CombatEffectContext->SetPreviousHealthOnTarget(PreviousHealthOnTarget);	
}

float UNinjaCombatEffectContextProxy::GetPreviousStaminaOnTarget(const FGameplayEffectContext* EffectContext) const
{
	const FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<const FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	return CombatEffectContext->GetPreviousStaminaOnTarget();
}

void UNinjaCombatEffectContextProxy::SetPreviousStaminaOnTarget(FGameplayEffectContext* EffectContext, const float PreviousStaminaOnTarget) const
{
	FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	CombatEffectContext->SetPreviousStaminaOnTarget(PreviousStaminaOnTarget);	
}

float UNinjaCombatEffectContextProxy::GetDamageApplied(const FGameplayEffectContext* EffectContext) const
{
	const FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<const FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	return CombatEffectContext->GetDamageApplied();
}

void UNinjaCombatEffectContextProxy::SetDamageApplied(FGameplayEffectContext* EffectContext, const float DamageApplied) const
{
	FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	CombatEffectContext->SetDamageApplied(DamageApplied);	
}

float UNinjaCombatEffectContextProxy::GetMitigationCost(const FGameplayEffectContext* EffectContext) const
{
	const FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<const FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	return CombatEffectContext->GetMitigationCost();	
}

void UNinjaCombatEffectContextProxy::SetMitigationCost(FGameplayEffectContext* EffectContext, float MitigationCost) const
{
	FNinjaCombatGameplayEffectContext* CombatEffectContext = static_cast<FNinjaCombatGameplayEffectContext*>(EffectContext);
	check(CombatEffectContext != nullptr);
	CombatEffectContext->SetMitigationCost(MitigationCost);	
}
