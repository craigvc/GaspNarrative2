// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "Templates/SubclassOf.h"
#include "NinjaCombatWeaponCosmeticsComponent.generated.h"

class UAudioComponent;
class UCameraShakeBase;
class UNiagaraComponent;
class UNiagaraSystem;

/**
 * Input data for the trails used during a melee scan.
 */
USTRUCT(BlueprintType)
struct FCombatMeleeTrailsCosmetics
{
	
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<const AActor> Source = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FGameplayTagContainer SourceTags = FGameplayTagContainer::EmptyContainer;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FGameplayTagContainer TargetTags = FGameplayTagContainer::EmptyContainer;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FName TrailSocketPrefix = TEXT("sScan");
	
	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FName TrailBeginParameterName = TEXT("StartTrail");

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FName TrailEndParameterName = TEXT("EndTrail");

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TArray<TObjectPtr<UNiagaraComponent>> NiagaraComponents;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<UAudioComponent> AudioComponent;
	
};

/**
 * Input data for the component when handling impacts.
 */
USTRUCT(BlueprintType)
struct FCombatImpactCosmetics
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<const AActor> Source = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<const APawn> Instigator = nullptr;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FHitResult HitResult = FHitResult();

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FGameplayTagContainer SourceTags = FGameplayTagContainer::EmptyContainer;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	FGameplayTagContainer TargetTags = FGameplayTagContainer::EmptyContainer;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TSoftObjectPtr<UNiagaraSystem> ImpactParticles;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TSoftObjectPtr<USoundBase> Sound;

	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TSoftClassPtr<UCameraShakeBase> CameraShake;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<UNiagaraComponent> NiagaraComponent;
	
	UPROPERTY(BlueprintReadOnly, Category = "Cosmetics Parameter")
	TObjectPtr<UAudioComponent> AudioComponent;
	
};

/**
 * Utility component that will handle cosmetics and can be reused by all participants.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatCosmeticsComponent : public UActorComponent
{
	
	GENERATED_BODY()

public:

	UNinjaCombatCosmeticsComponent();

	// -- Begin Actor Component implementation
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// -- End Actor Component implementation
	
	/**
	 * Activates Melee Scan cosmetics - Particles and Sounds, based on the parameters.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Combat|Cosmetics")
	virtual void StartMeleeScanCosmetics(const FCombatMeleeTrailsCosmetics& Parameters);

	/**
	 * Deactivates ongoing Melee Scan cosmetics.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Combat|Cosmetics")
	virtual void StopMeleeScanCosmetics(bool bImmediately = false);
	
	/**
	 * Handles cosmetics represented by soft pointers.
	 *
	 * It follows the signature for both Melee and Projectile impacts, so it can be used in
	 * any situation where VFX or SFX must be played to represent a hit.
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Ninja Combat|Cosmetics")
	virtual void HandleImpactDamageCosmetics(const FCombatImpactCosmetics& Parameters);

protected:

	/** Prefix used to collect the sockets in the mesh for trail positions. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Cosmetics")
	FName TrailSocketPrefix = TEXT("sScan");
	
	/** Parameter in the VFX for the trail start position. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Cosmetics")
	FName TrailBeginParameterName = TEXT("StartTrail");

	/** Parameter in the VFX for the trail end position. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon Cosmetics")
	FName TrailEndParameterName = TEXT("EndTrail");

	/** Mesh used to update the scan trails. */
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Cosmetics")
	TObjectPtr<UMeshComponent> ScanSourceMesh;
	
	/** Melee Trail Components that will be updated during the scan cosmetics. */
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Cosmetics")
	TArray<TObjectPtr<UNiagaraComponent>> MeleeTrailComponents;

	/**
	 * Finds the mesh that should be used for melee scans.
	 */
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Ninja Combat|Cosmetics")
	virtual UMeshComponent* FindScanSourceMesh(const AActor* Source) const;
	
	/**
	 * Updates all san trails managed by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void UpdateMeleeScanTrails();
	
	/**
	 * Handles particles for the impact, once it has been loaded.
	 */	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void HandleImpactParticles(UNiagaraSystem* Particles, const FCombatImpactCosmetics& Parameters) const;

	/**
	 * Handles the sound for the impact, once it has been loaded.
	 */	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void HandleImpactSound(USoundBase* Sound, const FCombatImpactCosmetics& Parameters) const;

	/**
	 * Handles the camera shake, once it has been loaded.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void HandleImpactCameraShake(TSubclassOf<UCameraShakeBase> CameraShakeClass, const FCombatImpactCosmetics& Parameters) const;
	
	/**
	 * Allows further modification of the Niagara Component for the Melee Hit.
	 * This happens on top of the default parameters being set, and before the system activates.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void ModifyImpactParticleComponent(UNiagaraComponent* NiagaraComponent, const FCombatImpactCosmetics& Parameters) const;

	/**
	 * Allows further modification of the Audio Component for the impact.
	 * This happens on top of the default parameters being set, and before the sound plays.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	void ModifyImpactAudioComponent(UAudioComponent* AudioComponent, const FCombatImpactCosmetics& Parameters) const;

	/**
	 * Determines the scale for the Camera Shake.
	 * It can use tags to determine if the shake should be attenuated or boosted.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "Cosmetics")
	float GetImpactCameraShakeScale(const FCombatImpactCosmetics& Parameters) const;
	
};
