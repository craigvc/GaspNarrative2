// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_ProjectileHit.generated.h"

/**
 * Filters any targets already hit by the owning projectile.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_ProjectileHit : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

public:

	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation	
	
};
