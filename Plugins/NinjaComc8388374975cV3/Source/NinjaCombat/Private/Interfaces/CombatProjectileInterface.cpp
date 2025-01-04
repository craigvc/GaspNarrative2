// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/CombatProjectileInterface.h"

TSubclassOf<UGameplayEffect> ICombatProjectileInterface::GetImpactEffectClass_Implementation() const
{
	// An impact effect is not required and may be provided by the Ability.
	return nullptr;
}

float ICombatProjectileInterface::GetImpactEffectLevel_Implementation() const
{
	// An impact effect level is not required and may be provided by the ability.
	// Returning zero or negative values will discard the output and use the Ability's value instead.	
	return 0.f;
}

bool ICombatProjectileInterface::GetDamage_Implementation(float& OutDamage) const
{
	// By default, damage is set via Gameplay Effects.
	return false;
}

bool ICombatProjectileInterface::GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const
{
	// By default, poise consumption is set via Gameplay Effects.
	return false;
}

float ICombatProjectileInterface::GetProjectileImpactStrength_Implementation() const
{
	return 1000000.f;
}
