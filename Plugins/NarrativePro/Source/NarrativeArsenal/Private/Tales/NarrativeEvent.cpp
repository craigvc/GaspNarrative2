// Copyright Narrative Tools 2022. 


#include "Tales/NarrativeEvent.h"
#include "Character/CharacterDefinition.h"
#include "Character/PlayerDefinition.h"
#include "AI/NPCDefinition.h"

UNarrativeEvent::UNarrativeEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bRefireOnLoad = true; 
	EventFilter = EEventFilter::EF_Anyone;
}

void UNarrativeEvent::ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent)
{
	
}

FString UNarrativeEvent::GetGraphDisplayText_Implementation()
{
	return GetName();
}

FText UNarrativeEvent::GetHintText_Implementation()
{
	return FText::GetEmpty();
}


TArray<class UCharacterDefinition*> UNarrativeEvent::GetCharacterTargets() const
{
	//Doing some pretty gross stuff in here efficiencywise but we're calling this infrequently on a tiny array size 
	if (EventFilter == EEventFilter::EF_Anyone)
	{
		return CharacterTargets;
	}
	else if(EventFilter == EEventFilter::EF_OnlyNPCs)
	{
		TArray<class UCharacterDefinition*> CharDefs;
		for (auto& NPCTarget : NPCTargets)
		{
			CharDefs.Add(NPCTarget);
		}
		return CharDefs;
	}
	else
	{
		TArray<class UCharacterDefinition*> CharDefs;
		for (auto& PlayerTarget : PlayerTargets)
		{
			CharDefs.Add(PlayerTarget);
		}
		return CharDefs;
	}
}
