// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/NarrativeNPCController.h"
#include <UObject/Object.h>
#include "UnrealFramework/NarrativePlayerController.h"
#include "NarrativeActivityBase.h"
#include "NPCGoalItem.h"
#include "NPCActivity.generated.h"

//A saved NPC Activity - which consists of the class and the uint8 data to serialize
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FSavedNPCActivity
{

	GENERATED_USTRUCT_BODY()

	FSavedNPCActivity(){};

	UPROPERTY(SaveGame)
	TSubclassOf<UNPCActivity> Class;

	UPROPERTY(SaveGame)
	TArray<uint8> Data;
};

/**
 * NPC Activities essentially wrap a Behaviour tree, and stores the default variables the tree uses. The current activity lives on
 * the NPCs NPCActivityComponent, and can serialize its state to disk. That way when we load back in our behavior is remembered if we desire this. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UNPCActivity : public UNarrativeActivityBase
{
	GENERATED_BODY()
	
public:

	UNPCActivity(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintPure, Category = "NPC Activity")
	FORCEINLINE bool IsInterruptable() const {return bIsInterruptable;};

	void SetOwner(class ANarrativeNPCController* OwnerController, class UNPCActivityComponent* OwnerComp);

protected:

	friend class UNPCActivityComponent;

	/**Once the activity starts, this will be called to try and set up the blackboard. You can return false
	if the blackboard wasn't able to be setup and RunActivity will then return false to let the call know it failed. */
	UFUNCTION(BlueprintNativeEvent)
	bool SetupBlackboard(class UBlackboardComponent* BB);
	virtual bool SetupBlackboard_Implementation(class UBlackboardComponent* BB);
	
	/** Score the activity - the activity with the best score will be ran using its BestGoal. Invalid goals will also be removed.  */
	virtual float ScoreActivity(const FNPCGoalContainer& GoalContainer, UNPCGoalItem*& OutBestGoal, TArray<UNPCGoalItem*>& OutInvalidGoals) const;

	/**Override this if you want to ignore Goal.GetScore() and provide a custom score. IE you may want a SitOnCouch goal 
	to score higher if the owner has low stamina, but lower or zero if we have enough stamina. */
	UFUNCTION(BlueprintNativeEvent)
	float ScoreGoalItem(const UNPCGoalItem* Goal) const;
	virtual float ScoreGoalItem_Implementation(const UNPCGoalItem* Goal) const;

	//Tell our owner controller to start/stop the activity
	virtual bool RunActivity() override;
	virtual bool EndActivity() override;

	UFUNCTION(BlueprintCallable, Category = "NPC Activity")
	virtual void RemoveActivityGoal();

	//We cache the AI controller 
	UPROPERTY(BlueprintReadOnly, Transient, Category = "NPC Activity")
	TObjectPtr<ANarrativeNPCController> OwnerController;

	UPROPERTY(BlueprintReadOnly, Transient, Category = "NPC Activity")
	TObjectPtr<class UNPCActivityComponent> OwnerActivityComponent;

	//The goal this activity is operating on - for example AttackGoal for AttackActivity, etc. This can null if your activity doesn't need a goal 
	UPROPERTY(BlueprintReadOnly, Transient, Category = "NPC Activity")
	TObjectPtr<class UNPCGoalItem> ActivityGoal;

	//The behaviour tree the NPC needs to run
	UPROPERTY(EditDefaultsOnly, Category = "NPC Activity")
	TObjectPtr<class UBehaviorTree> BehaviourTree;

	//The goal class this activity supports, if it supports one. You can leave this empty if your activity doesn't need a goal, eg Idle, etc. 
	UPROPERTY(EditDefaultsOnly, Category = "NPC Activity")
	TSubclassOf<class UNPCGoalItem> SupportedGoalType;

	//Whether we're allowed to interrupt this activity or not 
	UPROPERTY(EditDefaultsOnly, Category = "NPC Activity")
	bool bIsInterruptable;
	
};
