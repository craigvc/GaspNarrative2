// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "UObject/Interface.h"
#include "CombatEffectContextProxyInterface.generated.h"

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UCombatEffectContextProxyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Basic definition of a proxy that provides Gameplay Context details for the ability system.
 */
class NINJACOMBAT_API ICombatEffectContextProxyInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Previous Health on the Target, before the effect was applied.
	 *
	 * @param EffectContext		Context providing the information.
	 * @return					The current value for the requested property.
	 */
	virtual float GetPreviousHealthOnTarget(const FGameplayEffectContext* EffectContext) const = 0;

	/**
	 * Sets the new value to the context.
	 *
	 * @param EffectContext				Context receiving the information.
	 * @param PreviousHealthOnTarget	New value for the property.
	 */
	virtual void SetPreviousHealthOnTarget(FGameplayEffectContext* EffectContext, float PreviousHealthOnTarget) const = 0;

	/**
	 * Provides the Previous Stamina on the Target, before the effect was applied.
	 *
	 * @param EffectContext		Context providing the information.
	 * @return					The current value for the requested property.
	 */
	virtual float GetPreviousStaminaOnTarget(const FGameplayEffectContext* EffectContext) const = 0;
	
	/**
	 * Sets the new value to the context.
	 *
	 * @param EffectContext				Context receiving the information.
	 * @param PreviousStaminaOnTarget	New value for the property.
	 */
	virtual void SetPreviousStaminaOnTarget(FGameplayEffectContext* EffectContext, float PreviousStaminaOnTarget) const = 0;

	/**
	 * Provides the Damage applied by the effect.
	 *
	 * @param EffectContext		Context providing the information.
	 * @return					The current value for the requested property.
	 */
	virtual float GetDamageApplied(const FGameplayEffectContext* EffectContext) const = 0;

	/**
	 * Sets the new value to the context.
	 *
	 * @param EffectContext		Context receiving the information.
	 * @param DamageApplied		New value for the property.
	 */
	virtual void SetDamageApplied(FGameplayEffectContext* EffectContext, float DamageApplied) const = 0;

	/**
	 * Provides the cost required to mitigate damage.
	 *
	 * @param EffectContext		Context providing the information.
	 * @return					The current value for the requested property.
	 */
	virtual float GetMitigationCost(const FGameplayEffectContext* EffectContext) const = 0;

	/**
	 * Sets the new value to the context.
	 *
	 * @param EffectContext		Context receiving the information.
	 * @param MitigationCost		New value for the property.
	 */
	virtual void SetMitigationCost(FGameplayEffectContext* EffectContext, float MitigationCost) const = 0;
	
};