// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
 * Possible states for a pooled actor.
 */
UENUM(BlueprintType)
enum class EPoolableActorState : uint8
{
	Inactive,
	Reserved,
	Active,
};
