// Copyright Narrative Tools 2022. 



#include "AnimNode_NarrativeDialogue.h"
#include "SceneManagement.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationCoreLibrary.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Animation/AnimTrace.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimNode_NarrativeDialogue)

static const FVector DefaultLookAtAxis(0.f, 1.f, 0.f);
static const FVector DefaultLookUpAxis(1.f, 0.f, 0.f);

/////////////////////////////////////////////////////
// FAnimNode_NarrativeDialogue

void FAnimNode_NarrativeDialogue::UpdateInternal(const FAnimationUpdateContext& Context)
{
	Super::UpdateInternal(Context);

	CurrentDelta = Context.GetDeltaTime();
}

//void FAnimNode_NarrativeDialogue::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(EvaluateSkeletalControl_AnyThread)
//	check(OutBoneTransforms.Num() == 0);
//
//	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();
//	const FCompactPoseBoneIndex ModifyBoneIndex = BoneToModify.GetCompactPoseIndex(BoneContainer);
//	FTransform ComponentBoneTransform = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex);
//
//	// get target location
//	FTransform TargetTransform = LookAtTarget.GetTargetTransform(LookAtLocation, Output.Pose, Output.AnimInstanceProxy->GetComponentTransform());
//	FVector TargetLocationInComponentSpace = TargetTransform.GetLocation();
//	
//	FVector OldCurrentTargetLocation = CurrentTargetLocation;
//	FVector NewCurrentTargetLocation = TargetLocationInComponentSpace;
//
//	if ((NewCurrentTargetLocation - OldCurrentTargetLocation).SizeSquared() > InterpolationTriggerThreashold*InterpolationTriggerThreashold)
//	{
//		if (AccumulatedInterpoolationTime >= InterpolationTime)
//		{
//			// reset current Alpha, we're starting to move
//			AccumulatedInterpoolationTime = 0.f;
//		}
//
//		PreviousTargetLocation = OldCurrentTargetLocation;
//		CurrentTargetLocation = NewCurrentTargetLocation;
//	}
//	else if (InterpolationTriggerThreashold == 0.f)
//	{
//		CurrentTargetLocation = NewCurrentTargetLocation;
//	}
//
//	if (InterpolationTime > 0.f)
//	{
//		float CurrentAlpha = AccumulatedInterpoolationTime/InterpolationTime;
//
//		if (CurrentAlpha < 1.f)
//		{
//			float BlendAlpha = AlphaToBlendType(CurrentAlpha, InterpolationType);
//
//			CurrentLookAtLocation = FMath::Lerp(PreviousTargetLocation, CurrentTargetLocation, BlendAlpha);
//		}
//	}
//	else
//	{
//		CurrentLookAtLocation = CurrentTargetLocation;
//	}
//
//#if UE_ENABLE_DEBUG_DRAWING
//	CachedOriginalTransform = ComponentBoneTransform;
//	CachedTargetCoordinate = LookAtTarget.GetTargetTransform(FVector::ZeroVector, Output.Pose, Output.AnimInstanceProxy->GetComponentTransform());
//	CachedPreviousTargetLocation = PreviousTargetLocation;
//	CachedCurrentLookAtLocation = CurrentLookAtLocation;
//#endif
//	CachedCurrentTargetLocation = CurrentTargetLocation;
//
//	// lookat vector
//	FVector LookAtVector = LookAt_Axis.GetTransformedAxis(ComponentBoneTransform);
//	// find look up vector in local space
//	FVector LookUpVector = LookUp_Axis.GetTransformedAxis(ComponentBoneTransform);
//	// Find new transform from look at info
//	FQuat DeltaRotation = AnimationCore::SolveAim(ComponentBoneTransform, CurrentLookAtLocation, LookAtVector, bUseLookUpAxis, LookUpVector, LookAtClamp);
//
//	ModifyPoseFromDeltaRotation(Output, OutBoneTransforms, ComponentBoneTransform, DeltaRotation);
//
//	// Sort OutBoneTransforms so indices are in increasing order.
//	OutBoneTransforms.Sort(FCompareBoneTransformIndex());
//
//#if UE_ENABLE_DEBUG_DRAWING
//	CachedLookAtTransform = ComponentBoneTransform;
//#endif
//
//	TRACE_ANIM_NODE_VALUE(Output, TEXT("Bone"), BoneToModify.BoneName);
//	TRACE_ANIM_NODE_VALUE(Output, TEXT("Look At Target"), LookAtTarget.HasValidSetup() ? LookAtTarget.GetTargetSetup() : NAME_None);
//	TRACE_ANIM_NODE_VALUE(Output, TEXT("Look At Location"), LookAtLocation);
//	TRACE_ANIM_NODE_VALUE(Output, TEXT("Target Location"), CachedCurrentTargetLocation);
//
//}

