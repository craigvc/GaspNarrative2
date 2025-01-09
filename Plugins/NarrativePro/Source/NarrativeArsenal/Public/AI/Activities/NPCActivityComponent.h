// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NPCActivity.h"
#include "NarrativeSavableComponent.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "NPCGoal.h"
#include "NPCGoalItem.h"
#include "NPCActivityComponent.generated.h"


// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#if WITH_GAMEPLAY_DEBUGGER

#include "CoreMinimal.h"
#include "GameplayDebuggerCategory.h"

class AActor;
class APlayerController;

class FGameplayDebuggerCategory_ActivityComponent : public FGameplayDebuggerCategory
{
public:
	FGameplayDebuggerCategory_ActivityComponent();

	virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	virtual void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;

	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();

};

#endif // WITH_GAMEPLAY_DEBUGGER

/**Lives on the NPCCharacter and allows us to run NPC activities. For more info on NPC Actitites see the comment above UNPCActivity.  */
UCLASS( ClassGroup=(Narrative), meta=(BlueprintSpawnableComponent))
class NARRATIVEARSENAL_API UNPCActivityComponent : public UActorComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()

public:	

	friend class ANarrativeNPCController;

	// Sets default values for this component's properties
	UNPCActivityComponent();

	virtual void BeginPlay() override;

	virtual void Activate(bool bReset=false);
	virtual void Deactivate();

	virtual void Load_Implementation() override;
	virtual void PrepareForSave_Implementation() override; 

	#if ENABLE_VISUAL_LOG
	/** prepare blackboard snapshot for logs */
	virtual void DescribeSelfToVisLog(struct FVisualLogEntry* Snapshot) const;
#endif

#if WITH_GAMEPLAY_DEBUGGER
	virtual void DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const;
#endif // WITH_GAMEPLAY_DEBUGGER

	/*Scores our activities, and selects the best one, along with the best goal for that activity. 
	@param bCheckNew will potentially end CurrentActivity if a better one is found, otherwise if a valid current activity is running
	that will be kept instead.
	
	@return whether a new activity was selected or not 
	*/
	UFUNCTION(BlueprintCallable, Category = "Activities")
	bool PerformActivitySelection(bool bCheckNew=false);

	//Check if we can run an activity, without actually running it. 
	bool CanRunActivity(UNPCActivity* ActivityTemplate,  UNPCGoalItem* Goal, FString& FailReason) const;

	/** Start the given activity, and pass the goal to it. Goal can be nullptr  */
	UFUNCTION(BlueprintCallable, Category = "Activities")
	bool RunActivity(UNPCActivity* ActivityTemplate, UNPCGoalItem* Goal, FString& FailReason);

	//Set our activity schedule
	UFUNCTION(BlueprintCallable, Category = "Activities")
	void SetActivitySchedule(class UNPCActivitySchedule* Schedule);

	//Set our activity config
	UFUNCTION(BlueprintCallable, Category = "Activities")
	void SetActivityConfiguration(class UNPCActivityConfiguration* Config);

	//Stop the currently running activity
	UFUNCTION(BlueprintCallable, Category = "Activities")
	void StopCurrentActivity();

	//get our current activity
	UFUNCTION(BlueprintPure, Category = "Activities")
	FORCEINLINE UNPCActivity* GetCurrentActivity() const {return CurrentActivity;};

	//get our current activities goal 
	UFUNCTION(BlueprintPure, Category = "Activities")
	FORCEINLINE UNPCGoalItem* GetCurrentActivityGoal() const {return CurrentActivity ? CurrentActivity->ActivityGoal : nullptr;};

	//GOALS

	/*Add the given goal to the goal map using its goaltag.Return a handle to the created goal
	
	@param bTriggerReselect whether you want to ask the activity component to reselect its behavior after adding this goal. 
	*/
	UFUNCTION(BlueprintCallable, Category = "Goals")
	UNPCGoalItem* AddGoal(UNPCGoalItem* NewGoal, const bool bTriggerReselect=false);

	//Remove the goal with the given handle 
	UFUNCTION(BlueprintCallable, Category = "Goals")
	void RemoveGoal(UNPCGoalItem* GoalToRemove);

	//Grab all created goals of the given type
	UFUNCTION(BlueprintPure, Category = "Goals")
	FNPCGoalContainer GetGoals(const TSubclassOf<UNPCGoalItem>& GoalType);

	//Grab a goal via its key 
	UFUNCTION(BlueprintPure, Category = "Goals")
	UNPCGoalItem* GetGoalByKey(const TSubclassOf<UNPCGoalItem>& GoalType, const UObject* Key);

protected:

	bool StartActivity(UNPCActivity* Activity,  UNPCGoalItem* Goal, FString& FailReason);

	//Our controller, cached
	UPROPERTY(EditDefaultsOnly, Category = "Activities")
	TObjectPtr<ANarrativeNPCController> OwnerController;

	//The fallback activity to use if we cant find one to run based on our goals. 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TObjectPtr<class UNPCActivity> FallbackActivity;

	//Our scheduled activities go in here. 
	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Activities")
	TObjectPtr<class UNPCActivitySchedule> ActivitySchedule;

	//Our activity configuration goes in here
	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Activities")
	TObjectPtr<class UNPCActivityConfiguration> ActivityConfiguration;

	//The activities the NPC can run. 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TArray<TObjectPtr<class UActivityGroup>> ActivityGroups; 

	//Our goal generators we'll use to create goals - goals can also be explicitly added 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TArray<TObjectPtr<class UNPCGoalGenerator>> GoalGenerators; 

	//Our goals we currently have - we use a map to allow quick access to goals by their class 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Activity Group")
	TMap<TSubclassOf<UNPCGoalItem>, FNPCGoalContainer> Goals; 

	UPROPERTY() 
	TArray<TObjectPtr<class UScheduledBehavior>> ActiveScheduledActivites;

	//We now store these on NPCCharacter as a workaround as this component lives on AIC which isn't a savable actor - NPCChar is however
	///**Some goals need to be serialized to disk, for example if our player asks an NPC to follow them, the NPC needs to
	//remember that the player told them that when our game loads back in. */
	UPROPERTY(SaveGame)
	TArray<FSavedGoalItem> SavedGoals;

	//The activity we're currently running
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Activities")
	TObjectPtr<UNPCActivity> CurrentActivity;

//public:
//
//	virtual void GetSaveGoals(TArray<FSavedGoalItem>& OutSaveGoals);
//	virtual void LoadSavedGoals(const TArray<FSavedGoalItem>& OutSaveGoals);

};
