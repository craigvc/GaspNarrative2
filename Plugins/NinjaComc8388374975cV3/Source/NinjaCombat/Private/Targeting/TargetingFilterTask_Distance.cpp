// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_Distance.h"

#include "GameFramework/Actor.h"

bool UTargetingFilterTask_Distance::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle,
	const FTargetingDefaultResultData& TargetData) const
{
	const FVector SourceLocation = GetSourceLocation(TargetingHandle);

	const AActor* TargetActor = TargetData.HitResult.GetActor();
	if (IsValid(TargetActor))
	{
		const FVector TargetLocation = TargetActor->GetActorLocation();
		const float Distance = FVector::Distance(SourceLocation, TargetLocation); 
		return Distance > MaximumDistance;
	}

	// Filter everything by default.
	return true;
}

FVector UTargetingFilterTask_Distance::GetSourceLocation(const FTargetingRequestHandle& TargetingHandle)
{
	FVector SourceLocation = FVector::ZeroVector;
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		if (SourceContext->SourceActor)
		{
			SourceLocation = SourceContext->SourceActor->GetActorLocation();
		}
		else if (!SourceContext->SourceLocation.IsZero())
		{
			SourceLocation = SourceContext->SourceLocation;
		}
	}

	return SourceLocation;
}
