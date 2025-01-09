// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "SettlementActivitySchedule.generated.h"

USTRUCT(BlueprintType)
struct FSettlementScheduledActivity
{
	GENERATED_BODY()

	FSettlementScheduledActivity()
	{
		StartTime = 1200.f;
		EndTime = 1400.f;
	};

	//When the activity starts and ends 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly,  Category = "Scheduled Activity", meta = (ClampMin=0, ClampMax=2400))
	float StartTime;

	//When the activity ends 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly,  Category = "Scheduled Activity", meta = (ClampMin=0, ClampMax=2400))
	float EndTime;

	//The settlement activity to run at the specified time 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Scheduled Activity")
	TObjectPtr<class USettlementActivity> SettlementActivityTemplate; 
};

//A scheduled behavior owned by a settlememt
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UScheduledBehavior_Settlement : public UScheduledBehavior
{
	GENERATED_BODY()
	
public:
	
	UScheduledBehavior_Settlement();

	void SetOwner(class ASettlement* InOwnerSettlement);

protected:

	//The component that owns this scheduled behavior 
	UPROPERTY()
	class ASettlement* OwnerSettlement;

};

/**
 * Tries adding a settlement activity at the given time, removes when done. 
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UScheduledBehavior_RunSettlementActivity : public UScheduledBehavior_Settlement
{
	GENERATED_BODY()
	
public:

	UScheduledBehavior_RunSettlementActivity();

	virtual void HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime) override;
	virtual void HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime) override;
	virtual FString DescribeBehavior_Implementation() const override;

protected:

	//The template we'll use to construct the activity
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "Scheduled Behavior - Add Settlement Goal")
	USettlementActivity* ActivityTemplate;

	//Pointer to the settlement activity we've started so we can stop it later 
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add Settlement Goal")
	USettlementActivity* ActiveActivity;

	//If > 0, we'll assign this score to the created goal. Otherwise we'll use the created goals score. 
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add Settlement Goal")
	float ScoreOverride;

	//Do we want a reselect
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior - Add Settlement Goal")
	bool bReselect;

};

/**
 * Holds a list of events to execute that effect the settlement throughout the day. 
 */
UCLASS()
class NARRATIVEARSENAL_API USettlementActivitySchedule : public UDataAsset
{
	GENERATED_BODY()
	
public:

	USettlementActivitySchedule(const FObjectInitializer& ObjectInitializer);

	//The activities the settlement should run 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "Scheduled Activity")
	TArray<TObjectPtr<UScheduledBehavior_Settlement>> ScheduledActivities; 

};
