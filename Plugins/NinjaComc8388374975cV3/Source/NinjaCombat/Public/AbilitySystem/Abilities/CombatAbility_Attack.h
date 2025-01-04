// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatAnimationAbility.h"
#include "AbilitySystem/Interfaces/CombatAttackAbilityInterface.h"
#include "CombatAbility_Attack.generated.h"

class UNinjaCombatProjectileRequest;
class UNinjaCombatMeleeScan;
class UAbilityTask_WaitGameplayEvent;
class UAbilityTask_ScanMeleeTarget;
class UAbilityTask_SpawnProjectile;

/**
 * Handles a Melee or Ranged attack.
 *
 * An attack is very flexible and can both perform a Melee Scan and launch Projectiles. It will
 * listen to events and react accordingly for each scenario. These events are usually triggered
 * by animations, using the appropriate Notifies: "Melee Scan" and "Launch Projectile".
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Attack : public UNinjaCombatAnimationAbility, public ICombatAttackAbilityInterface
{
	
	GENERATED_BODY()

public:
	
	UCombatAbility_Attack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Provides the current combo counter that can be added to damage effects.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	virtual int32 GetComboCount() const override;

	// -- Begin Animation Ability implementation
	virtual void OnAnimationStarted_Implementation() override;
	// -- End Animation Ability implementation
	
	// -- Begin Attack Ability implementation
	virtual TSubclassOf<AActor> GetProjectileClass() const final override { return ProjectileClass; }
	virtual TSubclassOf<UGameplayEffect> GetMeleeDamageEffectClass() const final override { return MeleeDamageEffectClass; }
	virtual TSubclassOf<UGameplayEffect> GetProjectileDamageEffectClass() const final override { return ProjectileDamageEffectClass; }
	virtual float GetMeleeDamageEffectLevel() const final override;
	virtual float GetProjectileEffectLevel() const final override;
	virtual UAbilityTask_ScanMeleeTarget* GetMeleeScanTask() const final override { return MeleeScanTask; }
	virtual UAbilityTask_SpawnProjectile* GetSpawnProjectileTask() const final override { return SpawnProjectileTask; }
	virtual TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectSpecToHitResult(const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult) override;
	// -- End Attack Ability implementation
	
protected:

	// -- Melee Attack --------------------------------------------------------
	
	/**
	 * If set to true, locks on targets from the melee attack, if no target is currently set.
	 * You can change this globally, in the Ninja Combat Settings (bShouldLockOnTargetsFromMeleeAttacks).
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Melee Attack")
	bool bShouldLockOnMeleeTarget;
	
	/**
	 * Gameplay effect applied when the target is hit by a melee attack.
	 * The causer can implement the Melee interface and provide a Gameplay Effect that will override this.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Melee Attack")
	TSubclassOf<UGameplayEffect> MeleeDamageEffectClass;

	/**
	 * Level applied to the Melee Damage Effect.
	 * 
	 * If you want more flexibility instead of this flag value, please check "GetMeleeGameplayEffectLevel".
	 * Also, the causer can implement the Melee interface and provide a level to be used instead.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Melee Attack")
	float DefaultMeleeEffectLevel;
	
	// -- Ranged Attack -------------------------------------------------------
	
	/**
	 * Actor class for the projectile being spawned.
	 * Classes provided in the event payload can override this value.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Ranged Attack", meta = (MustImplement = "/Script/NinjaCombat.CombatProjectileInterface"))
	TSubclassOf<AActor> ProjectileClass;

	/**
	 * Gameplay effect applied when the target is hit by projectile.
	 * The causer can implement the Projectile interface and provide a Gameplay Effect that will override this.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Ranged Attack")
	TSubclassOf<UGameplayEffect> ProjectileDamageEffectClass;
	
	/**
	 * Level applied to the Ranged Damage Effect.
	 * If you want more flexibility instead of this flag value, please check "GetRangedGameplayEffectLevel".
	 * Also, the causer can implement the Projectile interface and provide a level to be used instead.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Ranged Attack")
	float DefaultProjectileEffectLevel;
	
	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void ReceiveCombatTarget_Implementation(AActor* CombatTarget) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	/**
	 * Handles the initialization of the melee scan task. It won't be active yet.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void InitializeMeleeScanTask(const UNinjaCombatMeleeScan* MeleeScan) override;

	/**
	 * Handles the initialization of the spawn projectile task. It won't be active yet.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void InitializeProjectileTask(const UNinjaCombatProjectileRequest* ProjectileRequest) override;

	/**
	 * An extension point invoked when the attack is about to start.
	 * Make sure to call the parent function when adding your own logic.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Attack")
	void HandleAttackStarting();
	
	/**
	 * Handles targets received from a melee scan.
	 * 
	 * @param MeleeScan		Information about the scan that generated hits.
	 * @param Data			Target data received from the scan.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Attack")
	void HandleMeleeScanTargetsReceived(const UNinjaCombatMeleeScan* MeleeScan, const FGameplayAbilityTargetDataHandle& Data);

	/**
	 * Handles a projectile created by the combat system.
	 * 
	 * @param Request		Request that originated the projectile.
	 * @param Projectile	Actor implementing the Projectile interface.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Attack")
	void HandleProjectileLaunched(const UNinjaCombatProjectileRequest* Request, AActor* Projectile);

	/**
	 * Creates an effect spec for a melee hit.
	 *
	 * @param MeleeScan		Source that is responsible for the hit.
	 * @param OutHandle		The handle generated by the method.
	 * @return				True if a valid handle was created.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual bool CreateSpecHandleForMeleeHit(const UNinjaCombatMeleeScan* MeleeScan, FGameplayEffectSpecHandle& OutHandle) const;

	/**
	 * Resets the target count, if this attack is running in a combo context.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void ResetCurrentTargets() const;
	
private:

	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> AttackEventTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_ScanMeleeTarget> MeleeScanTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_SpawnProjectile> SpawnProjectileTask;
	
};
