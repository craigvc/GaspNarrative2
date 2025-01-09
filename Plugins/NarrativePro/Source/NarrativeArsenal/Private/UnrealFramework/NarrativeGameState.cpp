// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeGameState.h"
#include "Settings/NarrativeTimeOfDaySettings.h"
#include "ArsenalStatics.h"
#include "SaveSystemStatics.h"
#include <GameplayTagsManager.h>
#include <Engine/World.h>
#include "NarrativeGameplayTags.h"

void UScheduledBehavior::BindBehavior(class UWorld* World, const bool bFireIfAlreadyStarted/*=false*/)
{
	if (ANarrativeGameState* GS = GetWorld()->GetGameState<ANarrativeGameState>())
	{
		TimeStartEvent = &GS->GetTimeOfDayEventDelegate(StartTime);
		TimeEndEvent = &GS->GetTimeOfDayEventDelegate(EndTime);

		if (TimeStartEvent && TimeEndEvent)
		{
			TimeStartEvent->AddDynamic(this, &UScheduledBehavior::DispatchHandleStarted);
			TimeEndEvent->AddDynamic(this, &UScheduledBehavior::DispatchHandleEnded);
		}

		if (bFireIfAlreadyStarted)
		{
			const float TOD = GS->GetTimeOfDay();

			if (UArsenalStatics::IsTimeInRange(TOD, StartTime, EndTime))
			{
				//Account for time looping over to next day 
				const float Delta = TOD < StartTime ? TOD + 2400.f - StartTime : TOD - StartTime;
				HandleStarted(StartTime, TOD, Delta, false);
			}
		}
	}
}

FString UScheduledBehavior::DescribeBehavior_Implementation() const
{
	return GetName();
}

void UScheduledBehavior::DispatchHandleStarted(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UArsenalStatics::IsTimeInRange(ActualTime, StartTime, EndTime))
	{
		HandleStarted(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}

void UScheduledBehavior::DispatchHandleEnded(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UArsenalStatics::IsTimeInRange(ActualTime, EndTime, StartTime))
	{
		HandleEnded(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}

void UScheduledBehavior::HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{

}

void UScheduledBehavior::HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{

}

ANarrativeGameState::ANarrativeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
}

void ANarrativeGameState::BeginPlay()
{
	Super::BeginPlay();

	TimeSettings = UArsenalStatics::GetTimeOfDaySettings();

	//If we don't have any save data on file we'll set the time of day to the default time 
	if (!USaveSystemStatics::LoadSingleActor(this))
	{
		AccumulatedTime = TimeSettings->DefaultTimeOfDay;
		TimeOfDay = TimeSettings->DefaultTimeOfDay;
	}

}

void ANarrativeGameState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (TimeSettings)
	{
		if (TimeSettings->bDynamicTimeOfDay)
		{
			UpdateTimeOfDay(DeltaSeconds);
		}
	}
}

void ANarrativeGameState::UpdateTimeOfDay(float DeltaSeconds)
{
	TimeOfDayLastTick = TimeOfDay;
	AccumulatedTimeLastTick = AccumulatedTime;

	AccumulatedTime += GetTimeOfDayAdvanceSpeed() * DeltaSeconds;
	AccumulatedTime += PendingAdvanceTime;

	TimeOfDay = FMath::Fmod(AccumulatedTime, 2400.f);

	const int32 DaysPassed = FMath::Floor(AccumulatedTime / 2400.f) - FMath::Floor(AccumulatedTimeLastTick / 2400.f);
	bool bStartedNewDay = DaysPassed > 0;
	const bool bTimeManuallyAdvanced = PendingAdvanceTime > 0.f;

	//Find events that should fire this tick
	for (auto& TODEvent : TimeOfDayEvents)
	{
		//If the event was before last frame, and after this frame, then we need to fire it! 

		//If we started a new day, the time will have flicked over from 2400-0000, we we need to add 2400 to the new time so the check still works correctly 
		if (TODEvent.EventTime > TimeOfDayLastTick && TODEvent.EventTime <= (TimeOfDay + (bStartedNewDay ? 2400.f : 0.f)))
		{
			float TimePassed = AccumulatedTime - AccumulatedTimeLastTick;
			float TimePassedDelta = (TimeOfDay - TODEvent.EventTime) + DaysPassed * 2400.f;
			TODEvent.EventDelegate.Broadcast(TODEvent.EventTime, TimeOfDay, TimePassedDelta, bTimeManuallyAdvanced);
		}
	}

	PendingAdvanceTime = 0.f;
}

