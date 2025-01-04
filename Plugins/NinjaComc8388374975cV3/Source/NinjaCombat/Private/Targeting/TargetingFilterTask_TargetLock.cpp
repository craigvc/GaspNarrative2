// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_TargetLock.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

bool UTargetingFilterTask_TargetLock::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const
{
	if (const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle))
	{
		const AActor* SourceActor = SourceContext->SourceActor;
		const AActor* TargetActor = TargetData.HitResult.GetActor();
	
		const UActorComponent* TargetManager = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(TargetActor);
		if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetManager))
		{
			const AActor* CurrentTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManager);
			const bool bLockedOnSource = SourceActor == CurrentTarget; 
			return !bLockedOnSource ^ bInvert;
		}
	}
	
	return false;
}
