// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatAnimationAbility.h"
#include "AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h"
#include "Types/TargetingSystemTypes.h"
#include "CombatAbility_Cast.generated.h"

class UNinjaCombatCastRequest;
class AGameplayAbilityTargetActor;
class UTargetingPreset;
class UAbilityTask_PerformTargeting;
class UAbilityTask_SpawnCast;
class UAbilityTask_WaitGameplayEvent;
class UAbilityTask_WaitTargetData;

/**
 * Determines what will actually trigger the cast.
 */
UENUM(BlueprintType)
enum class ECombatCastTrigger : uint8
{
	/** The cast is triggered immediately, as soon as the Gameplay Ability starts. */
	AbilityActivation,

	/**
	 * The cast is triggered by the "Combat.Event.Cast" Gameplay Event, which can be triggered
	 * by anything in the system, including the provided "Cast" Animation Notify.
	 */
	GameplayEvent
};

/**
 * Types of targets supported by the cast ability.
 *
 * The Cast Ability relies heavily on its targeting systems and supports the Gameplay Targeting
 * System, a standalone Cast Actor that works independently of the Gameplay Ability and the usual
 * Gameplay Ability Target Actor, that supports confirmation.
 *
 * The Targeting mechanism determines if this cast can benefit the caster or benefit other targets,
 * so whatever gets captured/filter by the Target logic will receive the Gameplay Effect.
 */
UENUM(BlueprintType)
enum class ECombatCastTargeting : uint8
{
	/**
	 * The cast effect will be applied to all targets collected via the Targeting System.
	 *
	 * You *could* do something similar using a Gameplay Ability Target Actor, but then you would have
	 * the cost of spawning that actor or at least retrieving from the pool. If all you need is instant
	 * targeting, the Targeting System is a great way to do so.
	 */
	TargetingSystem,

	/**
	 * The cast effect will be applied to all targets collected by a Spawned Actor.
	 *
	 * This is a "fire-and-forget" spawn, meaning that the Ability can end, and the actor will continue
	 * applying its Gameplay Effect to any targets collected, while the actor itself is active. 
	 */
	SpawnActor,

	/**
	 * The cast effect will be applied to all targets collected and confirmed by a Spawned Actor.
	 *
	 * This waits for confirmation, using the Gameplay Ability System targeting actors. The ability
	 * will start the Wait Target Data task, spawn the actor and wait for confirmation of targets.
	 *
	 * Please note that the Cast Actor is also compatible with the GAS Targeting Actor, while also
	 * being compatible with the Combat Actor pool. The actor will be retrieved from the pool if
	 * the Avatar has a pool that contains the desired actor.
	 */
	WaitForConfirmation,

	/**
	 * Once a target is confirmed, its location will be retrieved and a Cast Actor will be spawned.
	 *
	 * This is a hybrid strategy that can support complex behaviors, allowing players to confirm
	 * targeting, using something like a UI element or decal, and then spawning an actor that will
	 * effectively apply damage at that area.
	 */
	WaitForConfirmationAndSpawnActor
};

/**
 * Determines when the Cost and Cooldown are being commited.
 *
 * A Cast can have that happening at different times, all illustrated by this enum. If the commit
 * is happening after the activation, then the Cost and Cooldown are at least checked before the
 * Ability/Cast starts.
 */
UENUM(BlueprintType)
enum class ECombatCastCommitTime : uint8
{
	/** The cost and cooldown are commited as soon as the Ability Activates. */
	AbilityActivates,

	/** The cost and cooldown are commited when the Cast starts (Gameplay Event). */
	CastStarts,

	/** The cost and cooldown are commited when targets are acquired. */
	TargetsAcquired
};

