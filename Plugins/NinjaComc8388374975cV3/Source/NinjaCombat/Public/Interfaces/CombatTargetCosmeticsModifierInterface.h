// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatTargetCosmeticsModifierInterface.generated.h"

class UAudioComponent;
class UNiagaraComponent;

UINTERFACE(MinimalAPI)
class UCombatTargetCosmeticsModifierInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows a target to further modify cosmetics (audio and particles) from a hit.
 */
class NINJACOMBAT_API ICombatTargetCosmeticsModifierInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Invoked to modify a Sound Effect triggered from a hit.
	 *
	 * @param Audio			Sound to modify.
	 * @param HitResult		Information about the hit that generated this flow.
	 * @param SourceTags	Gameplay Tags representing the impact source.
	 * @param TargetTags	Gameplay Tags representing the impact target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Melee Interface")
	void ModifyAudioEffect(UAudioComponent* Audio, const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags);

	/**
	 * Invoked to modify a Sound Effect triggered from a hit.
	 *
	 * @param Particles		Particles to modify.
	 * @param HitResult		Information about the hit that generated this flow.
	 * @param SourceTags	Gameplay Tags representing the impact source.
	 * @param TargetTags	Gameplay Tags representing the impact target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Melee Interface")
	void ModifyParticleEffect(UNiagaraComponent* Particles, const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags);	
	
};