FTimeOfDayEvent& ANarrativeGameState::GetTimeOfDayEventDelegate(const float Time)
{
	//Our our set has an event delegate for the time, supply 
	if (TimeOfDayEvents.Contains(Time))
	{
		return TimeOfDayEvents.Find(Time)->EventDelegate;
	}
	else //Otherwise create a new one and supply that 
	{
		FActiveTimeOfDayEvent NewEvent = FActiveTimeOfDayEvent(Time);
		NewEvent.EventTime = Time;

		TimeOfDayEvents.Add(NewEvent);

		check(TimeOfDayEvents.Find(Time));

		//Since we've added a new time of day event, sort them so they remain in order for when we process them
		TimeOfDayEvents.Sort([](const FActiveTimeOfDayEvent& A, const FActiveTimeOfDayEvent& B) {
				return A.EventTime < B.EventTime;
			});

		return TimeOfDayEvents.Find(Time)->EventDelegate;
	}
}

ETeamAttitude::Type ANarrativeGameState::GetFactionsAttitudeTowardsFactions(const FGameplayTagContainer& SourceFactions, const FGameplayTagContainer& TargetFactions)
{
	TArray<FGameplayTag> SourceFactionTags;
	SourceFactions.GetGameplayTagArray(SourceFactionTags);

	TArray<FGameplayTag> TargetFactionTags;
	TargetFactions.GetGameplayTagArray(TargetFactionTags);

	bool bHadFriendly = false;

	for (auto& SourceFaction : SourceFactionTags)
	{
		for (auto& TargetFaction : TargetFactionTags)
		{
			ETeamAttitude::Type Attitude = GetFactionAttitudeTowardsFaction(SourceFaction, TargetFaction);

			//If any are hostile, we should be hostile 
			if (Attitude == ETeamAttitude::Hostile)
			{
				return Attitude;
			}
			else if (Attitude == ETeamAttitude::Friendly)
			{
				bHadFriendly = true;
			}
		}
	}

	//If no hostile attitudes about each other and at least one friendly, we'll be friendly. 
	return bHadFriendly ? ETeamAttitude::Friendly : ETeamAttitude::Neutral;
}

ETeamAttitude::Type ANarrativeGameState::GetFactionAttitudeTowardsFaction(const FGameplayTag& SourceFaction, const FGameplayTag& TargetFaction)
{
	//return neutral - we cannot do the check 
	if (!SourceFaction.IsValid() || !TargetFaction.IsValid())
	{
		return ETeamAttitude::Neutral;
	}

	//Aligned factions are always friendly toward each other 
	if (SourceFaction == TargetFaction)
	{
		return ETeamAttitude::Friendly;
	}

	ETeamAttitude::Type SourceAttitudeTowardsTarget = ETeamAttitude::Neutral;
	ETeamAttitude::Type TargetAttitudeTowardsSource = ETeamAttitude::Neutral;

	//See how source feels about target 
	if (FactionAllianceMap.Contains(SourceFaction))
	{
		//See if we have data on record for the target 
		if (FactionAllianceMap[SourceFaction].AttitudeMap.Contains(TargetFaction))
		{
			SourceAttitudeTowardsTarget = FactionAllianceMap[SourceFaction].AttitudeMap[TargetFaction];
		}
	}

	//See how target feels about source 
	if (FactionAllianceMap.Contains(TargetFaction))
	{
		//See if we have data on record for the target 
		if (FactionAllianceMap[TargetFaction].AttitudeMap.Contains(SourceFaction))
		{
			TargetAttitudeTowardsSource = FactionAllianceMap[TargetFaction].AttitudeMap[SourceFaction];
		}
	}

	//If either faction is hostile towards the other, they should both be hostile 
	if (TargetAttitudeTowardsSource == ETeamAttitude::Hostile || SourceAttitudeTowardsTarget == ETeamAttitude::Hostile)
	{
		return ETeamAttitude::Hostile;
	}

	//Otherwise just return how source feels about target 
	return SourceAttitudeTowardsTarget;

}

void ANarrativeGameState::SetFactionAttitude(const FGameplayTag& SourceFaction, const FGameplayTag& TargetFaction, const ETeamAttitude::Type NewAttitude)
{
	auto& AllianceData = FactionAllianceMap.FindOrAdd(SourceFaction);
	auto& Attitude = AllianceData.AttitudeMap.FindOrAdd(TargetFaction, NewAttitude);
	Attitude = NewAttitude;

	OnFactionAttitudeChanged.Broadcast(SourceFaction, TargetFaction, NewAttitude);
}

void ANarrativeGameState::AdvanceTimeOfDay(const float TimeToAdd) 
{	
	if (TimeToAdd > 0.01f)
	{
		PendingAdvanceTime += TimeToAdd;
	}
}

bool ANarrativeGameState::IsDayTime() const
{
	if (TimeSettings)
	{
		return TimeOfDay > TimeSettings->SunriseTime && TimeOfDay < TimeSettings->SunsetTime;	
	}

	return true;
}

