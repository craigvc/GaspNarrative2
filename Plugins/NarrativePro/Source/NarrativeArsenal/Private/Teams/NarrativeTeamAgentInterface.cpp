// Copyright Narrative Tools 2024. 


#include "Teams/NarrativeTeamAgentInterface.h"
#include "UnrealFramework/NarrativeGameState.h"


UNarrativeTeamAgentInterface::UNarrativeTeamAgentInterface(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

ETeamAttitude::Type INarrativeTeamAgentInterface::GetTeamAttitudeTowards(const AActor& Other) const
{
	//By default ask the game state what attitude our faction has towards the target 
	if(const INarrativeTeamAgentInterface* OtherTeamAgent = Cast<const INarrativeTeamAgentInterface>(&Other))
	{
		if (const AActor* OtherActor = &Other)
		{
			if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(OtherActor->GetWorld()->GetGameState()))
			{
				return GS->GetFactionsAttitudeTowardsFactions(GetFactions(), OtherTeamAgent->GetFactions());
			}
		}
	}

	return ETeamAttitude::Neutral;
}
