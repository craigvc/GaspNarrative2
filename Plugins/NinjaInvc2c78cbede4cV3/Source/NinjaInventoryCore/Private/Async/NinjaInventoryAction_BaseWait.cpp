// Ninja Bear Studio Inc., all rights reserved.
#include "Async/NinjaInventoryAction_BaseWait.h"

#include "NinjaInventoryLog.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

void UNinjaInventoryAction_BaseWait::Activate()
{
	const UWorld* World = GetWorld();
	if (IsValid(World))
	{
		FTimerManager& TimerManager = World->GetTimerManager();
		TimerManager.SetTimer(LookupHandle, this, &ThisClass::ExecuteAction, CheckInterval, true);	
	}
	else
	{
		Cancel();
	}
}

UWorld* UNinjaInventoryAction_BaseWait::GetWorld() const
{
	if (WorldPtr.IsValid() && WorldPtr->IsValidLowLevelFast())
	{
		return WorldPtr.Get();
	}

	return nullptr;
}

void UNinjaInventoryAction_BaseWait::SetWorld(UWorld* World)
{
	WorldPtr = World;
}

void UNinjaInventoryAction_BaseWait::SetTimerParameters(const float InCheckInterval, const float InMaxWait)
{
	CheckInterval = InCheckInterval;
	MaxWait = InMaxWait;
}

void UNinjaInventoryAction_BaseWait::ExecuteAction_Implementation()
{
}

void UNinjaInventoryAction_BaseWait::AccumulateElapsedTime()
{
	ElapsedTime += CheckInterval;
	if (ElapsedTime > MaxWait && !bCompleted)
	{
		INVENTORY_LOG_ARGS(Warning, "Waited %fs for the required object. Giving up...", ElapsedTime);
		Cancel();
	}
}

void UNinjaInventoryAction_BaseWait::Cancel()
{
	Super::Cancel();
	OnCancelled.Broadcast();
	CleanUp();
}

void UNinjaInventoryAction_BaseWait::Complete()
{
	Super::Cancel();
	bCompleted = true;
	OnCompleted.Broadcast();
	CleanUp();
}

void UNinjaInventoryAction_BaseWait::CleanUp()
{
	const UWorld* World = GetWorld();
	if(LookupHandle.IsValid() && IsValid(World))
	{
		FTimerManager& TimerManager = World->GetTimerManager();
		TimerManager.ClearTimer(LookupHandle);
	}
}