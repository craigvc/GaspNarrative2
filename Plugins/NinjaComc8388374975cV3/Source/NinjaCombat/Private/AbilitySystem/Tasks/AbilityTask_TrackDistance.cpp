// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_TrackDistance.h"

UAbilityTask_TrackDistance::UAbilityTask_TrackDistance()
{
	bTickingTask = true;
	bFinishTaskOnThreshold = true;
	Threshold = 500.f;
}

UAbilityTask_TrackDistance* UAbilityTask_TrackDistance::CreateTask(UGameplayAbility* OwningAbility, AActor* TrackedActor, const float Threshold, const bool bFinishTaskOnThreshold)
{
	UAbilityTask_TrackDistance* NewTask = NewAbilityTask<UAbilityTask_TrackDistance>(OwningAbility);
	NewTask->TrackedTarget = TrackedActor;
	NewTask->Threshold = Threshold;
	NewTask->bFinishTaskOnThreshold = bFinishTaskOnThreshold;
	return NewTask;	
}

void UAbilityTask_TrackDistance::TickTask(const float DeltaTime)
{
	Super::TickTask(DeltaTime);

	const AActor* Avatar = GetAvatarActor();
	const float Distance = Avatar->GetDistanceTo(TrackedTarget);

	if (Distance > Threshold && ShouldBroadcastAbilityTaskDelegates())
	{
		OnDistanceExceeded.Broadcast(TrackedTarget, Distance);

		if (bFinishTaskOnThreshold)
		{
			EndTask();	
		}
	}
}

void UAbilityTask_TrackDistance::SetTarget(AActor* NewTarget)
{
	if (IsValid(NewTarget))
	{
		TrackedTarget = NewTarget;	
	}
}
