// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NarrativeSavableActor.h"
#include "Teams/FactionDefinition.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include <GameplayTagContainer.h>
#include <Kismet/BlueprintAsyncActionBase.h>
#include "NarrativeGameState.generated.h"

// Delegate signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFactionAttitudeChanged, FGameplayTag, Faction, FGameplayTag, OtherFaction, ETeamAttitude::Type, NewAttitude);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTimeOfDayEvent, float, EventTime, float, TimeAtFire, float, TimePassedDelta, bool, bFiredFromAdvanceTime);



//This handy node will wait until  a given time of day is reached and tell you when the time is reached. 
UCLASS() 
class NARRATIVEARSENAL_API UAsyncAction_WaitTimeOfDay : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/** Execute the actual load */
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "Time Of Day", WorldContext = "WorldContextObject"))
	static UAsyncAction_WaitTimeOfDay* WaitTimeOfDay(UObject* WorldContextObject, float Time);

	//We need to check when the NPC was spawned in by the subsystem, we bind this to sub
	UFUNCTION()
	void OnHitTimeOfDay(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

	UPROPERTY(BlueprintAssignable)
	FTimeOfDayEvent OnTimeReached;

	int32 TimeEventHandle;
	float Time;
	TWeakObjectPtr<UWorld> World;
};

//This handy node will tell you when a given time range begins and ends. 
UCLASS() 
class NARRATIVEARSENAL_API UAsyncAction_WaitTimeRange : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/** Execute the actual load */
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "Time Of Day", WorldContext = "WorldContextObject"))
	static UAsyncAction_WaitTimeRange* WaitTimeRange(UObject* WorldContextObject, float TimeStart, float TimeEnd);

	//We need to check when the NPC was spawned in by the subsystem, we bind this to sub
	UFUNCTION()
	void OnHitTimeStart(float EventTime, float ActualTime,float TimePassedDelta, bool bFiredFromAdvancedTime);

	UFUNCTION()
	void OnHitTimeEnd(float EventTime, float ActualTime, float TimePassedDelta,bool bFiredFromAdvancedTime);

	UPROPERTY(BlueprintAssignable)
	FTimeOfDayEvent OnTimeRangeStart;

	UPROPERTY(BlueprintAssignable)
	FTimeOfDayEvent OnTimeRangeEnd;

	float TimeStart, TimeEnd;
	TWeakObjectPtr<UWorld> World;
};

//This handy node will tell you when the sun sets and rises - useful for things like streetlamps. 
UCLASS() 
class NARRATIVEARSENAL_API UAsyncAction_WaitSunsetAndSunrise : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/** Execute the actual load */
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "Time Of Day", WorldContext = "WorldContextObject"))
	static UAsyncAction_WaitSunsetAndSunrise* WaitSunsetAndRise(UObject* WorldContextObject);

	//We need to check when the NPC was spawned in by the subsystem, we bind this to sub
	UFUNCTION()
	void Sunrise(float EventTime, float ActualTime, float TimePassedDelta,bool bFiredFromAdvancedTime);

	UFUNCTION()
	void Sunset(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

	UPROPERTY(BlueprintAssignable)
	FTimeOfDayEvent OnSunrise;

	UPROPERTY(BlueprintAssignable)
	FTimeOfDayEvent OnSunset;

	float TimeStart, TimeEnd;
	TWeakObjectPtr<UWorld> World;
};