float ANarrativeGameState::GetTimeOfDayAdvanceSpeed() const
{
	if (TimeSettings)
	{
		return (1200.f / (IsDayTime() ? TimeSettings->DayLengthMinutes : TimeSettings->NightLengthMinutes)) / 60.f;
	}
	return 0.f;
}

void UAsyncAction_WaitTimeOfDay::Activate()
{
	if (UWorld* OurWorld = World.Get())
	{
		if (ANarrativeGameState* GS = OurWorld->GetGameState<ANarrativeGameState>())
		{
			GS->GetTimeOfDayEventDelegate(Time).AddDynamic(this, &UAsyncAction_WaitTimeOfDay::OnHitTimeOfDay);
		}
	}
}

UAsyncAction_WaitTimeOfDay* UAsyncAction_WaitTimeOfDay::WaitTimeOfDay(UObject* WorldContextObject, float Time)
{
	if (WorldContextObject)
	{
		UAsyncAction_WaitTimeOfDay* Action = NewObject<UAsyncAction_WaitTimeOfDay>();
		Action->Time = Time;
		Action->World = WorldContextObject->GetWorld();
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}

	return nullptr;
}

void UAsyncAction_WaitTimeOfDay::OnHitTimeOfDay(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UWorld* OurWorld = World.Get())
	{
		OnTimeReached.Broadcast(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);

		if (ANarrativeGameState* GS = OurWorld->GetGameState<ANarrativeGameState>())
		{
			if (GS->TimeOfDayEvents.Contains(TimeEventHandle))
			{
				//GS->TimeOfDayEvents[TimeEventHandle].EventDelegate.RemoveDynamic(this, &UAsyncAction_WaitTimeOfDay::OnHitTimeOfDay);
			}
		}
	}
}

void UAsyncAction_WaitTimeRange::Activate()
{
	if (UWorld* OurWorld = World.Get())
	{
		if (ANarrativeGameState* GS = OurWorld->GetGameState<ANarrativeGameState>())
		{
			GS->GetTimeOfDayEventDelegate(TimeStart).AddDynamic(this, &UAsyncAction_WaitTimeRange::OnHitTimeStart);
			GS->GetTimeOfDayEventDelegate(TimeEnd).AddDynamic(this, &UAsyncAction_WaitTimeRange::OnHitTimeEnd);
		}
	}
}

UAsyncAction_WaitTimeRange* UAsyncAction_WaitTimeRange::WaitTimeRange(UObject* WorldContextObject, float TimeStart, float TimeEnd)
{
	if (WorldContextObject)
	{
		UAsyncAction_WaitTimeRange* Action = NewObject<UAsyncAction_WaitTimeRange>();
		Action->TimeStart = TimeStart;
		Action->TimeEnd = TimeEnd;
		Action->World = WorldContextObject->GetWorld();
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}

	return nullptr;
}

void UAsyncAction_WaitTimeRange::OnHitTimeStart(float EventTime, float ActualTime, float TimePassedDelta,bool bFiredFromAdvancedTime)
{
	if (UWorld* OurWorld = World.Get())
	{
		OnTimeRangeStart.Broadcast(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}

void UAsyncAction_WaitTimeRange::OnHitTimeEnd(float EventTime, float ActualTime,float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UWorld* OurWorld = World.Get())
	{
		OnTimeRangeEnd.Broadcast(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}

void UAsyncAction_WaitSunsetAndSunrise::Activate()
{
	if (const UNarrativeTimeOfDaySettings* TODSettings = GetDefault<UNarrativeTimeOfDaySettings>())
	{
		if (UWorld* OurWorld = World.Get())
		{
			if (ANarrativeGameState* GS = OurWorld->GetGameState<ANarrativeGameState>())
			{
				GS->GetTimeOfDayEventDelegate(TODSettings->SunriseTime).AddDynamic(this, &UAsyncAction_WaitSunsetAndSunrise::Sunrise);
				GS->GetTimeOfDayEventDelegate(TODSettings->SunsetTime).AddDynamic(this, &UAsyncAction_WaitSunsetAndSunrise::Sunset);
			}
		}
	}
}

UAsyncAction_WaitSunsetAndSunrise* UAsyncAction_WaitSunsetAndSunrise::WaitSunsetAndRise(UObject* WorldContextObject)
{
	if (WorldContextObject)
	{
		UAsyncAction_WaitSunsetAndSunrise* Action = NewObject<UAsyncAction_WaitSunsetAndSunrise>();
		Action->World = WorldContextObject->GetWorld();
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}

	return nullptr;
}

void UAsyncAction_WaitSunsetAndSunrise::Sunrise(float EventTime, float ActualTime,float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UWorld* OurWorld = World.Get())
	{
		OnSunrise.Broadcast(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}

void UAsyncAction_WaitSunsetAndSunrise::Sunset(float EventTime, float ActualTime,float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (UWorld* OurWorld = World.Get())
	{
		OnSunset.Broadcast(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}
