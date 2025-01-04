// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/Components/CombatTargetManagerInterface.h"

#include "GameFramework/Actor.h"

bool ICombatTargetManagerInterface::HasCombatTarget_Implementation() const
{
	const UObject* SelfObject = Cast<UObject>(this);
	if (SelfObject != nullptr)
	{
		const AActor* CurrentCombatTarget = Execute_GetCombatTarget(SelfObject);
		return IsValid(CurrentCombatTarget);
	}

	return false;
}