/**
 * Generic object that binds to specified time and then lets you do whatever behavior you need when the time is reached 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UScheduledBehavior : public UObject
{
	GENERATED_BODY()
	
public:

	UScheduledBehavior(){};

	//Tell the behavior to bind
	void BindBehavior(class UWorld* World, const bool bFireIfAlreadyStarted=false);

	//Debugging tools use this to grab a description of the behavior
	UFUNCTION(BlueprintNativeEvent, Category = "Scheduled Behavior")
	FString DescribeBehavior() const;
	virtual FString DescribeBehavior_Implementation() const;
		
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

	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior")
	float StartTime;

	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Behavior")
	float EndTime;

protected:

	UFUNCTION(BlueprintNativeEvent, Category = "Scheduled Behavior")
	void HandleStarted(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);
	virtual void HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

	UFUNCTION(BlueprintNativeEvent, Category = "Scheduled Behavior")
	void HandleEnded(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);
	virtual void HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

private:

	UFUNCTION()
	void DispatchHandleStarted(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

	UFUNCTION()
	void DispatchHandleEnded(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime);

	FTimeOfDayEvent* TimeStartEvent;
	FTimeOfDayEvent* TimeEndEvent;
};

//Contains information about which factions we're enemies of, neutral with, etc. 
USTRUCT(BlueprintType)
struct FFactionAttitudeData
{
	GENERATED_BODY()

	FFactionAttitudeData()
	{

	}

	//A map of a faction -> our attiude towards that faction
	UPROPERTY(BlueprintReadOnly, SaveGame, EditAnywhere, Category = "Faction", meta = (Categories = "Narrative.Factions"))
	TMap<FGameplayTag, TEnumAsByte<ETeamAttitude::Type>> AttitudeMap;
};

//Represents an active time of day event 
USTRUCT(BlueprintType)
struct FActiveTimeOfDayEvent
{
	GENERATED_BODY()

	FActiveTimeOfDayEvent(const float InEventTime) 
	: EventTime(InEventTime){};

	FActiveTimeOfDayEvent(){};

	//The handle ID
	UPROPERTY()
	int32 HandleID;

	//The time of day the event should fire
	UPROPERTY(VisibleAnywhere, Category = "Time of Day")
	float EventTime;

	//The delegate that actually fires when the event goes off 
	UPROPERTY()
	FTimeOfDayEvent EventDelegate;

	//required for TSet 
	friend uint32 GetTypeHash(const FActiveTimeOfDayEvent& InEvent)
	{
		return (uint32) InEvent.EventTime * 10000.f;
	}

	bool operator==(const FActiveTimeOfDayEvent& Other) const
	{
		return EventTime == Other.EventTime;
	};

	//Nice for finding an event in our set using time
	bool operator==(const float Time) const
	{
		return EventTime == Time;
	};
};


/**
 * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeGameState : public AGameStateBase, public INarrativeSavableActor
{
	GENERATED_BODY()
	
public:

	ANarrativeGameState(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual void UpdateTimeOfDay(float DeltaSeconds);

	FTimeOfDayEvent& GetTimeOfDayEventDelegate(const float Time);

	//All of time of day events are stored in here. We sort them by time so when AdvanceTime is called it calls them in order 
	UPROPERTY(VisibleAnywhere, Category = "Time of Day")
	TSet<FActiveTimeOfDayEvent> TimeOfDayEvents;

	/**Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others.Also marked savegame so alliances will be preserved through play sessions.
	Since this is marked savegame, narrative will remember which factions are friendly, neutral, hostile towards others! */
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly, Category = "Factions", meta = (Categories = "Narrative.Factions"))
	TMap<FGameplayTag, FFactionAttitudeData> FactionAllianceMap;

	/**Get a container of factions attitudes towards another container of factions. In any are hostile, we'll return hostile. If none were hostile
	and at least one were friendly, we'll return friendly. Otherwise we'll return neutral. You can override this if you need to change that behaviour. */
	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual ETeamAttitude::Type GetFactionsAttitudeTowardsFactions(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTagContainer& SourceFactions, UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTagContainer& TargetFactions);

	//Check a factions attitude towards another faction 
	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual ETeamAttitude::Type GetFactionAttitudeTowardsFaction(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& SourceFaction, UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& TargetFaction);

	//Set a factions attitude towards another given faction
	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual void SetFactionAttitude(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& SourceFaction, UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& TargetFaction, const ETeamAttitude::Type NewAttitude);

	//Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile 
	UPROPERTY(BlueprintAssignable, Category = "Factions")
	FOnFactionAttitudeChanged OnFactionAttitudeChanged;


protected:

	//The time of day last tick.
	UPROPERTY(VisibleAnywhere, SaveGame, Category = "Time of Day")
	float TimeOfDayLastTick;

	//The accumulated time last tick 
	UPROPERTY(VisibleAnywhere, SaveGame, Category = "Time of Day")
	float AccumulatedTimeLastTick;

	//The current time of day, from 0-2400
	UPROPERTY(VisibleAnywhere, SaveGame, Category = "Time of Day")
	float TimeOfDay;

	//The total accumulated time, where 2400 is 1 day of time. 
	UPROPERTY(VisibleAnywhere, SaveGame, Category = "Time of Day")
	float AccumulatedTime;

	//True if AdvancedTime was called this frame. We need to know this because some time events might not want to respond to time advances. 
	float PendingAdvanceTime;

	//We cache the time of day settings
	UPROPERTY()
	TObjectPtr<class UNarrativeTimeOfDaySettings> TimeSettings;

public: 

	/**Manually advance the time of day, where 100 = 1 hour of time, ie 500 = advance time by 5 hours, 4800 = advance time by 2 days, etc.
	Note that the time of day won't actually change until the next frame. */
	UFUNCTION(BlueprintCallable, Category = "Time of Day")
	void AdvanceTimeOfDay(const float TimeToAdvance);

	//Return the time of day from 0-2400. 
	UFUNCTION(BlueprintPure, Category = "Time of Day")
	FORCEINLINE float GetTimeOfDay() const {return TimeOfDay;};

	//Return the total accumulated time. 
	UFUNCTION(BlueprintPure, Category = "Time of Day")
	FORCEINLINE float GetAccumulatedTime() const {return AccumulatedTime;};

	//Check whether the sun is up or if its nighttime 
	UFUNCTION(BlueprintPure, Category = "Time of Day")
	bool IsDayTime() const;

	//Check whether the sun is up or if its nighttime 
	UFUNCTION(BlueprintPure, Category = "Time of Day")
	float GetTimeOfDayAdvanceSpeed() const;



};
