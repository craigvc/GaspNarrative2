// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaCombatActorPoolFunctionLibrary.generated.h"

class AActor;
class UNinjaCombatActorPoolComponent;

/**
 * Support functions the Combat Actor Pool.
 */
UCLASS()
class NINJACOMBATACTORPOOL_API UNinjaCombatActorPoolFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/**
	 * Retrieves a Combat Actor Pool from a given owner, via the interface.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Pool")
	static UNinjaCombatActorPoolComponent* GetCombatActorPool(const AActor* PoolOwner);
	
	/**
	 * Tries to retrieve a poolable actor from a pool owner.
	 *
	 * @param PoolOwner				Owner of the pool, implementing the Combat Projectile Interface.
	 * @param PoolableActorClass	Class of the poolable actor to be retrieved.
	 * @param bActivate				If true the actor is immediately activated. Otherwise, it is only reserved.
	 * @return						The pooled actor, ready to use.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Pool")
	static AActor* TryGetActorFromPool(const AActor* PoolOwner, TSubclassOf<AActor> PoolableActorClass, bool bActivate = true);
	
};
