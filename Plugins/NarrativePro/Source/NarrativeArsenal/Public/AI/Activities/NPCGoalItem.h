// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Templates/SubclassOf.h>
#include "NPCGoalItem.generated.h"

/**
 * GoalItems are created inside goals to describe the available items in a goal. For example, an Attack Goal could 
 * have a Attack GoalItem containing the target we need to attack, or an Interact goal could contain potential items
 * in the world we can interact with. 
 * 
 * For more information, please check out the docs: https://docs.narrativetools.io/
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UNPCGoalItem : public UObject
{
	GENERATED_BODY()
	
public:

	UNPCGoalItem(const FObjectInitializer& ObjectInitializer);

	//The NPCController that owns this goal
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC Goal")
	TObjectPtr<class ANarrativeNPCController> OwnerController; 

	//This object acts as a key, and can be used to access the goal later - it will also prevent goals with the same GoalKey from being added. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC Goal", SaveGame, meta = (ExposeOnSpawn=true))
	TObjectPtr<class UObject> GoalKey;

	//The default score this goal will be given if its activity doesn't override the ScoreGoal function 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "NPC Goal", meta = (ExposeOnSpawn=true))
	float DefaultScore; 

	//Should the goal and any SaveGame variables on it be saved to disk? 
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  SaveGame, Category = "NPC Goal", meta = (ExposeOnSpawn=true))
	bool bSaveGoal; 

	//The Time of day the goal was intended to start at - used for goals that need to "Catch up" ie if we enter game at 2200 and NPC is supposed to start sleeping at 2000 we can tele them right into bed rather than making the NPC run to bed. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  SaveGame, Category = "NPC Goal", meta = (ExposeOnSpawn=true))
	float IntendedTODStartTime;

	//Goal Expiry time. If less than zero goal will never expire and needs to be removed either by scoring < 0 or manually removed via RemoveGoal()
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  SaveGame, Category = "NPC Goal", meta = (ExposeOnSpawn=true))
	float GoalLifetime;

	//Time the goal was created
	UPROPERTY(BlueprintReadOnly, SaveGame, Category = "NPC Goal")
	float CreationTime;

	//The ingame time of day when the goal was created. 
	UPROPERTY(BlueprintReadOnly, SaveGame, Category = "NPC Goal")
	float TODCreationTime;

	//Return the amount of time that has passed since the goal was supposed to have been started if the goal started late, ie if we began play at 1500 and a scheduled goal for 1200-1700 added the goal late, our catchup time would be 300. 
	UFUNCTION(BlueprintPure, Category = "NPC Goal")
	virtual float GetCatchupTime() const;

	//Return a debug string explaining what the goal is 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	FString GetDebugString() const;
	virtual FString GetDebugString_Implementation() const;

	//Returning a valid object will act as a key - you can access the goal later via this object, and we'll prevent goals with the same key from being added in future 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	UObject* GetGoalKey() const;
	virtual UObject* GetGoalKey_Implementation() const;

	//Return a score for the goal - this will be used to grab the best goal to act on for each activity
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	float GetGoalScore() const;
	virtual float GetGoalScore_Implementation() const;

	//Return whether the goal has become invalid and should be removed, ie if an AttackGoals target has died. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	bool ShouldCleanup() const;
	virtual bool ShouldCleanup_Implementation() const;

	//Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	void PrepareForSave();
	virtual void PrepareForSave_Implementation();

	//Do something after our savegame vars have been loaded - this might mean grabbing an actor using a savegame var etc 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	void OnLoaded();
	virtual void OnLoaded_Implementation();

protected:

	// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (HasAllFlags(RF_ClassDefaultObject))
		{
			// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
			return nullptr;
		}

		UObject* Outer = GetOuter();

		while (Outer)
		{
			UWorld* World = Outer->GetWorld();
			if (World)
			{
				return World;
			}

			Outer = Outer->GetOuter();
		}

		return nullptr;
	}

};



//A saved NPC Activity - which consists of the class and the uint8 data to serialize
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FSavedGoalItem
{

	GENERATED_USTRUCT_BODY()

	FSavedGoalItem(){};

	UPROPERTY(SaveGame)
	TSubclassOf<UNPCGoalItem> Class;

	//Any savegame variables on the goal are stored in here 
	UPROPERTY(SaveGame)
	TArray<uint8> Data;
};

//Allows blueprints to create instanced goal variables! 
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FInstancedNPCGoalItem
{
	GENERATED_BODY()


	FInstancedNPCGoalItem(){};

	//The instanced goal
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Goal")
	TObjectPtr<UNPCGoalItem> Goal; 

};

//Holds a set of goals
USTRUCT(BlueprintType)
struct FNPCGoalContainer
{
	
	GENERATED_BODY()

	FNPCGoalContainer(){};

	//The goals in the set 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "NPC Goal")
	TArray<UNPCGoalItem*> Goals;

	//The goals, but mapped via their unique object 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "NPC Goal")
	TMap<UObject*, UNPCGoalItem*> GoalUniqueObjectMap;

	bool IsEmpty() const {return Goals.IsEmpty();}
};

