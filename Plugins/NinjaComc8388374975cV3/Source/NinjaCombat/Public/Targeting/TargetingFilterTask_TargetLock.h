// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_TargetLock.generated.h"

/**
 * Filters targets that are not currently locked on the owner, having it as a target.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_TargetLock : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

protected:

	/** Informs if we actually want to filter out characters that are locked on us. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target Lock Filter")
	bool bInvert = false;
	
	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation
};
