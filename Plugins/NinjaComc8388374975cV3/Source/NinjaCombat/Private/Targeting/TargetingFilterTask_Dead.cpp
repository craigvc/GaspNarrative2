// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_Dead.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

bool UTargetingFilterTask_Dead::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const
{
	const AActor* TargetActor = TargetData.HitResult.GetActor();
	
	const UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(TargetActor);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
	{
		const bool bDead = ICombatDamageManagerInterface::Execute_IsDead(DamageManager);
		return bDead ^ bInvert;
	}

	return false;
}
