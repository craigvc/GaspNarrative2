// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayEffectTypes.h"
#include "CombatAttackAbilityInterface.generated.h"

class UGameplayEffect;
class UNinjaCombatMeleeScan;
class UNinjaCombatProjectileRequest;
class UAbilityTask_ScanMeleeTarget;
class UAbilityTask_SpawnProjectile;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UCombatAttackAbilityInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Abstraction of a Combat Ability, so it can be used with the Support library.
 */
class NINJACOMBAT_API ICombatAttackAbilityInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the current combo counter for an ability, if applicable.
	 * 
	 * Combo Counters can be used to empower a Gameplay Effect applied to a source or target,
	 * depending on how high the current combo is. This value is set via a magnitude tag.
	 */
	virtual int32 GetComboCount() const = 0;
	
	/**
	 * Applies a Gameplay Effect Spec to an actor available in a Hit Result.
	 *
	 * @param SpecHandle		Preprocessed gameplay effect to be applied.
	 * @param HitResult			Hit Result containing the target.
	 * @return					An array of handles representing the outcome.
	 */	
	virtual TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectSpecToHitResult(
		const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult) = 0;

	virtual TSubclassOf<UGameplayEffect> GetMeleeDamageEffectClass() const = 0;
	virtual float GetMeleeDamageEffectLevel() const = 0;
	virtual UAbilityTask_ScanMeleeTarget* GetMeleeScanTask() const = 0;

	/**
	 * Initializes the internal pointer for the Melee Scan task.
	 * The Ability Task must be configured and marked as Ready for Activation.
	 */
	virtual void InitializeMeleeScanTask(const UNinjaCombatMeleeScan* MeleeScan) = 0;
	
	virtual TSubclassOf<AActor> GetProjectileClass() const = 0;
	virtual float GetProjectileEffectLevel() const = 0;
	virtual TSubclassOf<UGameplayEffect> GetProjectileDamageEffectClass() const = 0;
	virtual UAbilityTask_SpawnProjectile* GetSpawnProjectileTask() const = 0;

	/**
	 * Initializes the internal pointer for the Launch Projectile task.
	 * The Ability Task must be configured and marked as Ready for Activation.
	 */	
	virtual void InitializeProjectileTask(const UNinjaCombatProjectileRequest* ProjectileRequest) = 0;
	
};