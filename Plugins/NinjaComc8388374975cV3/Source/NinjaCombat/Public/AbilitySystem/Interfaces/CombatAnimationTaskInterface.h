// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatDelegates.h"
#include "UObject/Interface.h"
#include "CombatAnimationTaskInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatAnimationTaskInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines an API for tasks that can play combat animations.
 */
class NINJACOMBAT_API ICombatAnimationTaskInterface
{
	GENERATED_BODY()

public:

	/**
	 * Binds to a Multicast Delegate that will notify about the animation completed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Task Interface")
	void BindToAnimationCompleted(const FCombatAnimationEventDelegate& Delegate);

	/**
	 * Binds to a Multicast Delegate that will notify about the animation blends out.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Task Interface")
	void BindToAnimationBlendOut(const FCombatAnimationEventDelegate& Delegate);

	/**
	 * Binds to a Multicast Delegate that will notify about the animation is interrupted.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Task Interface")
	void BindToAnimationInterrupted(const FCombatAnimationEventDelegate& Delegate);

	/**
	 * Binds to a Multicast Delegate that will notify about the animation is cancelled.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation Task Interface")
	void BindToAnimationCancelled(const FCombatAnimationEventDelegate& Delegate);
	
};