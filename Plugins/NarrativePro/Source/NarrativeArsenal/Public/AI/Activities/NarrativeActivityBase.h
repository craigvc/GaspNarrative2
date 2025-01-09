// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <GameplayTagContainer.h>
#include "NarrativeActivityBase.generated.h"

//Because activities can be executed from many different sources, we pass a child of this struct along as context when we run an activity so we know why the activity is being ran, what thing is trying to run the activity, etc. 
USTRUCT(BlueprintType)
struct FActivityExecutionContext
{
	GENERATED_BODY()

	FActivityExecutionContext(){};
};

//Context for an NPCs schedule running the activity 
USTRUCT(BlueprintType)
struct FActivityExecutionContext_Scheduled : public FActivityExecutionContext
{
	GENERATED_BODY()

public:

	FActivityExecutionContext_Scheduled() : FActivityExecutionContext()
	{
		StartTime = 0.f;
		TimeAtStart = 0.f;
		bStartedFromAdvanceTime = false; 

	};

	//When the activity starts and ends 
	UPROPERTY(BlueprintReadOnly,  Category = "Scheduled Activity")
	float StartTime;

	//When the activity ends 
	UPROPERTY(BlueprintReadOnly, Category = "Scheduled Activity")
	float TimeAtStart;

	//Whether the activity was started from advance time
	UPROPERTY(BlueprintReadOnly,  Category = "Scheduled Activity")
	bool bStartedFromAdvanceTime;
};


/**
 * Base class for settlement and NPC activities. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UNarrativeActivityBase : public UObject
{
	GENERATED_BODY()
	
public:

	UNarrativeActivityBase(const FObjectInitializer& ObjectInitializer);

	//Debugging tools use this to grab a description of the behavior
	UFUNCTION(BlueprintNativeEvent, Category = "Activity Base")
	FString DescribeActivity() const;
	virtual FString DescribeActivity_Implementation() const;

	virtual FText GetActivityName() const;

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

	/**Allows the behavior to specify whether it can be ran. For example we may have a MoveToLocation activity - that would want to check
	the NPC is not falling using this function and deny the activity to run if we were falling. */
	UFUNCTION(BlueprintNativeEvent, Category = "NPC Activity")
	bool CanRunActivity(FString& FailReason) const;
	virtual bool CanRunActivity_Implementation(FString& FailReason) const;

protected: 

	//Called when activity starts and ends 
	virtual bool RunActivity();

	//Ends the activity - the activity component can then select a new one for us to do. 
	UFUNCTION(BlueprintCallable, Category = "NPC Activity")
	virtual bool EndActivity();

	//Called after the tree has started running and blackboard values have been set. Do anything you need in here! 
	UFUNCTION(BlueprintImplementableEvent, Category = "NPC Activity")
	void K2_RunActivity();

	//Called after the tree has finished running.
	UFUNCTION(BlueprintImplementableEvent, Category = "NPC Activity")
	void K2_EndActivity();
	
	//The name of the this activity
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Activity")
	FText ActivityName;

	//The tags we'll grant the NPC/Settlement when this ability starts 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Activity")
	FGameplayTagContainer OwnedTags;
	
	//We'll block the activity from running if the has any of these tags 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Activity")
	FGameplayTagContainer BlockTags;

	//We'll require these tags to be on the owner before we run the activity 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Activity")
	FGameplayTagContainer RequireTags;
};