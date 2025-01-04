// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingSelectionTask_Camera.h"

#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TargetingSystem/TargetingSubsystem.h"

#if ENABLE_DRAW_DEBUG
#include "Engine/Canvas.h"
#endif

UTargetingSelectionTask_Camera::UTargetingSelectionTask_Camera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UTargetingSelectionTask_Camera::Execute(const FTargetingRequestHandle& TargetingHandle) const
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
	if (SourceActor == nullptr)
	{
		CompleteTask(TargetingHandle);
		return;
	}

	UCameraComponent* Camera = SourceActor->FindComponentByClass<UCameraComponent>();
	if (Camera == nullptr)
	{
		CompleteTask(TargetingHandle);
		return;
	}

	const FVector TraceStart = SourceActor->GetActorLocation();
	const FVector TraceEnd = TraceStart + Camera->GetForwardVector() * Distance;

	TArray<AActor*> IgnoredActors;
	SourceActor->GetAttachedActors(IgnoredActors);
	
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(SourceActor);
	QueryParams.AddIgnoredActors(IgnoredActors);
	QueryParams.bTraceComplex = true;

	FHitResult Hit;
	SourceActor->GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, TraceChannel, QueryParams);

	bool bShouldAddActor = true;
	if (Hit.IsValidBlockingHit() && IsValid(Hit.GetActor()))
	{
		FTargetingDefaultResultsSet& Results = FTargetingDefaultResultsSet::FindOrAdd(TargetingHandle);
		for (const FTargetingDefaultResultData& ResultData : Results.TargetResults)
		{
			if (ResultData.HitResult.GetActor() == Hit.GetActor())
			{
				// The Target Actor was already added to the context, probably from another selection task.
				bShouldAddActor = false;
				break;
			}
		}
	}
	else
	{
		// No target to add.
		bShouldAddActor = false;
	}

	if (bShouldAddActor)
	{
		FTargetingDefaultResultsSet& Results = FTargetingDefaultResultsSet::FindOrAdd(TargetingHandle);
		FTargetingDefaultResultData* ResultData = new(Results.TargetResults) FTargetingDefaultResultData();
		ResultData->HitResult = Hit;

		#if ENABLE_DRAW_DEBUG
		AddTargetActorDebugString(TargetingHandle, SourceContext->SourceActor);
		#endif		
	}

	CompleteTask(TargetingHandle);
}

void UTargetingSelectionTask_Camera::CompleteTask(const FTargetingRequestHandle& TargetingHandle) const
{
	SetTaskAsyncState(TargetingHandle, ETargetingTaskAsyncState::Completed);
}

#if ENABLE_DRAW_DEBUG
void UTargetingSelectionTask_Camera::DrawDebug(UTargetingSubsystem* TargetingSubsystem,
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

void UTargetingSelectionTask_Camera::AddTargetActorDebugString(const FTargetingRequestHandle& TargetingHandle, const AActor* TargetActor) const
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

void UTargetingSelectionTask_Camera::ResetSourceActorDebugString(const FTargetingRequestHandle& TargetingHandle) const
{
#if WITH_EDITORONLY_DATA
	FTargetingDebugData& DebugData = FTargetingDebugData::FindOrAdd(TargetingHandle);
	FString& ScratchPadString = DebugData.DebugScratchPadStrings.FindOrAdd(GetNameSafe(this));
	ScratchPadString.Reset();
#endif	
}

#endif
