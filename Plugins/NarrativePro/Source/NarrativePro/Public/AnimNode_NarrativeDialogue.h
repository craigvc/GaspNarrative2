// Copyright Narrative Tools 2022. 


#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "BoneIndices.h"
#include "BoneContainer.h"
#include "BonePose.h"
#include "CommonAnimTypes.h"
#include "EngineDefines.h"
#include "BoneControllers/AnimNode_LookAt.h"
#include "AnimNode_NarrativeDialogue.generated.h"

class FPrimitiveDrawInterface;
class USkeletalMeshComponent;

UENUM()
/** Various ways to interpolate TAlphaBlend. */
namespace EInterpolationDialogueBlend
{
	enum Type
	{
		Linear,
		Cubic,
		Sinusoidal,
		EaseInOutExponent2,
		EaseInOutExponent3,
		EaseInOutExponent4,
		EaseInOutExponent5,
		MAX
	};
}

/**
 *	Simple controller that make a bone to look at the point or another bone
 */
USTRUCT(BlueprintInternalUseOnly)
struct NARRATIVEPRO_API FAnimNode_NarrativeDialogue : public FAnimNode_LookAt
{
	GENERATED_USTRUCT_BODY()

//	/** Name of bone to control. This is the main bone chain to modify from. **/
//	UPROPERTY(EditAnywhere, Category=SkeletalControl) 
//	FBoneReference BoneToModify;
//
//	UPROPERTY(EditAnywhere, Category = SkeletalControl)
//	FAxis LookAt_Axis;
//
//	/** Whether or not to use Look up axis */
//	UPROPERTY(EditAnywhere, Category=SkeletalControl)
//	bool bUseLookUpAxis;
//
//	UPROPERTY(EditAnywhere, Category = SkeletalControl)
//	FAxis LookUp_Axis;
//
//	/** Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used */
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=SkeletalControl, meta=(PinHiddenByDefault))
//	float LookAtClamp;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=SkeletalControl, meta=(PinHiddenByDefault))
//	float InterpolationTime;
//
//	// in the future, it would be nice to have more options, -i.e. lag, interpolation speed
//	FAnimNode_NarrativeDialogue();
//
//	// FAnimNode_Base interface
//	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;
//	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
//	// End of FAnimNode_Base interface
//
//	// FAnimNode_SkeletalControlBase interface
//	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context) override;
	//virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
//	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
//	// End of FAnimNode_SkeletalControlBase interface
//
//	FVector GetCachedTargetLocation() const {	return 	CachedCurrentTargetLocation;	}
//
//#if WITH_EDITOR
//	void ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* MeshComp) const;
//#endif // WITH_EDITOR
//
//private:
//	// FAnimNode_SkeletalControlBase interface
//	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
//	// End of FAnimNode_SkeletalControlBase interface
//
//
//	/** Debug transient data */
//	FVector CurrentLookAtLocation;
//
//	FVector CachedDialogueLookLocation;
//	FVector HeadBlendStartLoc;
//	FVector HeadBlendEndLoc;
//
//
//	/** Current Target Location */
//	FVector CurrentTargetLocation;
//	FVector PreviousTargetLocation;
//
//	/** Current Alpha */
//	float AccumulatedInterpolationTime;
// 
	float CurrentDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=SkeletalControl, meta=(PinHiddenByDefault))
	float QuatInterpSpeed;
//
//
//#if UE_ENABLE_DEBUG_DRAWING
//	/** Debug draw cached data */
//	FTransform CachedOriginalTransform;
//	FTransform CachedLookAtTransform;
//	FTransform CachedTargetCoordinate;
//	FVector CachedPreviousTargetLocation;
//	FVector CachedCurrentLookAtLocation;
//#endif // UE_ENABLE_DEBUG_DRAWING
//	FVector CachedCurrentTargetLocation;
//
//protected:
	virtual void ModifyPoseFromDeltaRotation(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms,	FTransform& InOutBoneToModifyTransform,	const FQuat& DeltaRotation);
};
