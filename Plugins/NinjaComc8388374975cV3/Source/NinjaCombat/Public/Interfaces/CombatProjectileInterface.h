// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "UObject/Interface.h"
#include "CombatProjectileInterface.generated.h"

class UGameplayEffect;

UINTERFACE(MinimalAPI)
class UCombatProjectileInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines basic methods for a projectile.
 */
class NINJACOMBAT_API ICombatProjectileInterface
{
	GENERATED_BODY()

public:

	/**
	 * Provides the speed for the projectile at any given moment.
	 * 
	 * This can be either the default speed set in the Projectile Movement (default speed) or any
	 * calculated value that may use the default one, or completely override it.
	 *
	 * By default, this also accounts for bounce speeds, if any bounce happened. In that case, the
	 * bounce speed is used, instead of the default projectile speed.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	float GetSpeed() const;

	/**
	 * Opportunity to prepare any initial data before the projectile is launched.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	void PrepareLaunch();
	
	/**
	 * Launches the projectile, using its internal setup.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	void Launch();

	/**
	 * Provides the Gameplay Effect applied when the projectile hits.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	TSubclassOf<UGameplayEffect> GetImpactEffectClass() const;
	virtual TSubclassOf<UGameplayEffect> GetImpactEffectClass_Implementation() const;
	
	/**
	 * Provides the Gameplay Effect level used when applying this interface's Effect Class.
	 * Returning zero or lower will nullify the outcome of this method.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	float GetImpactEffectLevel() const;
	virtual float GetImpactEffectLevel_Implementation() const;
	
	/**
	 * Sets a handle used by this projectile when it hits something.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	void SetImpactEffectHandle(FGameplayEffectSpecHandle& Handle);

	/**
	 * Allows a damage value to be optionally provided by a Projectile Implementation.
	 * If no damage value is to be provided, then this function will return false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	bool GetDamage(float& OutDamage) const;
	virtual bool GetDamage_Implementation(float& OutDamage) const;

	/**
	 * Allows a poise consumption value to be optionally provided by a Projectile Implementation.
	 * If no poise consumption value is to be provided, then this function will return false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	bool GetPoiseConsumption(float& OutPoiseConsumption) const;
	virtual bool GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const;
	
	/**
	 * Retrieves all targets hit by a projectile.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	TArray<AActor*> GetActorsHit() const;

	/**
	 * Provides the strength of the impact, for physical animations. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Interface")
	float GetProjectileImpactStrength() const;
	virtual float GetProjectileImpactStrength_Implementation() const;
	
	/**
	 * Handles an Impact from the projectile.
	 *
	 * @param HitResult		Information about the Hit that generated this impact.
	 * @param SourceTags	Aggregated tags from the source that applied the impact.
	 * @param TargetTags	Aggregated tags from the target that received the impact.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Projectile Interface")
	void HandleImpactCosmetics(const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const;
	virtual void HandleImpactCosmetics_Implementation(const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const { }

	/**
	 * Handles the destruction of a projectile, after the final impact.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic, Category = "Projectile Interface")
	void HandleDestructionCosmetics() const;
	virtual void HandleDestructionCosmetics_Implementation() const { }
	
};

