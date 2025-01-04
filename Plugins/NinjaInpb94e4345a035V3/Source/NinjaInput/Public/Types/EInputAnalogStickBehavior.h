// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
 * Defines support behaviors to adjust movement input from an analog stick.
 */
UENUM(BlueprintType)
enum class EInputAnalogStickBehavior : uint8
{
	/** Character will move at a fixed speed regardless of stick deflection. */
	FixedSpeed_SingleGait			UMETA(DisplayName = "Fixed Speed - Single Gait"),

	/** Character will move at a fixed walking speed with slight stick deflection, and a fixed running speed at full stick deflection. */
	FixedSpeed_WalkRun				UMETA(DisplayName = "Fixed Speed - Walk/Run"),

	/** Full analog movement control with stick, character will remain walking or running based on gait input. */
	VariableSpeed_SingleGait		UMETA(DisplayName = "Variable Speed - Single Gait"),

	/** Full analog movement control with stick, character will switch from walk to run gait based on stick deflection. */
	VariableSpeed_WalkRun			UMETA(DisplayName = "Variable Speed - Walk/Run")
};