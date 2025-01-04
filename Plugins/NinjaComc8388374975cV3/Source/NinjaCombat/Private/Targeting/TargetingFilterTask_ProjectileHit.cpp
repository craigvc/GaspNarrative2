// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_ProjectileHit.h"

#include "GameFramework/NinjaCombatProjectileActor.h"

bool UTargetingFilterTask_ProjectileHit::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle,
	const FTargetingDefaultResultData& TargetData) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		const AActor* SourceActor = SourceContext->SourceActor;
		const AActor* TargetActor = TargetData.HitResult.GetActor();
		
		if (IsValid(SourceActor) && SourceActor->Implements<UCombatProjectileInterface>() && IsValid(TargetActor))
		{
			// If the projectile already hit the target, return TRUE, meaning we want to filter it OUT.
			const TArray<AActor*> ActorsHit = ICombatProjectileInterface::Execute_GetActorsHit(SourceActor);
			return ActorsHit.Contains(TargetActor);
		}
	}

	return false;
}
