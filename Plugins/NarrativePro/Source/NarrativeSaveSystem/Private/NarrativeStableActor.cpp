// Copyright Narrative Tools 2024. 


#include "NarrativeStableActor.h"

FGuid INarrativeStableActor::GetActorGUID_Implementation() const
{
	checkf(false, TEXT("Actor was marked stable but doesn't implement GetActorGUID() interface function"));
	return FGuid();
}
