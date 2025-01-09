// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Tales/NarrativeEvent.h"
#include "NPCActivity.h"
#include "NarrativeEvent_AddGoalToNPC.generated.h"

/**
 * Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back
 * to the created goal, meaning you can keep a reference to the goal, update it, or remove it. 
 */
UCLASS(DisplayName="Add Goal To NPC")
class NARRATIVEARSENAL_API UNarrativeEvent_AddGoalToNPC : public UNarrativeEvent
{
	GENERATED_BODY()

	UNarrativeEvent_AddGoalToNPC(const FObjectInitializer& ObjectInitializer);

	//The goal to send to the NPC 
	UPROPERTY(Instanced, EditDefaultsOnly, Category = "NPC Activity")
	TObjectPtr<UNPCGoalItem> Goal; 

	virtual void ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent) override;
	virtual FString GetGraphDisplayText_Implementation() override;
};
