// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatMovementManagerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatMovementManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that manages movement.
 */
class NINJACOMBAT_API ICombatMovementManagerInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Handles a combat target that has been changed, potentially enabling "strafing".
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Manager Interface")
	void HandleCombatTargetChanged(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget);

	/**
	 * Handles a change in the current Blocking state.
	 *
	 * By default, a character will "walk" while blocking, instead of moving in a "jogging" speed.
	 * This behavior and the actual walking speed can be configured in the component's settings.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Manager Interface")
	void HandleBlockingStateChanged(UActorComponent* DefenseManager, bool bNewIsBlocking);

	/**
	 * Allows directly setting the blocking state, regardless of Gameplay Events.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Manager Interface")
	void SetBlocking(bool bNewIsBlocking);

	/**
	 * Allows directly setting the strafing state, regardless of Gameplay Events.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Manager Interface")
	void SetStrafing(bool bNewIsStrafing);
	
};

