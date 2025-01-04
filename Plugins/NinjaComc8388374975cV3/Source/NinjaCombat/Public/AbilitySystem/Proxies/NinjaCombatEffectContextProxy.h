// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"
#include "UObject/Object.h"
#include "NinjaCombatEffectContextProxy.generated.h"

/**
 * Default Proxy for an Effect Context.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatEffectContextProxy : public UObject, public ICombatEffectContextProxyInterface
{
	
	GENERATED_BODY()
	
public:

	// -- Begin Effect Context Proxy implementation
	virtual float GetPreviousHealthOnTarget(const FGameplayEffectContext* EffectContext) const override;
	virtual void SetPreviousHealthOnTarget(FGameplayEffectContext* EffectContext, float PreviousHealthOnTarget) const override;
	virtual float GetPreviousStaminaOnTarget(const FGameplayEffectContext* EffectContext) const override;
	virtual void SetPreviousStaminaOnTarget(FGameplayEffectContext* EffectContext, float PreviousStaminaOnTarget) const override;
	virtual float GetDamageApplied(const FGameplayEffectContext* EffectContext) const override;
	virtual void SetDamageApplied(FGameplayEffectContext* EffectContext, float DamageApplied) const override;
	virtual float GetMitigationCost(const FGameplayEffectContext* EffectContext) const override;
	virtual void SetMitigationCost(FGameplayEffectContext* EffectContext, float MitigationCost) const override;
	// -- End Effect Context Proxy implementation

};
