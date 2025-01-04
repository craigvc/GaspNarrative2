// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "MotionWarpingComponent.h"
#include "Interfaces/Components/CombatMotionWarpingInterface.h"
#include "NinjaCombatMotionWarpingComponent.generated.h"

class UGameplayAbility;

/**
 * Specialized version of the Motion Warping Component, integrated with the Combat System.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatMotionWarpingComponent : public UMotionWarpingComponent, public ICombatMotionWarpingInterface
{
	
	GENERATED_BODY()

public:

	UNinjaCombatMotionWarpingComponent(const FObjectInitializer& ObjectInitializer);

	// -- Begin Motion Warping implementation
	virtual void SetCombatWarpTarget_Implementation(const FName WarpName, const AActor* Target, float DistanceOffset = 0.f) override;
	virtual void ClearCombatWarpTarget_Implementation(const FName WarpName) override;
	// -- End Motion Warping implementation

	/**
	 * Create and adds or update a target associated with a specified name.
	 * 
	 * @param WarpName			Warp target identifier.
	 * @param TargetLocation	Location for the warp target.
	 * @param TargetRotation	Rotation for the warp target.
	 * @param Offset			Offset added from the target towards the source.
	 */
	UFUNCTION(BlueprintCallable, Category = "Motion Warping")
	void AddOrUpdateWarpTargetFromLocationAndRotationWithOffset(FName WarpName, FVector TargetLocation, FRotator TargetRotation, float Offset);
	
protected:

	/** Enables searching for components tagged with the warp name. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Warping")
	bool bSearchForAnchorComponents;

	/** Determines if this component is running in debug mode or not. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Warping")
	bool bEnableDebugMode;
	
	/**
	 * Calculates the Warp Location for a target.
	 * 
	 * @param Target		Actor used as a reference for the Warp Location calculation. 
	 * @return				A Vector representing the desired location for the warp.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Motion Warping")
	FVector CalculateWarpLocation(const AActor* Target) const;

	/**
	 * Calculates the Warp Rotation for a target.
	 * 
	 * @param Target		Actor used as a reference for the Warp Rotation calculation. 
	 * @return				A Rotator representing the desired direction for the warp.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Motion Warping")
	FRotator CalculateWarpRotation(const AActor* Target) const;

	void DebugWarpLocationAndRotation(FName WarpName, const FVector& Location, const FRotator& Rotation) const;
	
};
