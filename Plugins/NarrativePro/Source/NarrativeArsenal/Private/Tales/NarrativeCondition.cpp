// Copyright Narrative Tools 2022. 


#include "Tales/NarrativeCondition.h"


bool UNarrativeCondition::CheckCondition_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent)
{
	return true;
}

FString UNarrativeCondition::GetGraphDisplayText_Implementation()
{
	return GetName();
}