//
//void FAnimNode_NarrativeDialogue::GatherDebugData(FNodeDebugData& DebugData)
//{
//	FAnimNode_SkeletalControlBase::GatherDebugData(DebugData);
//}
//
//void FAnimNode_NarrativeDialogue::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(EvaluateSkeletalControl_AnyThread)
//	check(OutBoneTransforms.Num() == 0);
//
//	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();
//	const FCompactPoseBoneIndex ModifyBoneIndex = BoneToModify.GetCompactPoseIndex(BoneContainer);
//	FTransform ComponentBoneTransform = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex);
//
//	if (!Dialogue || (Dialogue && !Dialogue->IsInitialized()))
//	{
//		return;
//	}
//
//	AActor* CurrentSpeakerAvatar = Dialogue->GetCurrentSpeakerAvatar();
//	AActor* CurrentListenerAvatar = Dialogue->GetCurrentListenerAvatar();
//	FVector FinalLookLocation;
//
//	if (CurrentSpeakerAvatar && CurrentListenerAvatar)
//	{
//		//If our actor is in the same position as the speaker, assume its the speaker, as proxy data doesn't give us another way to check (i think!)
//		const bool bIsListening = !Output.AnimInstanceProxy->GetActorTransform().Equals(CurrentSpeakerAvatar->GetActorTransform());
//		AActor* ActorToLookAt = bIsListening ? CurrentSpeakerAvatar : CurrentListenerAvatar;
//
//		const FVector NewDialogueLookLocation = Dialogue->GetSpeakerHeadLocation(ActorToLookAt);
//
//		//Speaker loc has moved. 
//		if ((CachedDialogueLookLocation - NewDialogueLookLocation).SizeSquared() > 5.f)
//		{
//			HeadBlendStartLoc = CachedDialogueLookLocation.IsNearlyZero() ? NewDialogueLookLocation : CachedDialogueLookLocation;
//			HeadBlendEndLoc = NewDialogueLookLocation;
//
//			AccumulatedInterpolationTime = 0.f;
//		}
//
//		//This is where we need to look
//		CachedDialogueLookLocation = NewDialogueLookLocation;
//
//		if (InterpolationTime > 0.f)
//		{
//			const float CurrentAlpha = AccumulatedInterpolationTime / InterpolationTime;
//
//			if (CurrentAlpha < 1.f)
//			{
//				FinalLookLocation = FMath::Lerp(HeadBlendStartLoc, HeadBlendEndLoc, CurrentAlpha);
//			}
//		}
//		else
//		{
//			FinalLookLocation = HeadBlendEndLoc;
//		}
//
//	}
//
//	CurrentTargetLocation = Output.AnimInstanceProxy->GetComponentTransform().InverseTransformPosition(FinalLookLocation);
//	CurrentLookAtLocation = CurrentTargetLocation;
//
//#if UE_ENABLE_DEBUG_DRAWING
//	CachedOriginalTransform = ComponentBoneTransform;
//	CachedPreviousTargetLocation = PreviousTargetLocation;
//	CachedCurrentLookAtLocation = CurrentLookAtLocation;
//#endif
//
//	// lookat vector
//	FVector LookAtVector = LookAt_Axis.GetTransformedAxis(ComponentBoneTransform);
//	// find look up vector in local space
//	FVector LookUpVector = LookUp_Axis.GetTransformedAxis(ComponentBoneTransform);
//	// Find new transform from look at info
//	FQuat DeltaRotation = AnimationCore::SolveAim(ComponentBoneTransform, CurrentLookAtLocation, LookAtVector, bUseLookUpAxis, LookUpVector, LookAtClamp);
//
//	ModifyPoseFromDeltaRotation(Output, OutBoneTransforms, ComponentBoneTransform, DeltaRotation);
//
//	// Sort OutBoneTransforms so indices are in increasing order.
//	OutBoneTransforms.Sort(FCompareBoneTransformIndex());
//
//#if UE_ENABLE_DEBUG_DRAWING
//	CachedLookAtTransform = ComponentBoneTransform;
//#endif
//
//	TRACE_ANIM_NODE_VALUE(Output, TEXT("Bone"), BoneToModify.BoneName);
//}
//
//void FAnimNode_NarrativeDialogue::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(EvaluateComponentSpaceInternal)
//	Super::EvaluateComponentSpaceInternal(Context);
//
//#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
//	/*if (bEnableDebug)
//	{
//		const FTransform LocalToWorld = Context.AnimInstanceProxy->GetComponentTransform();
//		FVector TargetWorldLoc = LocalToWorld.TransformPosition(CachedCurrentTargetLocation);
//		FVector SourceWorldLoc = LocalToWorld.TransformPosition(CachedComponentBoneLocation);
//
//		Context.AnimInstanceProxy->AnimDrawDebugLine(SourceWorldLoc, TargetWorldLoc, FColor::Green);
//	}*/
//
//#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
//}
//
//bool FAnimNode_NarrativeDialogue::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
//{
//	// if both bones are valid
//	return BoneToModify.IsValidToEvaluate(RequiredBones);// &&
//	//	// or if name isn't set (use Look At Location) or Look at bone is valid 
//	//	// do not call isValid since that means if look at bone isn't in LOD, we won't evaluate
//	//	// we still should evaluate as long as the BoneToModify is valid even LookAtBone isn't included in required bones
//	//	(!LookAtTarget.HasTargetSetup() || LookAtTarget.IsValidToEvaluate(RequiredBones)));
//}
//
//#if WITH_EDITOR
//// can't use World Draw functions because this is called from Render of viewport, AFTER ticking component, 
//// which means LineBatcher already has ticked, so it won't render anymore
//// to use World Draw functions, we have to call this from tick of actor
//void FAnimNode_NarrativeDialogue::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* MeshComp) const
//{
//	auto CalculateLookAtMatrixFromTransform = [this](const FTransform& BaseTransform) -> FMatrix
//		{
//			FVector TransformedLookAtAxis = BaseTransform.TransformVector(LookAt_Axis.Axis);
//			const FVector DefaultUpVector = BaseTransform.GetUnitAxis(EAxis::Z);
//			FVector UpVector = (bUseLookUpAxis) ? BaseTransform.TransformVector(LookUp_Axis.Axis) : DefaultUpVector;
//			// if parallel with up vector, find something else
//			if (FMath::Abs(FVector::DotProduct(UpVector, TransformedLookAtAxis)) > (1.f - ZERO_ANIMWEIGHT_THRESH))
//			{
//				UpVector = BaseTransform.GetUnitAxis(EAxis::X);
//			}
//
//			FVector RightVector = FVector::CrossProduct(TransformedLookAtAxis, UpVector);
//			FMatrix Matrix;
//			FVector Location = BaseTransform.GetLocation();
//			Matrix.SetAxes(&TransformedLookAtAxis, &RightVector, &UpVector, &Location);
//			return Matrix;
//		};
//
//	// did not apply any of LocaltoWorld
//	if (PDI && MeshComp)
//	{
//		FTransform LocalToWorld = MeshComp->GetComponentTransform();
//		FTransform ComponentTransform = CachedOriginalTransform * LocalToWorld;
//		FTransform LookAtTransform = CachedLookAtTransform * LocalToWorld;
//		FTransform TargetTrasnform = CachedTargetCoordinate * LocalToWorld;
//		FVector BoneLocation = LookAtTransform.GetLocation();
//
//		// current look at location (can be clamped or interpolating)
//		DrawDashedLine(PDI, BoneLocation, LocalToWorld.TransformPosition(CachedCurrentLookAtLocation), FColor::Yellow, 5.f, SDPG_World);
//		DrawWireStar(PDI, CachedCurrentLookAtLocation, 5.0f, FColor::Yellow, SDPG_World);
//
//		// draw current target information
//		DrawDashedLine(PDI, BoneLocation, LocalToWorld.TransformPosition(CachedCurrentTargetLocation), FColor::Blue, 5.f, SDPG_World);
//		DrawWireStar(PDI, CachedCurrentTargetLocation, 5.0f, FColor::Blue, SDPG_World);
//
//		// draw the angular clamp
//		if (LookAtClamp > 0.f)
//		{
//			float Angle = FMath::DegreesToRadians(LookAtClamp);
//			float ConeSize = 30.f;
//			DrawCone(PDI, FScaleMatrix(ConeSize) * CalculateLookAtMatrixFromTransform(ComponentTransform), Angle, Angle, 20, false, FLinearColor::Green, GEngine->DebugEditorMaterial->GetRenderProxy(), SDPG_World);
//		}
//
//		// draw directional  - lookat and look up
//		DrawDirectionalArrow(PDI, CalculateLookAtMatrixFromTransform(LookAtTransform), FLinearColor::Red, 20, 5, SDPG_World);
//		DrawCoordinateSystem(PDI, BoneLocation, LookAtTransform.GetRotation().Rotator(), 20.f, SDPG_Foreground);
//		DrawCoordinateSystem(PDI, TargetTrasnform.GetLocation(), TargetTrasnform.GetRotation().Rotator(), 20.f, SDPG_Foreground);
//	}
//}
//#endif // WITH_EDITOR
//
//void FAnimNode_NarrativeDialogue::InitializeBoneReferences(const FBoneContainer& RequiredBones)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(InitializeBoneReferences)
//	BoneToModify.Initialize(RequiredBones);
//}
//
//void FAnimNode_NarrativeDialogue::UpdateInternal(const FAnimationUpdateContext& Context)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(UpdateInternal)
//	FAnimNode_SkeletalControlBase::UpdateInternal(Context);
//
//	AccumulatedInterpolationTime = FMath::Clamp(AccumulatedInterpolationTime + Context.GetDeltaTime(), 0.f, InterpolationTime);
//}
//
//void FAnimNode_NarrativeDialogue::Initialize_AnyThread(const FAnimationInitializeContext& Context)
//{
//	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
//	FAnimNode_SkeletalControlBase::Initialize_AnyThread(Context);
//
//	// initialize
//	LookUp_Axis.Initialize();
//	if (LookUp_Axis.Axis.IsZero())
//	{
//		UE_LOG(LogAnimation, Warning, TEXT("Zero-length look-up axis specified in LookAt node. Reverting to default."));
//		LookUp_Axis.Axis = DefaultLookUpAxis;
//	}
//	LookAt_Axis.Initialize();
//	if (LookAt_Axis.Axis.IsZero())
//	{
//		UE_LOG(LogAnimation, Warning, TEXT("Zero-length look-at axis specified in LookAt node. Reverting to default."));
//		LookAt_Axis.Axis = DefaultLookAtAxis;
//	}
//}
//
//void FAnimNode_NarrativeDialogue::ModifyPoseFromDeltaRotation(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, FTransform& InOutBoneToModifyTransform, const FQuat& DeltaRotation)
//{
//	InOutBoneToModifyTransform.SetRotation(DeltaRotation * InOutBoneToModifyTransform.GetRotation());
//	const FCompactPoseBoneIndex BoneToModifyIndex = BoneToModify.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
//	OutBoneTransforms.Add(FBoneTransform(BoneToModifyIndex, InOutBoneToModifyTransform));
//}
//

void FAnimNode_NarrativeDialogue::ModifyPoseFromDeltaRotation(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, FTransform& InOutBoneToModifyTransform, const FQuat& DeltaRotation)
{
	FQuat NewRot = DeltaRotation * InOutBoneToModifyTransform.GetRotation();

	FQuat FinalRot = FMath::QInterpTo(InOutBoneToModifyTransform.GetRotation(), NewRot, CurrentDelta, QuatInterpSpeed);

	InOutBoneToModifyTransform.SetRotation(FinalRot);
	const FCompactPoseBoneIndex BoneToModifyIndex = BoneToModify.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
	OutBoneTransforms.Add(FBoneTransform(BoneToModifyIndex, InOutBoneToModifyTransform));
}
