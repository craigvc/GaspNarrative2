// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "NPCActivitySchedule.generated.h"


//A scheduled behavior owned by an NPCs activity component 
UCLASS()
class NARRATIVEARSENAL_API UScheduledBehavior_NPC : public UScheduledBehavior
{
	GENERATED_BODY()
	
public:
	
	UScheduledBehavior_NPC();

	void SetOwner(class UNPCActivityComponent* InOwnerActivityComponent);

protected:

	//The component that owns this scheduled behavior 
	UPROPERTY()
	class UNPCActivityComponent* OwnerActivityComponent;

};

/**
 * UScheduledBehavior_AddNPCGoals create a goal and add it at the specified time. They then track it, and remove it at the EndTime. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UScheduledBehavior_AddNPCGoal : public UScheduledBehavior_NPC
{
	GENERATED_BODY()

public:

	UScheduledBehavior_AddNPCGoal();

	virtual void HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime) override;
	virtual void HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime) override;

	//Construct and provide the goal 
	UFUNCTION(BlueprintNativeEvent, Category = "NPC Goals")
	class UNPCGoalItem* ProvideGoal() const;
	virtual class UNPCGoalItem* ProvideGoal_Implementation() const;

protected:

	//Pointer to the goal we created so we can remove when behavior ends 
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add NPC Goal")
	UNPCGoalItem* ActiveGoal;

	//If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score. 
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add NPC Goal")
	float ScoreOverride;

	//Do we want a reselect
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add NPC Goal")
	bool bReselect;

};

/**
 * Contains a list of activites that an NPC should do throughout the day. 
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UNPCActivitySchedule : public UDataAsset
{
	GENERATED_BODY()

public:

	UNPCActivitySchedule();

	//The activities to perform should go in here. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "NPC Activity")
	TArray<TObjectPtr<UScheduledBehavior_NPC>> Activities;

};
