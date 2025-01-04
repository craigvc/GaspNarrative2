// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingTask.h"
#include "TargetingSelectionTask_Camera.generated.h"

/**
 * Selects an actor located at the camera center.
 */
UCLASS()
class NINJACOMBAT_API UTargetingSelectionTask_Camera : public UTargetingTask
{
	
	GENERATED_BODY()

public:
	
	UTargetingSelectionTask_Camera(const FObjectInitializer& ObjectInitializer);

	// -- Begin Targeting Task overrides.
	virtual void Execute(const FTargetingRequestHandle& TargetingHandle) const override;
	// -- End Targeting Task overrides.

protected:

	/** Distance for the line trace. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target")
	float Distance = 10000.f;

	/** Collision channel for the trace. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;
	
	void CompleteTask(const FTargetingRequestHandle& TargetingHandle) const;
	
#if ENABLE_DRAW_DEBUG
private:

	// -- Begin debug methods
	virtual void DrawDebug(UTargetingSubsystem* TargetingSubsystem, FTargetingDebugInfo& Info, const FTargetingRequestHandle& TargetingHandle, float XOffset, float YOffset, int32 MinTextRowsToAdvance) const override;
	void AddTargetActorDebugString(const FTargetingRequestHandle& TargetingHandle, const AActor* TargetActor) const;
	void ResetSourceActorDebugString(const FTargetingRequestHandle& TargetingHandle) const;
	// -- End debug methods
	
#endif
	
};
