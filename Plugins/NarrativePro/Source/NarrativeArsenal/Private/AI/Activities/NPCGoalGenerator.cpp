// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCGoalGenerator.h"
#include "AI/Activities/NPCActivityComponent.h"

UNPCGoalGenerator::UNPCGoalGenerator(const FObjectInitializer& ObjectInitializer)
{

}

void UNPCGoalGenerator::Initialize(class ANarrativeNPCController* InOwnerController, class UNPCActivityComponent* InOwnerComp)
{
	check(InOwnerController && InOwnerComp);
	OwnerController = InOwnerController;
	OwnerActivityComponent = InOwnerComp;

	InitializeGoalGenerator();
}

void UNPCGoalGenerator::InitializeGoalGenerator_Implementation()
{

}

UNPCGoalItem* UNPCGoalGenerator::AddGoalItem(class UNPCGoalItem* Goal, const bool bTriggerReselect)
{
	if (OwnerActivityComponent)
	{
		return OwnerActivityComponent->AddGoal(Goal, bTriggerReselect);
	}

	return nullptr; 
}

void UNPCGoalGenerator::RemoveGoalItem(class UNPCGoalItem* Goal)
{
	if (OwnerActivityComponent)
	{
		OwnerActivityComponent->RemoveGoal(Goal);
	}
}