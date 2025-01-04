// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
* Determines how combo events are processed.
 */
UENUM(BlueprintType)
enum class ECombatComboEventMode : uint8
{
	/** State Tree Events are mapped from Input Actions. */
	InputAction,

	/** Gameplay Events are forwarded as-is. */
	GameplayTag
};