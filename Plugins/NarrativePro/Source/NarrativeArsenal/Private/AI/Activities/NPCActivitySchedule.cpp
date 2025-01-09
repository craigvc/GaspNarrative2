// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCActivitySchedule.h"
#include "AI/Activities/NPCActivityComponent.h"

UNPCActivitySchedule::UNPCActivitySchedule()
{

}

void UScheduledBehavior_AddNPCGoal::HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (OwnerActivityComponent)
	{
		if (UNPCGoalItem* OurGoal = ProvideGoal())
		{
			if (ScoreOverride > 0.f)
			{
				OurGoal->DefaultScore = ScoreOverride;
			}

			//Scheduled goals should never save - when we re-open the game the schedule will add the goal again 
			OurGoal->bSaveGoal = false;

			//Tell the goal when we intended for it to start, so it can catchup if it needs 
			OurGoal->IntendedTODStartTime = EventTime;

			ActiveGoal = OwnerActivityComponent->AddGoal(OurGoal, bReselect);
		}
	}
}

void UScheduledBehavior_AddNPCGoal::HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (OwnerActivityComponent)
	{
		if (ActiveGoal)
		{
			OwnerActivityComponent->RemoveGoal(ActiveGoal);
		}
	}
}

UScheduledBehavior_AddNPCGoal::UScheduledBehavior_AddNPCGoal()
{
	ScoreOverride = -1.f;
}

class UNPCGoalItem* UScheduledBehavior_AddNPCGoal::ProvideGoal_Implementation() const
{
	return nullptr; 
}

UScheduledBehavior_NPC::UScheduledBehavior_NPC()
{

}

void UScheduledBehavior_NPC::SetOwner(class UNPCActivityComponent* InOwnerActivityComponent)
{
	OwnerActivityComponent = InOwnerActivityComponent;
}
