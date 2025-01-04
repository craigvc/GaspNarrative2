// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_Facing.h"

#include "GameFramework/Actor.h"

bool UTargetingFilterTask_Facing::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle,
	const FTargetingDefaultResultData& TargetData) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		const AActor* SourceActor = SourceContext->SourceActor;
		const AActor* TargetActor = TargetData.HitResult.GetActor();

		if (IsValid(SourceActor) && IsValid(TargetActor))
		{
			const FVector SourceForward = SourceActor->GetActorForwardVector();
			
			const FVector SourceLocation = SourceActor->GetActorLocation();
			const FVector TargetLocation = TargetActor->GetActorLocation();
			
			FVector Reference = TargetLocation - SourceLocation; 
			Reference.Normalize();
			
			const float Dot = SourceForward.Dot(Reference);
			const float Angle = FMath::RadiansToDegrees(FMath::Acos(Dot));

			// Filter OUT if the angle is past the maximum allowed.
			return Angle > MaximumAngle;
		}
	}

	return false;
}
