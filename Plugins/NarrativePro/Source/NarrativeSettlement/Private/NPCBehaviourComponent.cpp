// Copyright Narrative Tools 2024. 


#include "NPCBehaviourComponent.h"
#include "Activities/NPCActivity.h"

// Sets default values for this component's properties
UNPCBehaviourComponent::UNPCBehaviourComponent()
{

}

bool UNPCBehaviourComponent::BeginActivity(class UNPCActivity* NewActivity)
{
	if (NewActivity)
	{
		if (CurrentActivity && OwnerAIC)
		{
			CurrentActivity->EndActivity(OwnerAIC);
		}

		CurrentActivity = NewActivity;

		if (CurrentActivity)
		{
			CurrentActivity->RunActivity(OwnerAIC);
		}

		return true;
	}

	return false;
}

// Called when the game starts
void UNPCBehaviourComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerAIC = CastChecked<AAIController>(GetOwner());
	
}

void UNPCBehaviourComponent::Load_Implementation()
{
	
}

void UNPCBehaviourComponent::PrepareForSave_Implementation()
{

}

