// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include <AbilitySystemInterface.h>
#include "Teams/NarrativeTeamAgentInterface.h"
#include "NarrativeNPCController.generated.h"

/**
 * NPC Controller for NPCs spawned by the Narrative NPC subsystem. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeNPCController : public AAIController, public IAbilitySystemInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	ANarrativeNPCController(const FObjectInitializer& ObjectInitializer);

	//Interfaces 
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;
	FGenericTeamId GetGenericTeamId() const override;
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

	//Tells the AI controller it needs to destroy itself and its pawn. 
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "NarrativeNPCController")
	void CleanUp(const float RemovePawnDelay);

 
	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	class UBehaviorTree* GetCurrentTree();
};
