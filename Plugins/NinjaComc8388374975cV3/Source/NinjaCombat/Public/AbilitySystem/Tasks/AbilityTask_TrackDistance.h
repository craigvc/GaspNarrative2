// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_TrackDistance.generated.h"

/**
 * Tracks the distance from a target, broadcasting when a threshold is reached. 
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_TrackDistance : public UAbilityTask
{
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDistanceExceeded, const AActor*, Target, float, Distance);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the distance threshold is reached. */
	UPROPERTY(BlueprintAssignable)	
	FDistanceExceeded OnDistanceExceeded;

	UAbilityTask_TrackDistance();

	/**
	 * Creates the appropriate Ability Task, based on the provided data.
	 */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|Tasks")
	static UAbilityTask_TrackDistance* CreateTask(UGameplayAbility* OwningAbility, AActor* TrackedActor, float Threshold, bool bFinishTaskOnThreshold = true);
	
	// -- Begin Ability Task implementation
	virtual void TickTask(float DeltaTime) override;
	// -- End Ability Task implementation
	
	/**
	 * Sets a new target without the need to recreate the task.
	 * The new target must be valid.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Ability Tasks")
	void SetTarget(AActor* NewTarget);

protected:

	/** Determines if the task should end when the threshold is reached. */
	bool bFinishTaskOnThreshold;
	
	/** Distance threshold for the broadcast. */
	float Threshold;
	
	/** The target currently being tracked. */
	UPROPERTY()
	TObjectPtr<AActor> TrackedTarget;
	
};
