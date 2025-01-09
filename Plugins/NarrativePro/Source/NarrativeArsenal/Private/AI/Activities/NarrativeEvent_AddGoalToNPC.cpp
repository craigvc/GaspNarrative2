// Copyright Narrative Tools 2024. 


#include "AI/Activities/NarrativeEvent_AddGoalToNPC.h"
#include "AI/Activities/NPCActivityComponent.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"

UNarrativeEvent_AddGoalToNPC::UNarrativeEvent_AddGoalToNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	EventFilter = EEventFilter::EF_OnlyNPCs;
}

FString UNarrativeEvent_AddGoalToNPC::GetGraphDisplayText_Implementation()
{
	if (Goal)
	{
		FString ActivityName = Goal ? Goal->GetDebugString() : FString();
		FString NPCNames;
		for (auto& NPC : NPCTargets)
		{
			if (NPC)
			{
				NPCNames += (NPC->NPCName.ToString() + ',');
			}
		}
		return FString::Printf(TEXT("Add Goal: %s with score %f to %s"), *ActivityName, Goal->DefaultScore, *NPCNames);
	}

	return "";
}

void UNarrativeEvent_AddGoalToNPC::ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent)
{
	//Add the goal to the NPCs - in future it would be nice for owner UQuest to store the goal - we dont currently have a nice way to remove 
	if (ANarrativeNPCCharacter* NPC = Cast<ANarrativeNPCCharacter>(Pawn))
	{
		if (UNPCActivityComponent* ActivityComponent = NPC->GetActivityComponent())
		{
			if (IsValid(Goal))
			{
				ActivityComponent->AddGoal(Goal);
			}
		}
	}
}
