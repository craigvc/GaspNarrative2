// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameFramework/NinjaCombatPoolableActor.h"
#include "Interfaces/CombatProjectileInterface.h"
#include "Types/FDamageEntry.h"
#include "Types/TargetingSystemTypes.h"
#include "NinjaCombatProjectileActor.generated.h"

class UAudioComponent;
class UNiagaraSystem;
class UProjectileMovementComponent;
class USphereComponent;
class USoundBase;
class UTargetingPreset;
class UNinjaCombatCosmeticsComponent;

/** How the projectile will be aimed for first launch. */
UENUM(BlueprintType)
enum class EProjectileAimingMode : uint8
{
	Forward,
	TargetingSystem,
	Location
};

/**
 * Base implementation of a projectile.
 */
UCLASS(Abstract)
class NINJACOMBAT_API ANinjaCombatProjectileActor : public ANinjaCombatPoolableActor, public ICombatProjectileInterface
{
	
	GENERATED_BODY()

public:

	ANinjaCombatProjectileActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Actor implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	// -- End Actor implementation

	// -- Begin Projectile implementation
	virtual TSubclassOf<UGameplayEffect> GetImpactEffectClass_Implementation() const override;
	virtual TArray<AActor*> GetActorsHit_Implementation() const override;
	virtual bool GetDamage_Implementation(float& OutDamage) const override;
	virtual bool GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const override;
	virtual float GetSpeed_Implementation() const override;
	virtual float GetProjectileImpactStrength_Implementation() const override;
	virtual void SetImpactEffectHandle_Implementation(FGameplayEffectSpecHandle& Handle) override;
	virtual void PrepareLaunch_Implementation() override;
	virtual void Launch_Implementation() override;
	virtual void HandleImpactCosmetics_Implementation(const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const override;
	virtual void HandleDestructionCosmetics_Implementation() const override;
	// -- End Projectile implementation

	/**
	 * Provides the Capsule Component that's the main projectile collision.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Combat Projectile")
	FORCEINLINE USphereComponent* GetCapsuleComponent() const { return SphereComponent; }

	/**
	 * Provides the Projectile Movement Component.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Combat Projectile")
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }	
	
	/**
	 * Provides the amount of bounces that happened in this projectile.
	 * Bounciness must be enabled for this to be counted.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Combat Projectile")
	FORCEINLINE int32 GetBounceCount() const { return BounceCount; }

	/**
	 * Launches the projectile forward, considering the Initial Rotation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void LaunchForward();

	/**
	 * Launches towards the target.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void LaunchToTarget(const AActor* Target);

	/**
	 * Launches towards the location.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void LaunchToLocation(FVector Location);

	/**
	 * Retrieves the Initial Location set to this project.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Combat Projectile")
	FVector GetInitialLocation() const { return InitialLocation; }
	
	/**
	 * Sets the initial location for the projectile.
	 * 
	 * Has to be called if the projectile aiming mode is set to "Location". This should always
	 * be updated before launching the projectile, most likely by a Gameplay Ability or by a
	 * projectile superclass implementing the "Before Launch" event.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Combat Projectile")
	void SetInitialLocation(FVector NewInitialLocation);
	
protected:

	/** Aiming mode for the projectile. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	EProjectileAimingMode AimingMode;
	
	/** Impact Strength for physical animations. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	float ImpactStrength;
	
	/** Maximum bounces the projectile can do. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	int32 MaxBounces;

	/** Impact effect used by this projectile. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	TSubclassOf<UGameplayEffect> ImpactEffectClass;

	/** Informs if this instance overrides the melee damage. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Projectile", meta = (InlineEditConditionToggle))
	bool bOverridesProjectileDamage;

	/**
	 * Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.
	 *
	 * The amount of damage applied by the Gameplay Effect can be defined by a backing attribute,
	 * such as the "Base Damage", but depending on the game design, it could also be defined
	 * by the projectile itself, using this property.
	 *
	 * In that case, the damage is set to the Gameplay Effect, via a "Set By Caller Magnitude".
	 * For that, the gameplay effect must be prepared with the "Combat.Data.Damage" data name.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Projectile", meta = (EditCondition = "bOverridesProjectileDamage"))
	float ProjectileDamage;

	/** Informs if this instance overrides the poison consumption. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Projectile", meta = (InlineEditConditionToggle))
	bool bOverridesPoisonConsumption;

	/**
	 * Sets the Projectile Damage in the Damage Gameplay Effect used by this actor.
	 *
	 * The amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,
	 * such as the "Poise Consumption", but depending on the game design, it could also be defined
	 * by the projectile itself, using this property.
	 *
	 * In that case, the damage is set to the Gameplay Effect, via a "Set By Caller Magnitude".
	 * For that, the gameplay effect must be prepared with the "Combat.Data.PoiseConsumption" data name.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Projectile", meta = (EditCondition = "bOverridesPoisonConsumption"))
	float PoiseConsumption;
	
	/** Particle Effect played when the projectile hits something. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	TSoftObjectPtr<UNiagaraSystem> ImpactFX;

	/** Particle Effect played when the projectile is being destroyed. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	TSoftObjectPtr<UNiagaraSystem> DestructionFX;
	
	/** Sound Effect played when the projectile hits something. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	TSoftObjectPtr<USoundBase> ImpactSound;

	/**
	 * Trace Channel used for Projectile Traces.
	 * It's recommended to create a dedicated Channel for Projectile Traces.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	TEnumAsByte<ECollisionChannel> TraceChannel;

	/** If set to true, it will use the targeting system to collect targets for launch and bounces. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile")
	bool bUsesTargetingSystem;
	
	/** Defines if the targeting will execute asynchronously. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile", meta = (EditCondition = "AimingMode == EProjectileAimingMode::TargetingSystem", EditConditionHides))
	bool bExecuteAsync;
	
	/**
	 * The Targeting Preset used to collect a target and every other target after a bounce.
	 * Can be left empty, in which case the projectile will simply follow the initial trajectory.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat Projectile", meta = (EditCondition = "AimingMode == EProjectileAimingMode::TargetingSystem", EditConditionHides))
	TObjectPtr<UTargetingPreset> TargetingPreset;

	/**
	 * Determines if the Debug Mode is activated for this projectile.
	 * This will display trace adjustments and impacts.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Projectile")
	bool bEnableDebug;

	/**
	 * Calculates the Initial Rotation for a forward-orienting projectile.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	FRotator GetInitialRotation() const;

	/**
	 * Configures actors that should be ignored by this projectile.
	 * By default, the projectile ignores the instigator and vice versa.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void SetupIgnoredActors();
	
	/**
	 * Adjusts a Hit Result in case you need to trace from an impact on the Capsule to one on the Mesh.
	 *
	 * @param ImpactResult		The Impact Result from a collision. 
	 * @param AdjustedResult	The Adjusted Result used in the Gameplay Effect Context.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void AdjustHitResult(const FHitResult& ImpactResult, FHitResult& AdjustedResult);
	
	/**
	 * Handles a collision with an actor.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void HandleActorHit(const FHitResult& ImpactResult);
	
	/**
	 * Handles the projectile in the end of its lifecycle.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	void HandleProjectileExhausted();

	/**
	 * Applies the Data to a Target Ability System Component.
	 *
	 * @param TargetData
	 *		Target Data for targets and the new Effect Context.
	 */
	virtual void ApplyGameplayEffectToData(const FGameplayAbilityTargetDataHandle& TargetData); 

	/**
	 * Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Projectile")
	FGameplayTagContainer GetDynamicGameplayTags() const;
	
	/**
	 * Allows the caller to set any additional magnitudes, based on any applicable rule.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Projectile")
	TMap<FGameplayTag, float> GetAdditionalSetByCallerMagnitudes() const;
	
	UFUNCTION()
	void OnImpactHitAudioFinished();
	
	/**
	 * Activates all niagara components assigned to this projectile.
	 * By default, skips activation on a Dedicated Server.
	 */
	virtual void ActivateNiagaraComponents();

	/**
	 * Deactivates all niagara components assigned to this projectile.
	 * By default, skips deactivation on a Dedicated Server.
	 */
	virtual void DeactivateNiagaraComponents();
	
	/**
	 * Handles a target that has been collected by the targeting system.
	 */  
	virtual void HandleTargetReceived(const FTargetingRequestHandle& TargetingHandle);

	/**
	 * Plays a Niagara System, from a loaded Soft Object Pointer. 
	 */
	static void PlayNiagaraSystem(const UWorld* World, UNiagaraSystem* System,
		const FVector& Location, const FRotator& Rotation);

	/**
	 * Plays a Sound Asset, from a loaded Soft Object Pointer. 
	 */	
	static void PlaySound(const UWorld* World, USoundBase* Sound, const FVector& Location,
		const FRotator& Rotation);

	virtual void OnActivation_Implementation() override;
	virtual void OnDeactivation_Implementation() override;

	UFUNCTION()
	virtual void OnRep_LaunchVelocity();

	/**
	 * Selects the Hit Impact Particles, compatible with the provided criteria.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	TSoftObjectPtr<UNiagaraSystem> SelectHitImpactParticles(const FHitResult& HitResult,
		const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	/**
	 * Selects the Hit Impact Sound, compatible with the provided criteria.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Projectile")
	TSoftObjectPtr<USoundBase> SelectHitImpactSound(const FHitResult& HitResult,
		const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

private:

	/** Checks if this projectile has been exhausted. */
	bool bHasExhausted;

	/** Target we are chasing after. */
	int32 TargetIndex;
	
	/** Current amount of bounces that happened. */
	int32 BounceCount;

	UPROPERTY(ReplicatedUsing = OnRep_LaunchVelocity)
	FVector LaunchVelocity;

	/** Velocity from last bounce, if any. */
	FVector LastBounceVelocity;

	/** Initial Location set, based on aiming strategy. */
	FVector InitialLocation;
	
	/** Handle to be used when the projectile hits. */
	FGameplayEffectSpecHandle ImpactEffectHandle;
	
	/** Sphere component used as root for the projectile. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<USphereComponent> SphereComponent;
	
	/** Movement Component for projectiles. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	/** Dedicated cosmetic handling, integrated with the Asset Manager. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UNinjaCombatCosmeticsComponent> ImpactCosmetics;
	
	/** Audio component used to play melee hit impact sounds. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UAudioComponent> MeleeImpactHitAudio;
	
	UPROPERTY()
	TObjectPtr<AActor> CurrentTarget;
	
	/** List of all actors that were hit by this projectile. */
	UPROPERTY()
	TArray<TWeakObjectPtr<AActor>> ActorsHit;

	/** Requests a sync/async targeting. */
	void ExecuteTargeting();
	
	/** Hidden handler to ensure internal logic is correct. */
	UFUNCTION()
	void OnProjectileStop(const FHitResult& ImpactResult);
	
	/** Hidden handler to ensure internal logic is correct. */
	UFUNCTION()
	void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	// -- Start Debug Helpers
	void PrintMessage(const FString& Message) const;
	void DrawScanLine(const FHitResult& NewHit) const;
	void DrawNewTarget(const FHitResult& NewHit, const FColor& Color) const;
	// -- End Debug Helpers
	
};
