// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/CombatProjectileProviderInterface.h"

bool ICombatProjectileProviderInterface::GetProjectileClass_Implementation(TSubclassOf<AActor>& ProjectileClass) const
{
	return false;
}
