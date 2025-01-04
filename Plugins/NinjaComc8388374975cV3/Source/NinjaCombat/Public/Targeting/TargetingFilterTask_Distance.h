// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_Distance.generated.h"

/**
 * Filters targets that are longer than the provided distance threshold.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_Distance : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

protected:

	/**
	 * Maximum distance allowed for the filter.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Distance Filter")
	float MaximumDistance = 500.f;	
	
	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation

private:
	
	/**
	 * Returns the Source location, whether that comes from the source actor or source context.
	 */
	static FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle);
	
};
