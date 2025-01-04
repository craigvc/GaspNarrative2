// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable CppUEBlueprintCallableFunctionUnused
#pragma once

#include "CoreMinimal.h"
#include "GameplayCueInterface.h"
#include "NinjaCombatBaseComponent.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "Types/FDamageList.h"
#include "NinjaCombatManagerComponent.generated.h"

class UGameplayEffect;
class UNinjaCombatDamageDataAsset;
class UNinjaCombatMeleeScan;

/**
 * Manages targets, damage and defense for a combatant.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatManagerComponent : public UNinjaCombatBaseComponent, public IGameplayCueInterface,
	public ICombatTargetManagerInterface, public ICombatDefenseManagerInterface, public ICombatDamageManagerInterface
{
	
	GENERATED_BODY()

public:

	/** Broadcasts an attack that has started. */
	UPROPERTY(BlueprintAssignable)
	FAttackStartedMCDelegate OnAttackStarted;
	
	UNinjaCombatManagerComponent();

	// -- Begin Actor Component implementation
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation

	// -- Begin Base Component implementation
	virtual void OnAbilitySystemComponentReceived() override;
	virtual void OnAbilitySystemComponentReset() override;
	// -- End Base Component implementation
	
	// -- Begin Target Manager implementation
	virtual void BindToCombatTargetChangedDelegate_Implementation(const FCombatTargetChangedDelegate& Delegate) override;
	virtual void UnbindFromTargetChangedDelegate_Implementation(const UObject* Source) override;
	virtual AActor* GetCombatTarget_Implementation() const override;
	virtual void SetCombatTarget_Implementation(AActor* NewCombatTarget) override;
	virtual void ReceiveTargetingSource_Implementation(AActor* TargetingSource) override;
	virtual void ClearTargetingSource_Implementation(AActor* TargetingSource) override;
	virtual ANinjaCombatMarkerActor* GetTargetLockActor_Implementation() const override;
	// -- End Target Manager implementation

	// -- Begin Defense Manager implementation
	virtual bool IsBlocking_Implementation() const override;
	virtual bool IsInvulnerable_Implementation() const override;
	virtual bool CanBlock_Implementation(const FDamageCalculationInput& Input) const override;
	virtual bool CheckLastStand_Implementation() const override;
	virtual void CommitLastStand_Implementation() override;
	virtual void DefendDamage_Implementation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const override;
	virtual void BindToBlockingStateChangedDelegate_Implementation(const FBlockingStateChangedDelegate& Delegate) override;
	virtual void BindToInvulnerabilityStateChangedDelegate_Implementation(const FInvulnerabilityStateChangedDelegate& Delegate) override;
	virtual void UnbindFromBlockingStateChangedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromInvulnerabilityStateChangedDelegate_Implementation(const UObject* Source) override;
	// -- End Defense Manager implementation

	// -- Begin Damage Manager implementation
	virtual const UNinjaCombatDamageDataAsset* GetDamageData_Implementation() const override;
	virtual bool IsStaggered_Implementation() const override;
	virtual bool IsDead_Implementation() const override;
	virtual void CalculateDamage_Implementation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const override;
	virtual void RegisterDamageReceived_Implementation(const FGameplayEffectSpec& EffectSpec) override;
	virtual void HandleDamageReceived_Implementation(const FDamageEntry& DamageEntry) override;
	virtual void EnableRagdollPhysics_Implementation() override;
	virtual void StartDying_Implementation() override;
	virtual void FinishDying_Implementation() override;
	virtual void BindToStaggerStateChangedDelegate_Implementation(const FStaggeredStateChangedDelegate& Delegate) override;	
	virtual void BindToDamageReceivedDelegate_Implementation(const FDamageReceivedDelegate& Delegate) override;
	virtual void BindToOwnerDiedDelegate_Implementation(const FOwnerDiedDelegate& Delegate) override;
	virtual void BindToOwnerFinishedDyingDelegate_Implementation(const FOwnerDiedDelegate& Delegate) override;
	virtual void UnbindFromStaggerStateChangedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromDamageReceivedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromOwnerDiedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromOwnerFinishedDyingDelegate_Implementation(const UObject* Source) override;
	// -- End Damage Manager implementation

	/**
	 * Provides the Combo Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Combo Manager using the Combat Interface on the owner,
	 * if no component is returned, then one will be created, registered and returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheComboManager();

	/**
	 * Provides the Damage Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Damage Manager using the Combat Interface on the owner.
	 * If no component is returned, the Combat Manager - which a valid substitution, is returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheDamageManager();

	/**
	 * Provides the Defense Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Defense Manager using the Combat Interface on the owner.
	 * If no component is returned, the Combat Manager - which a valid substitution, is returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheDefenseManager();

	/**
	 * Provides the Dissolve Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Dissolve Manager using the Combat Interface on the owner,
	 * if no component is returned, then one will be created, registered and returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheDissolveManager();
	
	/**
	 * Provides the Motion Warping component assigned to the owner.
	 *
	 * First, attempts to retrieve the Motion Warping component using the Combat Interface on the owner,
	 * if no component is returned, then one will be created, registered and returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheMotionWarping();

	/**
	 * Provides the Target Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Target Manager using the Combat Interface on the owner.
	 * If no component is returned, the Combat Manager - which a valid substitution, is returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheTargetManager();

	/**
	 * Provides the Physical Animation component assigned to the owner.
	 *
	 * First, attempts to retrieve the Physical Animation component using the Combat Interface on the owner,
	 * if no component is returned, then one will be created, registered and returned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCachePhysicalAnimation();
	
	/**
	 * Provides the Weapon Manager assigned to the owner.
	 *
	 * First, attempts to retrieve the Weapon Warping component using the Combat Interface on the owner,
	 * if no component is returned, then one will be created, registered and returned.
	 *
	 * The default Weapon Manager does not have much value when empty, so it's unlikely that a project
	 * would allow the Combat Manager to create one automatically.
	 *
	 * However, if you are using something like the Inventory System, then you could override the Factory
	 * Function to generate the correct Equipment Weapon Manager by default.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	UActorComponent* GetAndCacheWeaponManager();

	/**
	 * Registers a new Melee Scan request and dispatches the proper client and authoritative parts.
	 *
	 * @param MeleeScan		Transfer Object containing the details for the Melee Scan.
	 * @return				An identifier for the Melee Scan Request.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	int32 RegisterMeleeScanRequest(const UNinjaCombatMeleeScan* MeleeScan);

	/**
	 * Cancels an active Melee Scan and dispatches the proper client and authoritative parts.
	 *
	 * @param RequestId
	 *		Melee Scan Request Identifier, provided by "RegisterMeleeScanRequest".
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	void CancelMeleeScanRequest(int32 RequestId);

	/**
	 * Requests a broadcast regarding an attack that is starting.
	 *
	 * @param AbilityTags
	 *		Gameplay Tags that can identify the attack (a Gameplay Ability).
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	void BroadcastAttack(FGameplayTagContainer AbilityTags);
	
	/**
	 * Tries to enable the Ragdoll Physics, based on the settings for the owner.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Manager")
	virtual void TryEnableRagdollPhysics();
	
	/**
	 * Handles The Hit Gameplay Cue defined by the "GameplayCue.Combat.MeleeTrails" Tag.
	 * Routing to this method happens through the Gameplay Cue Interface.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat", DisplayName = "Handle Melee Trails Gameplay Cue")
	void GameplayCue_Combat_MeleeTrails(EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
	
	/**
	 * Handles The Hit Gameplay Cue defined by the "GameplayCue.Combat.Hit" Tag.
	 * Routing to this method happens through the Gameplay Cue Interface.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat", DisplayName = "Handle Hit Gameplay Cue")
	void GameplayCue_Combat_Hit(EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);

	/**
	 * Handles The Hit Gameplay Cue defined by the "GameplayCue.Combat.Death" Tag.
	 * Routing to this method happens through the Gameplay Cue Interface.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat", DisplayName = "Handle Death Gameplay Cue")
	void GameplayCue_Combat_Death(EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);	
	
protected:

	/** Indicates the owner is in the last stage of the death flow. */
	bool bFinishDyingStarted;
	
	/** Broadcasts a change in the combat target. */
	UPROPERTY(BlueprintAssignable)
	FCombatTargetChangedMCDelegate OnCombatTargetChanged;

	/** Broadcasts a change in the Stagger state. */
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FStaggeredStateChangedMCDelegate OnStaggerStateChanged;
	
	/**
	 * Broadcasts information about damage applied to the owner.
	 * 
	 * The Struct has a dedicated native breaker that should be transparent for Blueprints but C++ users
	 * can also benefit from it. It's available in as UNinjaCombatFunctionLibrary::BreakDamageStruct. 
	 */
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FDamageReceivedMCDelegate OnDamageReceived;

	/** Broadcasts a change in the current Dead State of the owning character. */
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FOwnerDiedMCDelegate OnOwnerStartedDying;

	/** Broadcasts the end of the death cycle. */
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FOwnerDiedMCDelegate OnOwnerFinishedDying;
	
	/** Broadcasts information about the blocking state. */
	UPROPERTY(BlueprintAssignable, Category = "Defense")
	FBlockingStateChangedMCDelegate OnBlockingStateChanged;

	/** Broadcasts information about the invulnerability state. */
	UPROPERTY(BlueprintAssignable, Category = "Defense")
	FInvulnerabilityStateChangedMCDelegate OnInvulnerabilityStateChanged;

	/** If set to true, rotates the Controller to always look at the locked target. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager")
	bool bRotateControllerToTarget;

	/** Determines if the pitch should be locked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager", meta = (EditCondition = "bRotateControllerToTarget"))
	bool bLockControllerPitch;

	/** Determines if the yaw should be locked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager", meta = (EditCondition = "bRotateControllerToTarget"))
	bool bLockControllerYaw;
	
	/** How fast we should interpolate between the current rotation and the look at rotation. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager", meta = (EditCondition = "bRotateControllerToTarget"))
	float RotationInterpSpeed;
	
	/**
	 * If set to true, allows locally controlled clients to predict targets, before replication from server.
	 * This will provide an immediate targeting reaction to local player, at the expense of trusting it.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager")
	bool bCanPredictTarget;

	/** The Target Lock actor that will be used in the local player, when locked to a target. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Target Manager")
	TSubclassOf<ANinjaCombatMarkerActor> TargetMarkerActorClass;

	/** List of gameplay tags representing damage that cannot be blocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Defense Manager")
	FGameplayTagContainer UnblockableDamageTags;
	
	/** Applies the effects of a Last Stand. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Defense Manager", NoClear)
	TSubclassOf<UGameplayEffect> LastStandEffectClass;
	
	/** All handlers available to this damage manager. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Damage Manager")
	TObjectPtr<UNinjaCombatDamageDataAsset> DamageData;

	/**
	 * Determines if the Skeletal Mesh should pause animation processing.
	 * 
	 * This can be useful to keep the character from standing up after finishing a death montage,
	 * especially during Opportunity Attacks, when the victim is "forced" to leave the scene, and
	 * even a looping montage section will be interrupted.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat|Damage Manager")
	bool bShouldPauseAnimations;
	
	/**
	 * Reacts to a change in any of the tracked Gameplay Tags.
	 */
	virtual void HandleTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	
	/**
	 * Attaches the Target Lock Actor to the current target, creating the new instance if needed.
	 */
	virtual void AttachTargetLockActor();

	/**
	 * Reacts to the current target being destroyed.
	 */
	UFUNCTION()
	virtual void HandleCombatTargetDestroyed(AActor* DestroyedActor);

	/**
	 * Reacts to the current target dying.
	 */	
	UFUNCTION()
	virtual void HandleCombatTargetDeath(AActor* Actor);

	/**
	 * Detaches the Target Lock Actor from the current target.
	 */
	virtual void DetachTargetLockActor();

	/**
	 * Creates a Target Lock Actor using the Class configured for this component.
	 */
	ANinjaCombatMarkerActor* CreateTargetLockActor() const;

	/**
	 * Allows an external aspect such as the Game Mode or Game State to modify the damage.
	 * This is done by invoking the ICombatDamageModifierInterface.
	 */
	virtual void ModifyIncomingDamage(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;

	/**
	 * Applies the Block Mitigation and store the results.
	 */
	virtual void ApplyBlockMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;

	/**
	 * Applies the Defense Mitigation and store the results.
	 */
	virtual void ApplyDefenseMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;

	/**
	 * Applies the passive Armor Mitigation and store the results.
	 */
	virtual void ApplyArmorMitigation(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;

	/**
	 * In case of Fatal Damage, evaluates if the character can be saved.
	 * You can also modify any other values as needed, such as setting health to "1", or reverting the "fatal" flag.
	 */
	virtual void ApplyLastStand(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;
	
	/**
	 * Executes all damage handlers assigned to this manager.
	 */
	void ExecuteDamageHandlers(const FGameplayCueParameters& Parameters);
	
	/**
	 * Triggers the Gameplay Event notifying the damage.
	 */
	virtual void BroadcastDamageGameplayEvent(const FDamageEntry& DamageEntry);

	/**
	 * Triggers the Damage Event for the Perception System, if needed.
	 */
	virtual void BroadcastDamagePerceptionEvent(const FDamageEntry& DamageEntry);
	
	/**
	 * Plays a Gameplay Cue related to a damage event.
	 */
	virtual void PlayDamageGameplayCue(const FDamageEntry& DamageEntry);

	/**
	 * Creates a forward reference that can be used by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	USceneComponent* CreateForwardReference() const;

	/**
	 * Creates the Combo Manager component used by the Combat System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateComboManagerComponent() const;

	/**
	 * Creates the Damage Manager component used by the Combat System.
	 * By default, the Damage Manager component is a pointer to the Combat Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateDamageManagerComponent() const;

	/**
	 * Creates the Defense Manager component used by the Combat System.
	 * By default, the Defense Manager component is a pointer to the Combat Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateDefenseManagerComponent() const;
	
	/**
	 * Creates the Dissolve Manager component used by the Combat System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateDissolveManagerComponent() const;
	
	/**
	 * Creates the Motion Warping component used by the Combat System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateMotionWarpingComponent() const;

	/**
	 * Creates the Physical Animation component used by the Combat System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreatePhysicalAnimationComponent() const;

	/**
	 * Creates the Target Manager component used by the Combat System.
	 * By default, the Target Manager component is a pointer to the Combat Manager.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateTargetManagerComponent() const;
	
	/**
	 * Creates the Weapon Manager component used by the Combat System.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	UActorComponent* CreateWeaponManagerComponent() const;

	/**
	 * Helper function to create a component for this component's owner.
	 */
	virtual UActorComponent* CreateComponent(const TSubclassOf<UActorComponent>& ComponentClass) const;
	
	/**
	 * Retrieves the Block Angle used by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")	
	float GetBlockAngle() const;

	/**
	 * Checks if this component should rotate to target, which also determines if it should tick.
	 */
	virtual bool ShouldRotateToTarget() const;
	
	/**
	 * Rotates the owner to face its current target.
	 * A proxy to "RotateControllerToTarget", used to prepare the required data.
	 */
	void RotateToTarget(float DeltaTime);
	
	/**
	 * Rotates the Controller assigned to the owner to the current Combat Target.
	 *
	 * @param Controller		Controller to rotate.
	 * @param CurrentTarget		Target to rotate the controller.
	 * @param DeltaTime			Interval to calculate the rotation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat")
	void RotateControllerToTarget(AController* Controller, const AActor* CurrentTarget, float DeltaTime);
	
	/**
	 * Timer wrapper for the interface call.
	 */
	UFUNCTION()
	void FinishDyingWrapper();
	
	/**
	 * Safely destroys the owner by ensuring no active abilities still remain.
	 * Will postpone the destruction to the next tick if needed, until abilities are finished.
	 */
	UFUNCTION()
	virtual void SafelyDestroyOwner();

	/**
	 * Reacts to the replication of a combat target.
	 *
	 * It should ensure that the local version is different, before triggering any broadcasts, since
	 * the Target Management allows prediction of the local target, for reactive inputs.
	 */
	UFUNCTION()
	virtual void OnRep_CombatTarget(AActor* OldCombatTarget);

	/** Reacts to the replication of the "Blocking" property. */
	UFUNCTION()
	virtual void OnRep_IsBlocking(bool bWasBlocking);

	/** Reacts to the replication of the "Invulnerable" property. */
	UFUNCTION()
	virtual void OnRep_IsInvulnerable(bool bWasInvulnerable);
	
	/** Reacts to the replication of the "Staggered" property. */
	UFUNCTION()
	virtual void OnRep_IsStaggered(bool bWasStaggered);
	
	/** Reacts to the replication of the "Dead" property. */
	UFUNCTION()
	virtual void OnRep_IsDead();

	/**
	 * Triggers an RPC to set a new Combat Target in the authority.
	 * 
	 * @param NewCombatTarget
	 *		New combat target to be set in the authority.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetCombatTarget(AActor* NewCombatTarget);
	
private:

	/** Delegate Handle for the Blocking Tag event listener. */
	FDelegateHandle BlockingTagHandle;

	/** Delegate Handle for the Invulnerability Tag event listener. */
	FDelegateHandle InvulnerabilityTagHandle;
	
	/** Delegate Handle for the Staggered Tag event listener. */
	FDelegateHandle StaggeredTagHandle;
	
	/** Delegate Handle for the Death Tag event listener. */
	FDelegateHandle DeathTagHandle;

	/** Handle used to set a timer for the actual "Finish Dying". */
	FTimerHandle DeathTimerHandle;
	
	/** Current combat target, replicated across all actors. */
	UPROPERTY(ReplicatedUsing = OnRep_CombatTarget)
	TObjectPtr<AActor> CombatTarget;

	/** Informs if the owning actor is blocking. */
	UPROPERTY(ReplicatedUsing = OnRep_IsBlocking)
	uint8 bIsBlocking:1;

	/** Informs if the owning actor is invulnerable. */
	UPROPERTY(ReplicatedUsing = OnRep_IsInvulnerable)
	uint8 bIsInvulnerable:1;
	
	/** Informs if the owning actor is staggered. */
	UPROPERTY(ReplicatedUsing = OnRep_IsStaggered)
	uint8 bIsStaggered:1;
	
	/** Informs if the owning actor has died. */
	UPROPERTY(ReplicatedUsing = OnRep_IsDead)
	uint8 bIsDead:1;

	/** Cache to the Forward Reference used by combat abilities. */
	UPROPERTY()
	TObjectPtr<USceneComponent> CachedForwardReference;

	/** Cached Combo Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedComboManager;

	/** Cached Damage Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedDamageManager;

	/** Cached Defense Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedDefenseManager;

	/** Cached Dissolve Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedDissolveManager;
	
	/** Cached Motion Warping Component assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedMotionWarping;

	/** Cached Physical Animation component assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedPhysicalAnimation;
	
	/** Cached Target Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedTargetManager;

	/** Cached Target Manager assigned to this component. */
	UPROPERTY()
	TObjectPtr<UActorComponent> CachedWeaponManager;
	
	/** Target Lock actor maintained by this component. */
	UPROPERTY()
	TObjectPtr<ANinjaCombatMarkerActor> TargetLockActor;

	/** All Melee Scans being tracked by this combat manager. */
	UPROPERTY()
	TMap<int32, TObjectPtr<const UNinjaCombatMeleeScan>> MeleeScanMap;

	/** All timer handles for ongoing scans. */
	TMap<int32, FTimerHandle> MeleeScanTimerHandles; 
	
	/** List of recent damage received by this component. */
	UPROPERTY(Replicated)
	FDamageList DamageTakenList;
	
};
