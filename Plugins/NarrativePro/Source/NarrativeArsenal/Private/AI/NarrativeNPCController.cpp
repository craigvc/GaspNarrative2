// Copyright Narrative Tools 2024. 


#include "AI/NarrativeNPCController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "UnrealFramework/NarrativeCharacter.h"

ANarrativeNPCController::ANarrativeNPCController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

class UAbilitySystemComponent* ANarrativeNPCController::GetAbilitySystemComponent() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetAbilitySystemComponent();
	}

	return nullptr;
}

void ANarrativeNPCController::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		NChar->SetGenericTeamId(NewTeamID);
	}
}

FGenericTeamId ANarrativeNPCController::GetGenericTeamId() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetGenericTeamId();
	}

	return FGenericTeamId::NoTeam;
}

ETeamAttitude::Type ANarrativeNPCController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetTeamAttitudeTowards(Other);
	}

	return ETeamAttitude::Neutral;
}

class UBehaviorTree* ANarrativeNPCController::GetCurrentTree()
{
	if (UBehaviorTreeComponent* BTComp = Cast<UBehaviorTreeComponent>(BrainComponent))
	{
		return BTComp->GetCurrentTree();
	}

	return nullptr; 
}
