// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatTargetActorModifierInterface.generated.h"

class AGameplayAbilityTargetActor;

UINTERFACE(MinimalAPI)
class UCombatTargetActorModifierInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines an object that can receive a combat target.
 */
class NINJACOMBAT_API ICombatTargetActorModifierInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Hook to modify a Target Actor after it has been spawned by the task.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Target Actor Modifier Interface")
	void ModifyActor(AGameplayAbilityTargetActor* TargetActor);
	
};