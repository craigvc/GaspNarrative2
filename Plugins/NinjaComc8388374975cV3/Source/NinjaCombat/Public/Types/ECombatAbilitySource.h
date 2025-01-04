// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
 * Determines from where an attack's melee scan or projectile should originate.
 */
UENUM(BlueprintType)
enum class ECombatAbilitySource : uint8
{
	/** The Scan or Projectile will originate from the owner's mesh. */
	Owner,

	/** The Scan or Projectile will originate from a weapon's mesh. */
	Weapon
};