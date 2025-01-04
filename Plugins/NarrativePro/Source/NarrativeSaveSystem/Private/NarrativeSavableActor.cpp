// Copyright Narrative Tools 2024. 


#include "NarrativeSavableActor.h"

void INarrativeSavableActor::PrepareForSave_Implementation()
{

}

void INarrativeSavableActor::Load_Implementation()
{

}

bool INarrativeSavableActor::ShouldRespawn_Implementation() const
{
	return true; 
}

FGuid INarrativeSavableActor::GetActorGUID_Implementation() const 
{
	checkf(false, TEXT("Actor was marked INarrativeSavableActor but doesn't implement GetActorGUID() interface function"));
	return FGuid();
}

void INarrativeSavableActor::SetActorGUID_Implementation(const FGuid& SavedGUID)
{
	//checkf(false, TEXT("Actor was marked INarrativeSavableActor but doesn't implement SetActorGUID() interface function "));
}
