// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCActivity.h"
#include <AbilitySystemComponent.h>
#include "AI/Activities/NPCActivityComponent.h"

UNPCActivity::UNPCActivity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bIsInterruptable = false; 
}

void UNPCActivity::SetOwner(class ANarrativeNPCController* InOwnerController, class UNPCActivityComponent* InOwnerComp)
{
	check(InOwnerController && InOwnerComp);
	OwnerController = InOwnerController;
	OwnerActivityComponent = InOwnerComp;
}

bool UNPCActivity::SetupBlackboard_Implementation(class UBlackboardComponent* BB)
{
	return true;
}

float UNPCActivity::ScoreActivity(const FNPCGoalContainer& GoalContainer, UNPCGoalItem*& OutBestGoal, TArray<UNPCGoalItem*>& OutInvalidGoals) const
{
	//If we have no goals, return <0, this activity shouldnt be doable 
	if (GoalContainer.IsEmpty())
	{
		return -FLT_MAX;
	}

	float BestScore = 0.f;
	UNPCGoalItem* BestGoalItem = nullptr; 

	for (auto& Goal : GoalContainer.Goals)
	{
		const float GoalScore = ScoreGoalItem(Goal);

		if (GoalScore < 0.f)
		{
			OutInvalidGoals.Add(Goal);
		}
		else if (GoalScore > BestScore)
		{
			BestGoalItem = Goal;
			BestScore = GoalScore; 
		}
	}

	OutBestGoal = BestGoalItem;
	return BestScore; 
}

float UNPCActivity::ScoreGoalItem_Implementation(const UNPCGoalItem* Goal) const
{
	if (Goal)
	{
		//Check if goals lifetime is up 
		if (Goal->GoalLifetime > 0.f)
		{
			if (UWorld* World = GetWorld())
			{
				if (World->TimeSince(Goal->CreationTime) >= Goal->GoalLifetime)
				{
					return -1.f;
				}
			}
		}


		return Goal->GetGoalScore();
	}

	return -FLT_MAX; 
}

bool UNPCActivity::RunActivity()
{
	if (OwnerController && BehaviourTree)
	{	
		/**We need this because RunBehaviorTree wont let us restart the same tree, but we want that behavior.
		However, it may be possible to change activities, but keep the same tree. This solution is much simpler however.*/
		OwnerController->StopBehaviorTree();

		if (OwnerController->RunBehaviorTree(BehaviourTree))
		{
			if (SetupBlackboard(OwnerController->GetBlackboardComponent()))
			{
				if (UAbilitySystemComponent* ASC = OwnerController->GetAbilitySystemComponent())
				{
					ASC->AddLooseGameplayTags(OwnedTags, 1);
				}

				return true;
			}
			else
			{
				//Blackboard failed to initialize, stop the behaviour
				OwnerController->StopBehaviorTree();
			}
		}
	}

	return false; 
}

bool UNPCActivity::EndActivity()
{
	if (OwnerController)
	{
		if (UAbilitySystemComponent* ASC = OwnerController->GetAbilitySystemComponent())
		{
			ASC->RemoveLooseGameplayTags(OwnedTags, 1);
		}

		OwnerController->StopBehaviorTree();
	}

	return true; 
}

void UNPCActivity::RemoveActivityGoal()
{
	//Remove our goal, making the activity end 
	if (OwnerActivityComponent && ActivityGoal)
	{
		OwnerActivityComponent->RemoveGoal(ActivityGoal);
	}
}

