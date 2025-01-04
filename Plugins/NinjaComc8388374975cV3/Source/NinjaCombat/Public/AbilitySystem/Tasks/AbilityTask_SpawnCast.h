// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_SpawnCast.generated.h"

class UNinjaCombatCastRequest;

/**
 * Executes a cast.
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_SpawnCast : public UAbilityTask
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCastReady, const UNinjaCombatCastRequest*, Request, AActor*, CastActor);

	GENERATED_BODY()

public:

	/** Broadcasts when the cast actor is ready to be spawned. */
	UPROPERTY(BlueprintAssignable)
	FCastReady OnCastReady;

	/** Broadcasts when the cast actor has finished spawning. */
	UPROPERTY(BlueprintAssignable)
	FCastReady OnCastFinished;
	
	UAbilityTask_SpawnCast();

	// -- Begin Ability Task implementation
	virtual void Activate() override;
	virtual void BeginDestroy() override;
	// -- End Ability Task implementation

	/**
	 * Creates the appropriate Ability Task, based on the provided data.
	 */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|Tasks")
	static UAbilityTask_SpawnCast* CreateTask(UGameplayAbility* OwningAbility,
		UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatCastInterface")) TSubclassOf<AActor> CastActorClass,
		bool bEnableDebug = false);

	/**
	 * Adds a new Cast Request to this task.
	 * 
	 * @param Request
	 *		New request for a cast to be spawned.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Ability Tasks")
	void AddCastRequest(UNinjaCombatCastRequest* Request);
	
protected:

	/** Class that will be spawned. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Cast")
	TSubclassOf<AActor> CastClass;

	virtual void SpawnCastActor(UNinjaCombatCastRequest* Request);

	virtual void ActivateCastActor(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor);

	void BroadcastActorReady(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor) const;

	void BroadcastActorFinished(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor) const;
	
private:

	/** Sets this task to debug mode. */
	bool bEnableDebug;	

	/** All instances participating in this task. */
	UPROPERTY()
	TMap<TObjectPtr<const UObject>, TObjectPtr<UNinjaCombatCastRequest>> CastRequests;
	
};
