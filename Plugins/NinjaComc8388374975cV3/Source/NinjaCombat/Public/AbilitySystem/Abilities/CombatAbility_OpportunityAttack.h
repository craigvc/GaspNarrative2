// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "ContextualAnimSceneActorComponent.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "AbilitySystem/Interfaces/CombatAttackAbilityInterface.h"
#include "Types/FCombatCameraAnimationParameters.h"
#include "Types/TargetingSystemTypes.h"
#include "CombatAbility_OpportunityAttack.generated.h"

class ANinjaCombatCameraAnchorActor;
class UCameraAnimationSequence;
class UAbilityTask_NetworkSyncPoint;
class UAbilityTask_PerformTargeting;
class UAbilityTask_PlayOpportunityAnimation;
class UAbilityTask_ScanMeleeTarget;
class UAbilityTask_SpawnProjectile;
class UAbilityTask_WaitGameplayEvent;
class UContextualAnimSceneAsset;
class UNinjaCombatOpportunityHit;
class UNinjaCombatMeleeScan;
class UTargetingPreset;

/**
 * Opportunity attack that uses paired animations, such as a Backstab, Execution or Riposte.
 *
 * These attacks are based on the Contextual Animation System (or CAS). It is used to orchestrate both animations,
 * where the Primary Actor is always the victim. This ability can obtain the "victim" using the same system
 * available for other attacks: the Target Provider.
 *
 * This ability is expected to have a base CAS, but victims can provide their own version if that's more suitable
 * to their skeleton, proportions or just dedicated animations. A specific CAS is obtained from the Victim via the
 * Combat Opportunity Target Interface.
 *
 * One CAS asset should represent a specific opportunity, albeit with multiple animations. It is paired with adequate
 * Gameplay Effects applied on both Attacker and Victim, so other systems can also react to it, for example: Other
 * abilities can be cancelled from the Gameplay Tags, the enemy AI can change state based on the Gameplay Effect, etc.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UCombatAbility_OpportunityAttack : public UNinjaCombatGameplayAbility, public ICombatAttackAbilityInterface
{
	
	GENERATED_BODY()

public:

	UCombatAbility_OpportunityAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Checks if there is a current, valid victim for this attack.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	bool HasVictim() const;
	
	/**
	 * Provides the current victim.
	 *
	 * @return
	 *		Current target/victim for this opportunity. Only available if the ability
	 *		is currently executing, otherwise it will always be null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	AActor* GetCurrentVictim() const;

	/**
	 * Provides the Player Controller from the Actor Info.
	 *
	 * @return
	 *		The Player Controller stored in the Actor Info. Should not be null in this
	 *		Ability/Combat System context, at least in the way is set up out-of-the-box.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	APlayerController* GetPlayerController() const;

	/**
	 * Locks to the current target, if the victim is still valid and alive.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")	
	void LockTarget();
	
	/**
	 * Unlocks from the current target, via the appropriate Combat Event.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void UnlockTarget();

	// -- Begin Attack Ability implementation
	virtual TSubclassOf<AActor> GetProjectileClass() const final override { return nullptr; }
	virtual TSubclassOf<UGameplayEffect> GetMeleeDamageEffectClass() const final override { return nullptr; }
	virtual TSubclassOf<UGameplayEffect> GetProjectileDamageEffectClass() const final override { return nullptr; }
	virtual float GetMeleeDamageEffectLevel() const final override { return 1; }
	virtual float GetProjectileEffectLevel() const final override { return 1; }
	virtual int32 GetComboCount() const final override { return 0; }
	virtual UAbilityTask_ScanMeleeTarget* GetMeleeScanTask() const final override { return MeleeScanTask; }
	virtual UAbilityTask_SpawnProjectile* GetSpawnProjectileTask() const final override { return SpawnProjectileTask; }
	virtual TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectSpecToHitResult(const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult) override;
	// -- End Attack Ability implementation
	
protected:

	/**
	 * The targeting preset used to capture the actor in the "Victim" role.
	 *
	 * This preset can use many strategies, but most commonly shape collisions or acquiring
	 * the current enemy target. Regardless, an important aspect to consider is checking for
	 * Gameplay Tags that indicate that this target is in an opportunity state, whenever
	 * applicable.
	 *
	 * Some opportunities will also require targets to be registered with the Combat Component,
	 * so their opportunities are only available to specific attacker (or attackers). This is
	 * also something that can be configured in the Targeting Preset, using the correct tasks.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TObjectPtr<UTargetingPreset> TargetingPreset;
	
	/**
	 * Contextual Animation Asset used by this ability.
	 *
	 * If a specific one needs to be used for the current target, it can be provided via the
	 * Combat Opportunity Target Interface. All Contextual Animation Assets must have the Victim
	 * as the Primary Actor in the asset.
	 *
	 * Also, both participants must have the Contextual Anim Scene Actor Component added to them,
	 * and the Attacker must also have a Motion Warping Component, and the Motion Warping Anim
	 * State Notify configured.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TObjectPtr<UContextualAnimSceneAsset> ContextualAnimation;

	/**
	 * Optional Camera Animation that can be played along with the Contextual Animation.
	 *
	 * This requires a Player Camera Manager that implements the Combat Camera Manager interface.
	 * The system provides a basic one, but any other implementation is valid, as long as it follows
	 * this contract.
	 *
	 * The Camera Animation will always be deliberately finished along with the Contextual Animation
	 * so make sure that you adjust both of these together in the Level Sequencer.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TObjectPtr<UCameraAnimationSequence> CameraAnimation;

	/**
	 * An Actor with a Camera Component that will be used as an anchor/focal point for the Camera Animation.
	 *
	 * You can use the default one provided, which has a basic Camera Component, or if you are going for
	 * something more cinematic, you can create your own actor, overriding the Camera Component with the
	 * more elaborate Cine Camera.
	 *
	 * You can also extend the actor to handle more complex movement/camera adjustments, such as avoiding
	 * collisions, adjust placement, camera settings, adding Post Process Effects, and so on.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TSubclassOf<ANinjaCombatCameraAnchorActor> CameraAnchorClass;
	
	/**
	 * Gameplay Effect for the state applied to the Attacker, while this attack is active.
	 * 
	 * Can be used by other systems to determine if this attacker is available or not for certain
	 * things. For example, a token system might stop AI Enemies to attack this target while an
	 * Opportunity Attack is happening or other Gameplay Abilities or Effects might be interrupted.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TSubclassOf<UGameplayEffect> AttackerStateClass;

	/**
	 * Gameplay Effect for the state applied to the Victim, while this attack is active.
	 *
	 * Can be used by other systems to determine if this victim should perform other tasks. For
	 * example, it can interrupt other abilities or trigger a change of state in the AI Behavior.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack")
	TSubclassOf<UGameplayEffect> VictimStateClass;

	/**
	 * A fallback ability triggered if the Opportunity Attack cannot be launched.
	 *
	 * This is a good option if your Opportunity Attack shares the same input as something else,
	 * like the Default Attack. In that case, if the Targeting Preset cannot find any viable targets,
	 * then the fallback attack Ability will be triggered instead.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack", meta = (InlineEditConditionToggle))
	bool bHasAbilityFallback;

	/**
	 * Tags used to activate a fallback ability, triggered if the Opportunity Attack cannot be executed.
	 *
	 * This is a good option if your Opportunity Attack shares the same input as something else,
	 * like a Default Attack. In that case, if the Targeting Preset cannot find any viable targets,
	 * then the fallback attack Ability will be triggered instead.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Opportunity Attack", meta = (EditCondition = "bHasAbilityFallback"))	
	FGameplayTagContainer FallbackAbilityTags; 
	
	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	/**
	 * The targeting task has finished, and we can access its results.
	 * If there is a target, then apply the Gameplay Effects and play the animation.
	 */
	UFUNCTION()
	void HandleTargetReady(FTargetingRequestHandle TargetingRequestHandle);

	/**
	 * The Avatar has left the Animation Scene and the ability should be cancelled.
	 * Most likely due to the animation being finished, but some games may allow interruptions.
	 */
	UFUNCTION()
	void HandleAvatarLeftScene(UContextualAnimSceneActorComponent* SceneActorComponent);

	/**
	 * Handles targets received from a melee scan.
	 * 
	 * @param MeleeScan		Information about the scan that generated hits.
	 * @param Data			Target data received from the scan.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Opportunity Attack")
	void HandleMeleeScanTargetsReceived(const UNinjaCombatMeleeScan* MeleeScan, const FGameplayAbilityTargetDataHandle& Data);

	/**
	 * Handles a projectile created by the combat system.
	 * 
	 * @param Request		Request that originated the projectile.
	 * @param Projectile	Actor implementing the Projectile interface.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Opportunity Attack")
	void HandleProjectileLaunched(const UNinjaCombatProjectileRequest* Request, AActor* Projectile);

	/**
	 * Collects any additional actors that should join the scene.
	 * This excludes the Attacker and Victim roles.
	 *
	 * @return
	 *		A map with role names and actors that should be added to the scene.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Opportunity Attack")
	TMap<FName, AActor*> CollectAdditionalSceneActors();
	
	/**
	 * Starts the Opportunity Attack against a given Target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void ExecuteOpportunityAttack();

	/**
	 * Applies the Gameplay Effects to the avatar and current target.
	 * Returns true if both Gameplay Effects were successfully applied.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	bool ApplyOpportunityGameplayEffects();
	
	/**
	 * Removes the Opportunity Effects and resets the handles.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void RemoveOpportunityGameplayEffects();

	/**
	 * If the victim was killed by this ability, then we need to handle that.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void HandleVictimDeath();

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
	 * Creates an effect spec for an opportunity attack hit.
	 *
	 * @param EffectCauser			Causer for the damage.
	 * @param DamageEffectClass		Gameplay Effect applied as damage.
	 * @param OutHandle				The handle generated by the method.
	 * @return						True if a valid handle was created.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual bool CreateSpecHandleForOpportunityHit(AActor* EffectCauser, const TSubclassOf<UGameplayEffect>& DamageEffectClass, FGameplayEffectSpecHandle& OutHandle) const;
	
	/**
	 * Applies a Gameplay Effect Spec to the current victim.
	 *
	 * @param SpecHandle		Preprocessed gameplay effect to be applied.
	 * @param HitResult			Hit Result for the impact.
	 * @return					An array of handles representing the outcome.
	 */
	TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectSpecToOpportunityTarget(const FGameplayEffectSpecHandle& SpecHandle, const FHitResult* HitResult = nullptr);	

	/**
	 * Plays the Camera Animation configured in this class, for the local player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void ConfigureAndPlayCameraAnimation();

	/**
	 * Stops the current Camera animation, for the local player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void StopCameraAnimation() const;
	
	/**
	 * Builds the Camera Animation Parameters used with this Opportunity Attack.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Opportunity Attack")
	FCombatCameraAnimationParameters BuildCameraAnimationParameters() const;

	/**
	 * An extension point invoked when the opportunity attack is about to start.
	 * Make sure to call the parent function when adding your own logic.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Opportunity Attack")
	void HandleOpportunityAttackStarting();
	
private:

	TWeakObjectPtr<AActor> VictimPtr;
	
	FActiveGameplayEffectHandle AttackerStateHandle;

	TArray<FActiveGameplayEffectHandle> VictimStateHandles;

	UPROPERTY()
	TObjectPtr<ANinjaCombatCameraAnchorActor> Anchor;
	
	UPROPERTY()
	TObjectPtr<UAbilityTask_PerformTargeting> TargetingTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_NetworkSyncPoint> NetSyncTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_PlayOpportunityAnimation> OpportunityAnimationTask;
	
	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> OpportunityDamageEventTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_ScanMeleeTarget> MeleeScanTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_SpawnProjectile> SpawnProjectileTask;
	
};
