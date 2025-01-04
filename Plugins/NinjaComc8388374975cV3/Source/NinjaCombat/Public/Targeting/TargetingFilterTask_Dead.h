// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_Dead.generated.h"

/**
 * Filters targets that are considered "dead" in the Combat System.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_Dead : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

protected:

	/** Informs if we actually want to filter out alive characters instead. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dead Filter")
	bool bInvert = false;
	
	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation
	
};
