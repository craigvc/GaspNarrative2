// Copyright Narrative Tools 2024. 


#include "Settlements/Activities/SettlementActivity.h"
#include "AI/NarrativeNPCSubsystem.h"
#include "AI/Activities/NPCActivityComponent.h"
#include "Settlements/Activities/SettlementActivityComponent.h"

USettlementActivity::USettlementActivity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

bool USettlementActivity::CanRunActivity() const
{
	return true; 
}

bool USettlementActivity::RunActivity()
{
	//Settlement activity needs to take control of all its NPCs, and return true if it worked 
	if (OwnerSettlement)
	{
		//Could access these via owning settlement, but subsystem is easier and more reliable, plus maybe accessing NPCs outside this settlement is an interesting idea?
		//TODO think more about settlements controlling npcs outside settlement
		if (UNarrativeNPCSubsystem* NPCS = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
		{
			for (auto& NPCTarget : NPCTargets)
			{
				if (ANarrativeNPCCharacter* NPCChar = NPCS->FindNPC(NPCTarget.NPCDefinition))
				{
					if (UNPCActivityComponent* ActivityComponent = NPCChar->GetActivityComponent())
					{	
						//If any NPCs fail to run the activity and require succeed, don't run the settlement activity
						FString FailReason;

						UNPCGoalItem* Goal = ActivityComponent->AddGoal(NPCTarget.Goal);

						//If the NPCs didnt act on the goal then they had something better to do, and this settlement activity has failed. 
						if (ActivityComponent->GetCurrentActivityGoal() != NPCTarget.Goal && NPCTarget.bRequireSucceed)
						{
							ActivityComponent->RemoveGoal(Goal);
							return false;
						}

						IssuedGoals.Add(Goal);
					}
				}
				else if(NPCTarget.bRequireSucceed)
				{
					//If any NPC couldn't be found, don't run the activity - TODO we may want to allow, should make configurable. 
					return false;
				}
			}

			//Everything went smoothly. We're good to go!
			return true; 
		}
	}

	return false; 
}

bool USettlementActivity::EndActivity()
{
	if (UNarrativeNPCSubsystem* NPCS = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
	{
		for (auto& NPCTarget : NPCTargets)
		{
			if (ANarrativeNPCCharacter* NPCChar = NPCS->FindNPC(NPCTarget.NPCDefinition))
			{
				if (UNPCActivityComponent* ActivityComponent = NPCChar->GetActivityComponent())
				{
					ActivityComponent->RemoveGoal(NPCTarget.Goal);
				}
			}
		}
	}

	return true; 
}

FString USettlementActivity::DescribeActivity_Implementation() const
{
	FString ActivityDesc = ActivityName.ToString() + ": ";

	for (auto& Target : NPCTargets)
	{
		if (Target.NPCDefinition)
		{
			ActivityDesc += Target.NPCDefinition->NPCName.ToString() + ", ";
		}
	}

	return ActivityDesc;
}
