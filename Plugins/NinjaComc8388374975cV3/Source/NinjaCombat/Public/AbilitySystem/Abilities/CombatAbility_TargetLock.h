// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "Types/TargetingSystemTypes.h"
#include "CombatAbility_TargetLock.generated.h"

class UAbilityTask_PerformTargeting;
class UAbilityTask_TrackDistance;
class UAbilityTask_WaitGameplayEvent;
class UGameplayEffect;
class UTargetingPreset;

/**
 * Locks on a target, acquired by a certain targeting preset.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_TargetLock : public UNinjaCombatGameplayAbility
{
	
	GENERATED_BODY()

public:

	UCombatAbility_TargetLock();

	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	// -- End Gameplay Ability implementation

	/**
	 * Checks if the owner currently has a target.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	bool HasTarget() const;

	/**
	 * Provides the current target stored.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	AActor* GetTarget() const;
	
protected:
	
	/** The Targeting Preset used by the targeting system. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock")
	TObjectPtr<UTargetingPreset> TargetingPreset;

	/**
	 * The Targeting Preset used by the targeting system following up a target that died.
	 *
	 * This setting is enabled by the "bMoveToNewTargets" and it's optional. If you don't set this
	 * Preset, then this ability will fall back to the default Targeting Preset originally set.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock", meta = (EditCondition = "bMoveToNewTargets"))
	TObjectPtr<UTargetingPreset> NextTargetingPreset;

	/**
	 * Determines if a new target should be acquired when the current one dies.
	 * 
	 * You might want to set up the "Next Targeting" Preset for these targets, to potentially find new
	 * targets that are closer than the original range, or with different types of criteria.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock")
	bool bMoveToNewTargets;
	
	/** Determines if Targeting is done asynchronously. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock")
	bool bPerformAsyncTargeting;

	/** Defines if a distance threshold will be tracked and if exceeded, target will be unlocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock", meta = (InlineEditConditionToggle))
	bool bTrackDistance;
	
	/** Threshold where a tracked target will be disengaged. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock", meta = (EditCondition = "bTrackDistance"))
	float DistanceThreshold;
	
	/** Optional Gameplay Effect applied if a target is acquired. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Target Lock")
	TSubclassOf<UGameplayEffect> TargetLockEffectClass;

	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	/**
	 * Initializes the Targeting Task, configured using this Ability's properties.
	 *
	 * This will always cancel a current targeting execution and start a new one.
	 * 
	 * @param Preset
	 *		Targeting Preset used by this function. It won't assume using the one configured in the ability,
	 *		to allow potential subclasses to create their own logic, providing other presets if needed.
	 *
	 * @param bExecuteAsync
	 *		Determines if the Targeting Preset will be executed asynchronously or not.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void CollectTarget(UTargetingPreset* Preset, bool bExecuteAsync = true);

	/**
	 * Dismiss the current target, unbinding from it.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void DismissCurrentTarget();
	
	/**
	 * Reacts to a response from the Targeting System.
	 */
	UFUNCTION()
	void HandleTargetReady(FTargetingRequestHandle TargetingRequestHandle);

	/**
	 * Actually handles the new Target, once it has been initially processed.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Target Lock")
	void HandleNewTarget(AActor* NewTarget);
	
	/**
	 * Reacts to the distance from the current target being exceeded.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Target Lock")
	void HandleDistanceExceeded(const AActor* Target, float Distance);

	/**
	 * Reacts to the death of the current target.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Target Lock")
	void HandleTargetDeath(AActor* Actor);
	
	/**
	 * Sets the Target Lock effect, informing other systems about this.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void ApplyTargetLockEffect();

	/**
	 * Removes the Target Lock effect, which also informs other systems about this.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void RemoveTargetLockEffect();
	
	/** 
	 * Tracks the distance for the current target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void StartTrackingDistance();

	/**
	 * Stops tracking the distance to the current target. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void StopTrackingDistance();

private:

	/** Task used to collect targets. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_PerformTargeting> TargetingTask;

	/** Task to track the distance from an active target. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_TrackDistance> DistanceTask;

	/** Task to track an external event informing that the target was dismissed. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> TargetEventTask;

	/** Handle for the applied Targeting Handle. */
	FActiveGameplayEffectHandle ActiveTargetingEffectHandle;

	void SetTargetOnOwnerComponent(AActor* Target) const;
	void ClearTargetFromOwnerComponent() const;
	
	void BindToDeathDelegate(const AActor* Target);
	void UnbindFromDeathDelegate(const AActor* Target) const;
	
};
