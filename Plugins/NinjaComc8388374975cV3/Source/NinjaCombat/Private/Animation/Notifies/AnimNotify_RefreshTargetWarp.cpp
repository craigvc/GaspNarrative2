// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_RefreshTargetWarp.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interfaces/Components/CombatMotionWarpingInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

void UAnimNotify_RefreshTargetWarp::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	const AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}
	
	const UActorComponent* TargetManager = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(Owner);
	if (!UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetManager))
	{
		return;
	}
	
	UActorComponent* MotionWarping = UNinjaCombatFunctionLibrary::GetMotionWarpingComponent(Owner);
	if (UNinjaCombatFunctionLibrary::IsValidMotionWarpingComponent(MotionWarping))
	{
		const AActor* CurrentTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManager);
		if (IsValid(CurrentTarget))
		{
			ICombatMotionWarpingInterface::Execute_SetCombatWarpTarget(MotionWarping, WarpTargetName, CurrentTarget, DistanceOffset);	
		}
		else
		{
			ICombatMotionWarpingInterface::Execute_ClearCombatWarpTarget(MotionWarping, WarpTargetName);
		}
	}
}

FString UAnimNotify_RefreshTargetWarp::GetNotifyName_Implementation() const
{
	return "Refresh Target Warp";
}
