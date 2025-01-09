//  Copyright Narrative Tools 2022.


#include "Tales/QuestTask.h"
#include "Tales/Quest.h"
#include "Tales/TalesComponent.h"
#include "NavigationMarkerActor.h"
#include <TimerManager.h>
#include "NavigationMarkerComponent.h"
#include "NavigatorGameplayTags.h"
#include <GameFramework/PlayerController.h>

#define LOCTEXT_NAMESPACE "NarrativeQuestTask"

UNarrativeTask::UNarrativeTask()
{
	CurrentProgress = 0;
	RequiredQuantity = 1;
	bOptional = false;
	bHidden = false;
	TickInterval = 0.f;
	bIsActive = false;

	FGameplayTagContainer MarkerDomain;

	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Compass);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Minimap);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Screenspace);

	MarkerSettings.MarkerDomains = MarkerDomain;
}

void UNarrativeTask::BeginTaskInit()
{
	bIsActive = true;

	//If we come back to a state we've been at before in a quest, we need to do the task again so reset any previous progress 
	if (OwningComp && !OwningComp->bIsLoading)
	{
		CurrentProgress = 0;
	}

	//Cache all the useful values tasks will want
	if (UQuestBranch* OwningBranch = GetOwningBranch())
	{
		OwningQuest = OwningBranch->GetOwningQuest();

		if (OwningQuest)
		{
			OwningComp = OwningQuest->GetOwningComp();
		
			if (OwningComp)
			{
				OwningPawn = OwningComp->GetOwningPawn();
				OwningController = OwningComp->GetOwningController();
			}
		}
	}
}

void UNarrativeTask::BeginTask()
{
	BeginTaskInit();	

	K2_BeginTask();

	if (OwningComp)
	{
		if (TickInterval > 0.f)
		{
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimer(TimerHandle_TickTask, this, &UNarrativeTask::TickTask, TickInterval, true);
			}
		}

		//Fire the first tick off after BeginTask since begin task will usually init things that TickTask may need
		TickTask();
	}

	//BeginTask can complete the task so only add marker if 
	if (!IsComplete())
	{
		if (MarkerSettings.bAddNavigationMarker)
		{
			SpawnDefaultNavigationMarker();
		}
	}
}

void UNarrativeTask::TickTask_Implementation()
{

}

void UNarrativeTask::EndTask()
{
	if (bIsActive)
	{
		bIsActive = false;

		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(TimerHandle_TickTask);
		}

		if (SpawnedMarker)
		{
			SpawnedMarker->Destroy();
			SpawnedMarker = nullptr;
		}
		if (OldMarker)
		{
			OldMarker->Activate(true);
			OldMarker = nullptr;
		}

		K2_EndTask();
	}
}

void UNarrativeTask::SetProgress(const int32 NewProgress)
{
	SetProgressInternal(NewProgress);
}

void UNarrativeTask::SetProgressInternal(const int32 NewProgress, const bool bFromReplication /*= false*/)
{
	const bool bHasAuth = bFromReplication || (OwningComp && OwningComp->HasAuthority());

	if (OwningComp && bHasAuth)
	{
		/*
		//If we're loading a save, set the progress but don't bother updating any quest stuff except
		//for on the current state (this is why we also check bIsActive)*/
		if (OwningComp->bIsLoading)
		{
			CurrentProgress = FMath::Clamp(NewProgress, 0, RequiredQuantity);
			return;
		}

		if (bIsActive && NewProgress >= 0)
		{
			if (NewProgress != CurrentProgress)
			{
				const int32 OldProgress = CurrentProgress;

				CurrentProgress = FMath::Clamp(NewProgress, 0, RequiredQuantity);

				if (OwningQuest)
				{
					OwningQuest->OnQuestTaskProgressChanged(this, GetOwningBranch(), OldProgress, CurrentProgress);
				}

				//Dont use IsComplete() because it would check if the task is optional which we don't want 
				if (CurrentProgress >= RequiredQuantity)
				{
					K2_OnTaskCompleted();

					if (UQuestBranch* Branch = GetOwningBranch())
					{
						Branch->OnQuestTaskComplete(this);
					}
				}

			}
		}
	}
}

