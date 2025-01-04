// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeGameModeBase.h"

ANarrativeGameModeBase::ANarrativeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void ANarrativeGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}