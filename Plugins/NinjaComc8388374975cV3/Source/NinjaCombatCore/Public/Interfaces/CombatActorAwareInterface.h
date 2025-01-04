// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatActorAwareInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatActorAwareInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * An interface that provides a well-defined way to set and retrieve the Combat Owner related to an object.
 */
class NINJACOMBATCORE_API ICombatActorAwareInterface
{
	GENERATED_BODY()

public:

	/**
	 * Sets the combat actor assigned to the object.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Actor Aware Interface")
	void SetCombatActor(AActor* NewCombatActor);
	
};