// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatPoolableActor.h"

#include "NinjaCombatLog.h"
#include "TimerManager.h"
#include "Components/NinjaCombatActorPoolComponent.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Launch/Resources/Version.h"

ANinjaCombatPoolableActor::ANinjaCombatPoolableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = false;
	bIsMarkedForDeferredDestruction = false;
	PoolableActorState = EPoolableActorState::Inactive;

#if ENGINE_MINOR_VERSION < 5
	MinNetUpdateFrequency = 11.f;
	NetUpdateFrequency = 33.f;
#else
	SetMinNetUpdateFrequency(11.f);
	SetNetUpdateFrequency(33.f);
#endif
	
	TimeToLiveOutsidePool = 3.f;
}

bool ANinjaCombatPoolableActor::IsNameStableForNetworking() const
{
	if (Execute_IsManagedByPool(this))
	{
		return true;	
	}

	return Super::IsNameStableForNetworking();
}

bool ANinjaCombatPoolableActor::IsFullNameStableForNetworking() const
{
	if (Execute_IsManagedByPool(this))
	{
		return true;	
	}
	
	return Super::IsFullNameStableForNetworking();
}

void ANinjaCombatPoolableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, PoolableActorState);
}

void ANinjaCombatPoolableActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GetWorld()->GetTimerManager().ClearTimer(TimeToLiveHandle);
	Super::EndPlay(EndPlayReason);
}

bool ANinjaCombatPoolableActor::IsManagedByPool_Implementation() const
{
	return PoolManager.IsValid() && PoolManager->IsValidLowLevelFast();
}

void ANinjaCombatPoolableActor::Reserve_Implementation()
{
	if (HasAuthority() && !Execute_IsReserved(this) && !Execute_IsActive(this))
	{
		const EPoolableActorState CurrentState = PoolableActorState;
		PoolableActorState = EPoolableActorState::Reserved;
		OnRep_PoolableActorState(CurrentState);
	}
}

void ANinjaCombatPoolableActor::Activate_Implementation()
{
	if (HasAuthority() && !Execute_IsActive(this))
	{
		const EPoolableActorState CurrentState = PoolableActorState;
		PoolableActorState = EPoolableActorState::Active;
		OnRep_PoolableActorState(CurrentState);
	}
}

void ANinjaCombatPoolableActor::Deactivate_Implementation()
{
	if (HasAuthority())
	{
		// If this actor is not managed by the pool, then destroy it.
		// Otherwise, follow the expected state replication flow.
		//
		if (!Execute_IsManagedByPool(this) && !bIsMarkedForDeferredDestruction)
		{
			Destroy();
		}
		else if (Execute_IsReserved(this) || Execute_IsActive(this))
		{
			const EPoolableActorState CurrentState = PoolableActorState;
			PoolableActorState = EPoolableActorState::Inactive;
			OnRep_PoolableActorState(CurrentState);
		}
	}
	else
	{
		Server_Deactivate();
	}
}

void ANinjaCombatPoolableActor::InitializedByPool_Implementation(UNinjaCombatActorPoolComponent* InPool)
{
	COMBAT_LOG_ARGS(Log, "Actor %s managed by pool %s.", *GetNameSafe(this), *GetNameSafe(InPool));
	PoolManager = InPool;
}

void ANinjaCombatPoolableActor::OnActivation_Implementation()
{
	SetActorEnableCollision(true);
    SetActorHiddenInGame(false);
	
    const bool bShouldTick = PrimaryActorTick.bStartWithTickEnabled; 
    SetActorTickEnabled(bShouldTick);
}

void ANinjaCombatPoolableActor::OnDeactivation_Implementation()
{
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	// If marked for destruction, we can destroy this now.
	if (bIsMarkedForDeferredDestruction)
	{
		COMBAT_LOG_ARGS(Log, "Destroying actor %s after waiting for its deactivation.", *GetNameSafe(this));
		Destroy();
	}	
}

void ANinjaCombatPoolableActor::NotifyPoolDestroyed_Implementation()
{
	// If the actor is currently active, mark it for destruction once it deactivates.
	// Otherwise, we can destroy the actor right away, since the pool has been emptied.
	//
	if (Execute_IsActive(this))
	{
		COMBAT_LOG_ARGS(Log, "Pool destroyed. Marking active actor %s for deferred destruction...", *GetNameSafe(this));
		bIsMarkedForDeferredDestruction = true;
	}
	else
	{
		COMBAT_LOG_ARGS(Log, "Pool destroyed. Destroying actor %s.", *GetNameSafe(this));
		Destroy();
	}
}

void ANinjaCombatPoolableActor::HandleTimerExpired()
{
	COMBAT_LOG_ARGS(Verbose, "Timer to live outside the pool has expired. Deactivating actor %s.", *GetNameSafe(this));
	Execute_Deactivate(this);
}

void ANinjaCombatPoolableActor::OnRep_PoolableActorState(const EPoolableActorState PreviousActorState)
{
	// Check if the previous state was any "non-inactive" ones. This helps to evaluate if this
	// actor is being deactivated, or it's just the first replication of the "inactive" value.
	//
	const bool bWasActiveOrReserved = PreviousActorState == EPoolableActorState::Reserved || PreviousActorState == EPoolableActorState::Active;

	if (Execute_IsInactive(this) && bWasActiveOrReserved)
	{
		// Clear the timer to ensure we won't change the state again, by accident, even though
		// there are other locks to avoid that, in the actual deactivate method.
		//
		// Then, proceed with the deactivation logic in all clients.
		//
		GetWorld()->GetTimerManager().ClearTimer(TimeToLiveHandle);
		OnDeactivation();
	}
	else if (Execute_IsReserved(this))
	{
		// Make sure that reserved actors will return to the pool if they are not activated or
		// deliberately returned. This timer should be refreshed when they are actually in use.
		//
		StartTimerToReturnToPool();
	}
	else if (Execute_IsActive(this))
	{
		// Set or refresh the timer, in case it was already set from the "reserved" state.
		// Then proceed with the actual activation logic in all clients.
		//
		StartTimerToReturnToPool();
		OnActivation();
	}
}

void ANinjaCombatPoolableActor::StartTimerToReturnToPool()
{
	const FTimerDelegate Delegate = FTimerDelegate::CreateUObject(this, &ThisClass::HandleTimerExpired);
	GetWorld()->GetTimerManager().SetTimer(TimeToLiveHandle, Delegate, TimeToLiveOutsidePool, false);	
}

void ANinjaCombatPoolableActor::Server_Deactivate_Implementation()
{
	Execute_Deactivate(this);
}

bool ANinjaCombatPoolableActor::Server_Deactivate_Validate()
{
	return true;
}