void UNarrativeTask::AddProgress(const int32 ProgressToAdd /*= 1*/)
{
	SetProgressInternal(CurrentProgress + ProgressToAdd);
}

bool UNarrativeTask::IsComplete() const
{
	return CurrentProgress >= RequiredQuantity || bOptional;
}

void UNarrativeTask::CompleteTask()
{
	SetProgressInternal(RequiredQuantity);
}

UQuestBranch* UNarrativeTask::GetOwningBranch() const
{
	return Cast<UQuestBranch>(GetOuter());
}

void UNarrativeTask::SpawnDefaultNavigationMarker()
{
	return SpawnNavigationMarker(GetNavigationMarkerLocation(), GetNavigationMarkerAttachActor());
}

void UNarrativeTask::SpawnNavigationMarker(const FVector& MarkerLocation, AActor* NavigationMarkerAttachActor /*= nullptr*/)
{
	if (!IsComplete() && bIsActive)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = OwningController;
		SpawnParams.bNoFail = true;

		FTransform SpawnTransform;
		const FVector NavMarkerLocation = MarkerLocation;
		SpawnTransform.SetTranslation(NavMarkerLocation);

		SpawnedMarker = GetWorld()->SpawnActorDeferred<ANavigationMarkerActor>(ANavigationMarkerActor::StaticClass(), SpawnTransform, OwningController);

		if (SpawnedMarker)
		{
			if (UNavigationMarkerComponent* NavMarkerComp = SpawnedMarker->GetMarkerComponent())
			{
				NavMarkerComp->SetDefaultDomains(MarkerSettings.MarkerDomains);

				if (MarkerSettings.NavigationMarkerIcon)
				{
					NavMarkerComp->DefaultMarkerSettings.LocationIcon = MarkerSettings.NavigationMarkerIcon;
				}

				SpawnedMarker->FinishSpawning(SpawnTransform);

				if (NavigationMarkerAttachActor)
				{
					SpawnedMarker->AttachToActor(NavigationMarkerAttachActor, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
					SpawnedMarker->SetActorRelativeLocation(NavMarkerLocation);

					//If we're attaching to something that already has a navigation marker, turn it off - we don't want markers on top of each other. We'll re-activate it when the marker is removed. 
					OldMarker = Cast<UNavigationMarkerComponent>(NavigationMarkerAttachActor->GetComponentByClass(UNavigationMarkerComponent::StaticClass()));

					if (OldMarker)
					{
						OldMarker->Deactivate();
					}
				}

				NavMarkerComp->DefaultMarkerSettings.LocationDisplayName = !MarkerSettings.MarkerDisplayText.IsEmptyOrWhitespace() ? MarkerSettings.MarkerDisplayText : GetTaskDescription();
				NavMarkerComp->DefaultMarkerSettings.IconTint = MarkerSettings.MarkerColor;

				NavMarkerComp->RefreshMarker();

				//If owning quest isn't tracked we dont want the marker to be visible yet 
				if (OwningQuest)
				{
					if (!OwningQuest->IsTracked())
					{
						NavMarkerComp->Deactivate();
					}
				}
			}
		}

	}
}

FVector UNarrativeTask::GetNavigationMarkerLocation_Implementation() const
{
	return MarkerSettings.MarkerLocation;
}

class AActor* UNarrativeTask::GetNavigationMarkerAttachActor_Implementation() const
{
	return nullptr;
}

FText UNarrativeTask::GetTaskDescription_Implementation() const
{
	if (!DescriptionOverride.IsEmptyOrWhitespace())
	{
		return DescriptionOverride;
	}
	  
	return LOCTEXT("DefaultNarrativeTaskDescription", "Task Description");
}

FText UNarrativeTask::GetTaskProgressText_Implementation() const
{
	return FText::Format(LOCTEXT("ProgressText", "({0}/{1})"), CurrentProgress, RequiredQuantity);
}

FText UNarrativeTask::GetTaskNodeDescription_Implementation() const
{
	return GetTaskDescription();
}

#undef LOCTEXT_NAMESPACE