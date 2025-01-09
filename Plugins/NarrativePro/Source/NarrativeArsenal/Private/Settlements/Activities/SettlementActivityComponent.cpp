// Copyright Narrative Tools 2024. 


#include "Settlements/Activities/SettlementActivityComponent.h"
#include "Settlements/Activities/SettlementActivity.h"
#include "AI/NarrativeNPCSubsystem.h"
#include "ArsenalStatics.h"
#include <Engine/World.h>

// Sets default values for this component's properties
USettlementActivityComponent::USettlementActivityComponent()
{

}

// Called when the game starts
void USettlementActivityComponent::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerSettlement = Cast<ASettlement>(GetOwner());
}

#if WITH_GAMEPLAY_DEBUGGER
void USettlementActivityComponent::DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const
{

	UWorld* World = GetWorld();

	if (!World)
	{
		return;
	}

	ANarrativeGameState* GS = Cast<ANarrativeGameState>(World->GetGameState());

	if (!GS)
	{
		return;
	}

	const float TOD = GS->GetTimeOfDay();

	if (OwnerSettlement)
	{
		if (ActiveScheduledActivites.Num())
		{
			DebuggerCategory->AddTextLine(FString::Printf(TEXT("%s Scheduled Tasks: %d"), *OwnerSettlement->SettlementDisplayName.ToString(), ActiveScheduledActivites.Num()));

			for (auto& SA : ActiveScheduledActivites)
			{
				if (SA)
				{
					if (UArsenalStatics::IsTimeInRange(TOD, SA->StartTime, SA->EndTime))
					{
						DebuggerCategory->AddTextLine(FString::Printf(TEXT("    {green} %.0f-%.0f: %s"), SA->StartTime, SA->EndTime, *SA->DescribeBehavior()));
					}
					else
					{
						DebuggerCategory->AddTextLine(FString::Printf(TEXT("    %.0f-%.0f: %s"), SA->StartTime, SA->EndTime, *SA->DescribeBehavior()));
					}
				}
			}
		}
		else
		{
			DebuggerCategory->AddTextLine(FString::Printf(TEXT("%s Scheduled Tasks: none"), *OwnerSettlement->SettlementDisplayName.ToString()));
		}
	}
}

#endif 

USettlementActivity* USettlementActivityComponent::RunActivity(USettlementActivity* ActivityTemplate)
{
	if (ActivityTemplate)
	{
		if (USettlementActivity* NewActivity = DuplicateObject<USettlementActivity>(ActivityTemplate, this))
		{
			NewActivity->OwnerSettlement = OwnerSettlement;
			NewActivity->OwnerActivityComponent = this; 

			return StartActivity(NewActivity);
		}
	}

	return nullptr;
}

void USettlementActivityComponent::StopActivity(USettlementActivity* ActivityToStop)
{
	//First we need to tell the activities NPCs to stop their activities 
	if (ActivityToStop && CurrentActivities.Contains(ActivityToStop))
	{
		ActivityToStop->EndActivity();
		ActivityToStop->K2_EndActivity();
		CurrentActivities.Remove(ActivityToStop);
	}
}

void USettlementActivityComponent::SetActivitySchedule(class USettlementActivitySchedule* Schedule)
{
	if (Schedule)
	{
		ActivitySchedule = Schedule;

		ActiveScheduledActivites.Empty();

		for (auto& ScheduledActivityTemplate : ActivitySchedule->ScheduledActivities)
		{
			if (UScheduledBehavior_Settlement* ScheduledActivity = DuplicateObject<UScheduledBehavior_Settlement>(ScheduledActivityTemplate, this))
			{
				ScheduledActivity->SetOwner(OwnerSettlement);
				ScheduledActivity->BindBehavior(GetWorld());

				ActiveScheduledActivites.Add(ScheduledActivity);
			}
		}
	}
}

USettlementActivity* USettlementActivityComponent::StartActivity(USettlementActivity* SettlementActivity)
{
	if (SettlementActivity)
	{
		//Returns true if the NPCs look like they can run the activities in the settlement activity.
		if (SettlementActivity->CanRunActivity())
		{
			//Can still fail after starting - though - one of our NPCs can fail to initialize their blackboard properly, in which case we'll not run the settlement activity. 
			const bool bSucceeded = SettlementActivity->RunActivity();

			if (!bSucceeded)
			{
				SettlementActivity->EndActivity();
				return nullptr; 
			}

			UE_LOG(LogTemp, Warning, TEXT("Settlement activity %s ran, adding to currentactivities"), *GetNameSafe(SettlementActivity));
			CurrentActivities.Add(SettlementActivity);
			SettlementActivity->K2_RunActivity();

			return SettlementActivity;
		}
	}

	return nullptr;
}
//
//void UScheduledBehavior_StartSettlementActivity::SetSettlementActivity(const FSettlementScheduledActivity& InScheduledActivity)
//{
//	ScheduledActivity = InScheduledActivity;
//}
//
//bool UScheduledBehavior_StartSettlementActivity::GetTimeRange(float& Start, float& End) const
//{
//	Start = ScheduledActivity.StartTime;
//	End = ScheduledActivity.EndTime;
//	return true;
//}
//
//void UScheduledBehavior_StartSettlementActivity::OnHitTimeStart(float EventTime, float ActualTime, bool bFiredFromAdvancedTime)
//{
//	//Ensure activity hasn't already ended or is about to end - TODO will this handle 2400->0 shift correctly? 
//	if (ScheduledActivity.SettlementActivityTemplate && ActualTime < ScheduledActivity.EndTime)
//	{
//		if (USettlementActivityComponent* ActivityComp = Cast<USettlementActivityComponent>(GetOuter()))
//		{
//			UE_LOG(LogTemp, Warning, TEXT("Scheduled settlement Activity %s started"), *ScheduledActivity.SettlementActivityTemplate->GetActivityName().ToString());
//			
//			FActivityExecutionContext_ScheduledBySettlement ScheduleContext;
//			ScheduleContext.StartTime = EventTime;
//			ScheduleContext.TimeAtStart = ActualTime;
//
//			FInstancedStruct ContextStruct = FInstancedStruct::Make(ScheduleContext);
//			StartedActivity = ActivityComp->RunActivity(ScheduledActivity.SettlementActivityTemplate, ContextStruct);
//		}
//	}
//}
//
//void UScheduledBehavior_StartSettlementActivity::OnHitTimeEnd(float EventTime, float ActualTime, bool bFiredFromAdvancedTime)
//{
//	if (ScheduledActivity.SettlementActivityTemplate)
//	{
//		if (USettlementActivityComponent* ActivityComp = Cast<USettlementActivityComponent>(GetOuter()))
//		{
//			//TODO no way of stopping the started activity just yet.
//			UE_LOG(LogTemp, Warning, TEXT("Activity %s stopped"), *ScheduledActivity.SettlementActivityTemplate->GetActivityName().ToString());
//			if(StartedActivity)
//			{
//				ActivityComp->StopCurrentActivity(StartedActivity);
//			}
//		}
//	}
//}
