// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingTask.h"
#include "TargetingSelectionTask_CurrentTarget.generated.h"

/**
 * Selects the current target from the Target Lock ability.
 */
UCLASS()
class NINJACOMBAT_API UTargetingSelectionTask_CurrentTarget : public UTargetingTask
{
	
	GENERATED_BODY()

public:
	
	UTargetingSelectionTask_CurrentTarget(const FObjectInitializer& ObjectInitializer);

	// -- Begin Targeting Task overrides.
	virtual void Execute(const FTargetingRequestHandle& TargetingHandle) const override;
	// -- End Targeting Task overrides.

protected:

	/** An offset to add to the Actor Location. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target")
	FVector Offset = FVector::ZeroVector;
	
	void CompleteTask(const FTargetingRequestHandle& TargetingHandle) const;

	static UActorComponent* GetTargetManager(const AActor* Source);
	
#if ENABLE_DRAW_DEBUG
private:

	// -- Begin debug methods
	virtual void DrawDebug(UTargetingSubsystem* TargetingSubsystem, FTargetingDebugInfo& Info, const FTargetingRequestHandle& TargetingHandle, float XOffset, float YOffset, int32 MinTextRowsToAdvance) const override;
	void AddTargetActorDebugString(const FTargetingRequestHandle& TargetingHandle, const AActor* TargetActor) const;
	void ResetSourceActorDebugString(const FTargetingRequestHandle& TargetingHandle) const;
	// -- End debug methods
	
#endif
};