/**
 * Handles a cast, something like a Buff, Incantation or Area of Effect.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Cast : public UNinjaCombatAnimationAbility, public ICombatTargetActorModifierInterface
{
	
	GENERATED_BODY()

public:
	
	UCombatAbility_Cast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Starts the Cast, using the appropriate strategy, as per the Ability Setup.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void StartCast();

	/**
	 * Starts the cast, including information from a Gameplay Event.
	 * The most important element is the Cast Request in Optional Object 1 or 2.
	 */
	void StartCastWithPayload(const FGameplayEventData& Payload);
	
	/**
	 * Collects targets using the Gameplay Targeting System.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void CollectTargetsFromTargetingSystem();

	/**
	 * Spawns the Targeting Actor using the Spawn Task and allows the Ability to end.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void SpawnCastActor(UNinjaCombatCastRequest* CastRequest);
	
	/**
	 * Spawns the Targeting Actor using the Wait Confirmation Task and waits for confirmation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void SpawnTargetingActorAndWaitConfirmation();
	
protected:

	/**
	 * Determines when the casting will actually happen 
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast")
	ECombatCastTrigger CastTrigger;
	
	/**
	 * The logic used by this Ability to collect its targets.
	 *
	 * Make sure to check each comment in the Combat Cast Targeting struct to understand all
	 * options available for targeting.
	 * 
	 * The logic will determine if this ability targets its owner or external targets, the ability
	 * itself is agnostic to that, and it could even benefit both, without additional handling.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast")
	ECombatCastTargeting Targeting;

	/**
	 * Determines when the Ability Cost and Cooldown are commited.
	 *
	 * If the Cost and Cooldown are not commited when the Ability starts, the Ability will at least
	 * perform a check for these when it activates.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast")
	ECombatCastCommitTime CommitTime;
	
	/**
	 * Gameplay Effect applied to any target collected by the Cast Ability.
	 *
	 * The logic is fully contained in the Targeting logic (targeting preset, or actors/confirmation),
	 * and the Ability does not know what type of target (self, allies, enemies, etc.) is receiving
	 * the effect.
	 *
	 * If you need lots of flexibility, covering multiple types of target, then create a Gameplay
	 * Effect that applies multiple other effects to targets, based on certain criteria, such as the
	 * presence of tags or other custom ones.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast")
	TSubclassOf<UGameplayEffect> CastEffectClass;

	/** Level to apply the Gameplay Effect. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast")
	float CastEffectLevel;
	
	/** The Targeting Preset used to collect targets for the cast. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::TargetingSystem", EditConditionHides))
	TObjectPtr<UTargetingPreset> TargetingPreset;

	/** Determines if Targeting is done asynchronously. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::TargetingSystem", EditConditionHides))
	bool bPerformAsyncTargeting;

	/**
	 * The Gameplay Ability Target Actor spawned to collect targets and deliberately confirm them.
	 *
	 * This Actor is responsible for collecting targets and at some point confirm back to the
	 * ability so the ability can apply the Gameplay Effect to all confirmed targets.
	 *
	 * The Ability will try to retrieve this actor from the Avatar's Actor Pool.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::WaitForConfirmation", EditConditionHides))
	TSubclassOf<AGameplayAbilityTargetActor> TargetingActorClass;

	/** An optional Montage Section name used when the targeting is confirmed. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::WaitForConfirmation", EditConditionHides))
	FName SectionWhenConfirmed;

	/** An optional Montage Section name used when the targeting is confirmed. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::WaitForConfirmation", EditConditionHides))
	FName SectionWhenCancelled;
	
	/**
	 * Type of confirmation expected for the targeting.
	 *
	 * For instant confirmations, without any visual elements, you might want to consider using
	 * the Targeting System instead, which is also supported by this Cast Ability. That has the
	 * benefit of not requiring any actors and therefor it's overhead.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::WaitForConfirmation", EditConditionHides))
	TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;

	/**
	 * The Cast Actor spawned to collect targets and apply the Gameplay Effect.
	 *
	 * This actor is self-contained and will receive a full Gameplay Effect Spec Handle that
	 * can be used to apply the Gameplay Effect to any targets collected by it, in any way.
	 *
	 * The Ability will try to retrieve this actor from the Avatar's Actor Pool. Must be a
	 * valid implementation of "CombatCastInterface".
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (EditCondition = "Targeting == ECombatCastTargeting::SpawnActor || Targeting == ECombatCastTargeting::WaitForConfirmationAndSpawnActor", EditConditionHides, MustImplement = "/Script/NinjaCombat.CombatCastInterface"))
	TSubclassOf<AActor> CastActorClass;
	
	/**
	 * A Gameplay Tag for the Cue applied when the cast succeeds.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Cast", meta = (Categories = "GameplayCue"))
	FGameplayTag CosmeticsGameplayCue;
	
	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	// -- Begin Target Actor Modifier implementation
	virtual void ModifyActor_Implementation(AGameplayAbilityTargetActor* TargetActor) override;
	// -- End Target Actor Modifier implementation

	/**
	 * Retrieves the Cast Request from a Gameplay Payload.
	 *
	 * @param Payload	A hard const-reference to the payload.
	 * @return			The combat request obtained from the payload. Might be null.
	 */
	virtual UNinjaCombatCastRequest* GetRequestFromPayload(const FGameplayEventData& Payload) const;

	/**
	 * Creates a default Cast Request.
	 *
	 * @return
	 *		Creates a default Cast Request using the properties available from the
	 *		Cast Gameplay Ability (Cast Actor, and Targeting Transform).
	 */
	virtual UNinjaCombatCastRequest* CreateDefaultRequest() const;
	
	/**
	 * Defines the Transform used as the Cast Source.
	 *
	 * Used by the Targeting System as the Source Location and also for the Spawned Actors
	 * as their original transform. Override this if you need something different from the
	 * Avatar's location.
	 *
	 * @return
	 *		The Transform used as a source for all Targeting modes.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	FTransform GetTargetingSourceTransform() const;

	/**
	 * Creates a targeting source that can be used by the Targeting System or Actor.
	 *
	 * @return
	 *		A Source Location Info for targeting. By default, this function creates an
	 *		Actor Transform Location Type, using the Avatar's Location as its value.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	FGameplayAbilityTargetingLocationInfo CreateTargetingSource() const;

	/**
	 * Applies the cast effect to all targets found.
	 *
	 * @param TargetsFound
	 *		Array of targets that will receive the Gameplay Effect from this cast.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void CastToTargets(const TArray<AActor*>& TargetsFound);

	/**
	 * Handles targets collected using the Gameplay Targeting System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void HandleTargetsReady(FTargetingRequestHandle TargetingRequestHandle);

	/**
	 * Handles a Cast Actor that has been initialized and not spawned yet.
	 *
	 * This function can be extended to set any pre-requisite data to the Cast Actor,
	 * that should be available before the actor begins play or is activated from the pool.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void HandleCastActorReady(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor);

	/**
	 * Handles a Cast Actor that has been spawned or activated from the pool.
	 *
	 * This function can be extended to handle any logic when the Cat Actor has finished
	 * spawned or activated from the pool. Just keep in mind that it will only run in the
	 * authority/local player.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void HandleCastActorSpawned(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor);
	
	/**
	 * Handles all targets collected from the Targeting Actor, based on the "Targeting" property.
	 *
	 * By default, it will do one of two things, depending on the class configuration: It can
	 * apply the Gameplay Effect to all targets collected by the Targeting Actor right away,
	 * or it can spawn the Cast Actor, with the Effect Spec and allowing it to apply to targets.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void HandleTargetDataConfirmed(const FGameplayAbilityTargetDataHandle& Data);

	/**
	 * Handles the cancellation of target selection.
	 *
	 * By default, it will cancel the Ability itself, but this can be overriden to do other things,
	 * such as playing a new Montage, triggering a Gameplay Cue or interrupting any other effects.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Cast Ability")
	void HandleTargetDataCancelled(const FGameplayAbilityTargetDataHandle& Data);
	
private:

	FActiveGameplayEffectHandle CastGameplayEffectHandle;

	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> CastEventTask;	

	UPROPERTY()
	TObjectPtr<UAbilityTask_PerformTargeting> TargetingTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_SpawnCast> SpawnCastTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitTargetData> WaitTargetConfirmationTask;
	
};
