// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatMotionWarpingInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatMotionWarpingInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that handles Motion Warping.
 */
class NINJACOMBAT_API ICombatMotionWarpingInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Adds or updates a combat target warp, based on an actor's location and rotation.
	 *
	 * @param WarpName			Key used to store the warp target information.
	 * @param Target			Actor used as a reference for the Warp Target.
	 * @param DistanceOffset	An optional offset from the target towards the source.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Motion Warping Interface")
	void SetCombatWarpTarget(const FName WarpName, const AActor* Target, float DistanceOffset = 0.f);

	/**
	 * Clears the combat target warp.
	 * 
	 * @param WarpName
	 *		Name of the warp that has been previously defined.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Motion Warping Interface")
	void ClearCombatWarpTarget(const FName WarpName);
	
};
