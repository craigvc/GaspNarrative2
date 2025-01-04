// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_Facing.generated.h"

/**
 * Filters targets that are not withing the facing angle of the source.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_Facing : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

protected:

	/**
	 * Maximum angle allowed for the filter
	 *
	 * As a reference, if the source is facing the target, the angle would be close to zero.
	 * If the source has their back to the target, the angle would be close do 180 degrees.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Facing Filter")
	float MaximumAngle = 45.f;
	
	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation
	
};
