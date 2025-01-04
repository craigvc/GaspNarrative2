// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FCombatPoolableActorInfo.generated.h"

class AActor;
class ANinjaCombatPoolableActor;

/**
 * Information about a poolable actor.
 */
USTRUCT(BlueprintType)
struct NINJACOMBATACTORPOOL_API FCombatPoolableActorInfo
{
	
	GENERATED_BODY()

	/** Class that will be pooled. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poolable Actor Info", Meta = (MustImplement = "/Script/NinjaCombatActorPool.CombatPoolableActorInterface"))
	TSubclassOf<AActor> PoolableActorClass = nullptr;

	/** Size of this pool. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poolable Actor Info")
	uint8 PoolSize = 0;

};
