// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_SpawnProjectile.generated.h"

class UNinjaCombatProjectileRequest;

/**
 * Launches a projectile.
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_SpawnProjectile : public UAbilityTask
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileLaunch, const UNinjaCombatProjectileRequest*, Request, AActor*, Projectile);
	
	GENERATED_BODY()

public:

	/** Broadcasts each projectile launched. */
	UPROPERTY(BlueprintAssignable)
	FProjectileLaunch OnProjectileLaunched;

	UAbilityTask_SpawnProjectile();

	// -- Begin Ability Task implementation
	virtual void Activate() override;
	virtual void BeginDestroy() override;
	// -- End Ability Task implementation
	
	/**
	 * Creates the appropriate Ability Task, based on the provided data.
	 */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|Tasks")
	static UAbilityTask_SpawnProjectile* CreateTask(UGameplayAbility* OwningAbility, bool bEnableDebug = false);

	/**
	 * Adds a new Projectile Request to this task.
	 * 
	 * @param Request
	 *		New request for a projectile to be spawned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Ability Tasks")
	void AddProjectileRequest(const UNinjaCombatProjectileRequest* Request);

protected:

	/** Sets this task to debug mode. */
	bool bEnableDebug;

	/** All instances participating in this task. */
	UPROPERTY()
	TMap<TObjectPtr<const UObject>, TObjectPtr<UNinjaCombatProjectileRequest>> ProjectileRequests;
	
};
