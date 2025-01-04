// Copyright Narrative Tools 2024. 


#include "Activities/NPCActivity.h"
#include <BehaviorTree/BlackboardComponent.h>
#include <BrainComponent.h>

static const FName NAME_ActivityLocation("ActivityLocation");
static const FName NAME_ActivityRotation("ActivityRotation");
static const FName NAME_Activity("Activity");

UNPCActivity::UNPCActivity()
{

}

void UNPCActivity::SetupBlackboard_Implementation(UBlackboardComponent* BB)
{
	
}

FTransform UNPCActivity::GetActivityTransform_Implementation()
{
	return ActivityTransform;
}

bool UNPCActivity::RunActivity(class AAIController* AIC)
{
	if (AIC)
	{
		AIController = AIC;

		if (AIC->RunBehaviorTree(ActivityBehaviourTree))
		{
			if (UBlackboardComponent* BB = AIC->GetBlackboardComponent())
			{
				SetupBlackboard(BB);

				//Set these here so overriding SetupBlackboard doesn't require a parent function call
				BB->SetValueAsObject(NAME_Activity, this);

				const FTransform Transform = GetActivityTransform();

				BB->SetValueAsVector(NAME_ActivityLocation, Transform.GetLocation());
				BB->SetValueAsRotator(NAME_ActivityRotation, Transform.GetRotation().Rotator());
			}

			return true;
		}
	}
	return false;
}

bool UNPCActivity::EndActivity(class AAIController* AIC)
{
	if (AIC)
	{
		if (UBrainComponent* Brain = AIC->GetBrainComponent())
		{
			Brain->StopLogic("EndActivity");
			return true;
		}
	}
	return false;
}
