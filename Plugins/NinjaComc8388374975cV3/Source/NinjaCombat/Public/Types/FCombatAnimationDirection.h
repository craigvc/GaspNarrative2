// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "FCombatAnimationDirection.generated.h"

/**
 * Configuration Class for the Evade Direction.
 */
USTRUCT(BlueprintType)
struct FCombatAnimationDirection
{
	GENERATED_BODY()

	/** Range for this direction Represented in degrees, in the [-180, 180] range. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Direction")
	FVector2D Range;

	/** Name of the montage section for the current animation direction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Direction")
	FName SectionName;
	
	FCombatAnimationDirection()
	{
		Range = FVector2D::ZeroVector;
		SectionName = NAME_None;
	}

	FCombatAnimationDirection(const float Min, const float Max, const FName SectionName) :
		Range(Min, Max), SectionName(SectionName)
	{
	}

	/** Checks if the provided angle matches this configuration range. */
	bool InRange(const float Angle) const
	{
		return UKismetMathLibrary::InRange_FloatFloat(Angle, Range.X, Range.Y);		
	}
};