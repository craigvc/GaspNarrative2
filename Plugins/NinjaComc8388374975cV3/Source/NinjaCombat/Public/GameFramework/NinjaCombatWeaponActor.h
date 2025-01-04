// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/CombatMeleeInterface.h"
#include "Interfaces/CombatProjectileProviderInterface.h"
#include "Interfaces/CombatRangedInterface.h"
#include "Interfaces/CombatWeaponInterface.h"
#include "NinjaCombatWeaponActor.generated.h"

class UAudioComponent;
class UCameraShakeBase;
class UGameplayEffect;
class UMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USoundBase;
class UNinjaCombatCosmeticsComponent;

/**
 * Base implementation for a Weapon.
 */
UCLASS(Abstract)
class NINJACOMBAT_API ANinjaCombatWeaponActor : public AActor, public ICombatWeaponInterface,
	public ICombatMeleeInterface, public ICombatRangedInterface, public ICombatProjectileProviderInterface
{
	
	GENERATED_BODY()

public:

	/** Name used for weapon cosmetics. */
	static FName WeaponCosmeticsName;
	
	ANinjaCombatWeaponActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Actor implementation
	
	// -- Begin Weapon implementation
	virtual AActor* GetWeaponOwner_Implementation() const override;
	virtual FGameplayTagContainer GetWeaponTags_Implementation() const override;
	// -- End Weapon implementation

	// -- Begin Melee interface
	virtual UMeshComponent* GetMeleeMesh_Implementation() const override;
	virtual TSubclassOf<UGameplayEffect> GetHitEffectClass_Implementation() const override;
	virtual TArray<UNiagaraComponent*> GetAttackTrails_Implementation() const override;
	virtual bool GetDamage_Implementation(float& OutDamage) const override;
	virtual bool GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const override;
	virtual float GetHitEffectLevel_Implementation() const override;
	virtual void StartMeleeTrailsCosmetics_Implementation(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) override;
	virtual void StopMeleeTrailsCosmetics_Implementation(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) override;
	virtual void HandleMeleeDamageCosmetics_Implementation(const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const override;
	// -- End Melee interface
	
	// -- Begin Ranged interface
	virtual UMeshComponent* GetProjectileSourceMesh_Implementation(FName SocketName) const override;
	virtual bool GetProjectileClass_Implementation(TSubclassOf<AActor>& OutProjectileClass) const override;
	// -- End Ranged interface

protected:

	/** Mesh used for melee scans. */
	UPROPERTY()
	TObjectPtr<UMeshComponent> MeleeScanMesh;

	/** Mesh used to launch projectiles from. */
	UPROPERTY()
	TObjectPtr<UMeshComponent> ProjectileSourceMesh;
	
	/** Tags used to identify this weapon. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", Replicated)
	FGameplayTagContainer WeaponTags;

	/** Gameplay Effect applied on Melee Hits. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	TSubclassOf<UGameplayEffect> MeleeHitEffectClass;

	/** Level to apply the Melee Hit Gameplay Effect. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	float MeleeHitEffectLevel;

	/** Informs if this instance overrides the melee damage. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee", meta = (InlineEditConditionToggle))
	bool bOverridesMeleeDamage;

	/**
	 * Sets the Melee Damage in the Damage Gameplay Effect used by this weapon.
	 *
	 * The amount of damage applied by the Gameplay Effect can be defined by a backing attribute,
	 * such as the "Base Damage", but depending on the game design, it could also be defined
	 * by the weapon itself, using this property.
	 *
	 * In that case, the damage is set to the Gameplay Effect, via a "Set By Caller Magnitude".
	 * For that, the gameplay effect must be prepared with the "Combat.Data.Damage" data name.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee", meta = (EditCondition = "bOverridesMeleeDamage"))
	float MeleeDamage;

	/** Informs if this instance overrides the poison consumption. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee", meta = (InlineEditConditionToggle))
	bool bOverridesPoisonConsumption;

	/**
	 * Sets the Poison Consumption in the Damage Gameplay Effect used by this weapon.
	 *
	 * The amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,
	 * such as the "Poise Consumption", but depending on the game design, it could also be defined
	 * by the weapon itself, using this property.
	 *
	 * In that case, the damage is set to the Gameplay Effect, via a "Set By Caller Magnitude".
	 * For that, the gameplay effect must be prepared with the "Combat.Data.PoiseConsumption" data name.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee", meta = (EditCondition = "bOverridesPoisonConsumption"))
	float PoiseConsumption;

	/** Niagara effect used when the weapon performs a melee hit. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	TSoftObjectPtr<UNiagaraSystem> MeleeImpactParticles;

	/** Sound asset used when the weapon performs a melee hit. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	TSoftObjectPtr<USoundBase> MeleeImpactSound;

	/** Camera shake used on impact. The Cue Magnitude is used as a scale modifier. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	TSoftClassPtr<UCameraShakeBase> MeleeImpactShake;
	
	/** An optional projectile class that can be assigned to this weapon. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Ranged", meta = (MustImplement = "/Script/NinjaCombat.CombatProjectileInterface"))
	TSubclassOf<AActor> ProjectileClass;

	/**
	 * Caches all melee trails available in this weapon, based on the tag.
	 */
	virtual TArray<UNiagaraComponent*> FindMeleeTrailsByComponentTag() const;

	/**
	 * Selects the Melee Impact Particles, compatible with the provided criteria.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon|Melee")
	TSoftObjectPtr<UNiagaraSystem> SelectMeleeImpactParticles(const FHitResult& HitResult,
		const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	/**
	 * Selects the Melee Impact Sound, compatible with the provided criteria.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon|Melee")
	TSoftObjectPtr<USoundBase> SelectMeleeImpactSound(const FHitResult& HitResult,
		const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;

	/**
	 * Selects the Melee Impact Camera Shake, compatible with the provided criteria.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon|Melee")
	TSoftClassPtr<UCameraShakeBase> SelectMeleeImpactCameraShake(const FHitResult& HitResult,
		const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;
	
private:

	/** A cache of all potential melee trails. */
	UPROPERTY()
	TArray<TObjectPtr<UNiagaraComponent>> MeleeTrailsCache;
	
	/** Dedicated cosmetic handling, integrated with the Asset Manager. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UNinjaCombatCosmeticsComponent> WeaponCosmetics;

	/** Particle component used to play melee trail cosmetics. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UNiagaraComponent> MeleeTrails;

	/** Audio component used to play melee attack sounds. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UAudioComponent> MeleeAttackAudio;
	
	/** Audio component used to play melee hit impact sounds. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UAudioComponent> MeleeImpactHitAudio;

	/** Function used to reset the audio component position to the original location. */
	UFUNCTION()
	void OnImpactHitAudioFinished();
	
};
