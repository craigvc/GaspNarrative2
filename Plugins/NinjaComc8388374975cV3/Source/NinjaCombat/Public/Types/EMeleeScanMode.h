// Ninja Bear Studio Inc., all rights reserved.
#pragma once

/**
 * Scan styles to allow more control over target detection.
 */
UENUM(BlueprintType)
enum class EMeleeScanMode : uint8
{
	LineTrace,
	BoxSweep,
	CapsuleSweep,
	SphereSweep
};