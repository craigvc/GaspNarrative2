// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCGoalItem.h"

UNPCGoalItem::UNPCGoalItem(const FObjectInitializer& ObjectInitializer)
{
	GoalLifetime = -1.f;
	DefaultScore = 1.f;
	IntendedTODStartTime = -1.f;
}

float UNPCGoalItem::GetCatchupTime() const
{	
	//An intended start time wasn't set, we should assume this goal was supposed to start at the normal time 
	if (IntendedTODStartTime < 0.f || TODCreationTime == IntendedTODStartTime)
	{
		return 0.f;
	}
	else
	{	
		//Do we want to use current time of day, or TODCreationTime? 
		//If creation time is less than start time we must have changed over to a new day, so add 2400 to counteract
		if (TODCreationTime < IntendedTODStartTime)
		{
			return TODCreationTime + 2400.f - IntendedTODStartTime;
		}
		else
		{
			//If we wanted goal to start at 2000, and the time is 2200, catchup time will be 200 for example. TODO we need to handle time going over 2400 and looping back 
			return TODCreationTime - IntendedTODStartTime;
		}
	}
}

FString UNPCGoalItem::GetDebugString_Implementation() const
{
	return GetName();
}

UObject* UNPCGoalItem::GetGoalKey_Implementation() const
{
	return GoalKey;
}

float UNPCGoalItem::GetGoalScore_Implementation() const
{
	return DefaultScore;
}

bool UNPCGoalItem::ShouldCleanup_Implementation() const
{
	return false; 
}

void UNPCGoalItem::PrepareForSave_Implementation()
{

}

void UNPCGoalItem::OnLoaded_Implementation()
{

}
