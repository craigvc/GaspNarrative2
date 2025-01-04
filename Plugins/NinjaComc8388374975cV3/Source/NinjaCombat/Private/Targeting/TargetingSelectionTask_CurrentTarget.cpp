// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingSelectionTask_CurrentTarget.h"

#include "NinjaCombatFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatProjectileInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "TargetingSystem/TargetingSubsystem.h"
#include "Types/TargetingSystemTypes.h"

#if ENABLE_DRAW_DEBUG
#include "Engine/Canvas.h"
#endif

UTargetingSelectionTask_CurrentTarget::UTargetingSelectionTask_CurrentTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UTargetingSelectionTask_CurrentTarget::Execute(const FTargetingRequestHandle& TargetingHandle) const
{
	Super::Execute(TargetingHandle);
	
	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Executing);

	#if ENABLE_DRAW_DEBUG
	ResetSourceActorDebugString(TargetingHandle);
    #endif
	
	if (!TargetingHandle.IsValid())
	{
		CompleteTask(TargetingHandle);
		return;
	}

	const FTargetingSourceContext* SourceContext = FTargetingSourceContext::Find(TargetingHandle);
	if (SourceContext == nullptr)
	{
		CompleteTask(TargetingHandle);
		return;
	}

	const AActor* SourceActor = SourceContext->SourceActor;
	const UActorComponent* TargetManager = GetTargetManager(SourceActor);
	if (!UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetManager))
	{
		CompleteTask(TargetingHandle);
		return;
	}

	AActor* CurrentTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManager);
	if (!IsValid(CurrentTarget))
	{
		CompleteTask(TargetingHandle);
		return;
	}

	bool AddSourceActor = true;
	
	FTargetingDefaultResultsSet& Results = FTargetingDefaultResultsSet::FindOrAdd(TargetingHandle);
	for (const FTargetingDefaultResultData& ResultData : Results.TargetResults)
	{
		if (ResultData.HitResult.GetActor() == CurrentTarget)
		{
			// The Target Actor was already added to the context, probably from another selection task.
			AddSourceActor = false;
			break;
		}
	}

	if (AddSourceActor)
	{
		FTargetingDefaultResultData* ResultData = new(Results.TargetResults) FTargetingDefaultResultData();
		ResultData->HitResult.HitObjectHandle = FActorInstanceHandle(CurrentTarget);
		ResultData->HitResult.Location = CurrentTarget->GetActorLocation() + Offset;
		ResultData->HitResult.Distance = 0.0f;
		ResultData->HitResult.Time = 0.f;

		#if ENABLE_DRAW_DEBUG
		AddTargetActorDebugString(TargetingHandle, SourceContext->SourceActor);
		#endif
	}

	CompleteTask(TargetingHandle);
}

void UTargetingSelectionTask_CurrentTarget::CompleteTask(const FTargetingRequestHandle& TargetingHandle) const
{
	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Completed);
}

UActorComponent* UTargetingSelectionTask_CurrentTarget::GetTargetManager(const AActor* Source)
{
	const AActor* TargetManagerOwner = Source;
	if (Source->Implements<UCombatProjectileInterface>())
	{
		TargetManagerOwner = Source->GetInstigator();
	}

	return UNinjaCombatFunctionLibrary::GetTargetManagerComponent(TargetManagerOwner);
}

#if ENABLE_DRAW_DEBUG
void UTargetingSelectionTask_CurrentTarget::DrawDebug(UTargetingSubsystem* TargetingSubsystem,
	FTargetingDebugInfo& Info, const FTargetingRequestHandle& TargetingHandle, const float XOffset, const float YOffset,
	const int32 MinTextRowsToAdvance) const
{
#if WITH_EDITORONLY_DATA
	if (UTargetingSubsystem::IsTargetingDebugEnabled())
	{
		FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
		const FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
		if (!ScratchPadString.IsEmpty())
		{
			if (Info.Canvas)
			{
				Info.Canvas->SetDrawColor(FColor::Yellow);
			}

			const FString TaskString = FString::Printf(TEXT(": %s"), *ScratchPadString);
			TargetingSubsystem->DebugLine(Info, TaskString, XOffset, YOffset, MinTextRowsToAdvance);
		}
	}
#endif
}

void UTargetingSelectionTask_CurrentTarget::AddTargetActorDebugString(const FTargetingRequestHandle& TargetingHandle, const AActor* TargetActor) const
{
#if WITH_EDITORONLY_DATA
	if (TargetActor && UTargetingSubsystem::IsTargetingDebugEnabled())
	{
		FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
		FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
		ScratchPadString = FString::Printf(TEXT("%s"), *GetNameSafe(TargetActor));
	}
#endif 	
}

void UTargetingSelectionTask_CurrentTarget::ResetSourceActorDebugString(const FTargetingRequestHandle& TargetingHandle) const
{
#if WITH_EDITORONLY_DATA
	FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
	FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
	ScratchPadString.Reset();
#endif	
}

#endif
