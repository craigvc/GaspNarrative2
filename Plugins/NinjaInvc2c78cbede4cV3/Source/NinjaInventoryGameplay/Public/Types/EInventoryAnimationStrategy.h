// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
 * Defines the role of animations for Inventory Events.
 */
UENUM(BlueprintType)
enum class EInventoryAnimationStrategy : uint8
{
	/** Performs the inventory operation regardless of an animation being found. */
	AlwaysExecute,

	/** Performs the inventory operation when the animation starts. */
	WhenAnimationStarts,

	/** Waits for a Gameplay Event from the animation. */
	WaitForGameplayEvent,
};