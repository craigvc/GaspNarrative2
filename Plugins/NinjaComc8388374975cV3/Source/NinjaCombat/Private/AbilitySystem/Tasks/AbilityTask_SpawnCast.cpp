// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_SpawnCast.h"

#include "NinjaCombatLog.h"
#include "Engine/World.h"
#include "GameFramework/NinjaCombatCastRequest.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatPoolableActorInterface.h"

UAbilityTask_SpawnCast::UAbilityTask_SpawnCast()
{
	bEnableDebug = false;
}

UAbilityTask_SpawnCast* UAbilityTask_SpawnCast::CreateTask(UGameplayAbility* OwningAbility,
	const TSubclassOf<AActor> CastActorClass, const bool bEnableDebug)
{
	checkf(IsValid(CastActorClass), TEXT("Cast Actor class must be valid!"));
	
	UAbilityTask_SpawnCast* NewTask = NewAbilityTask<UAbilityTask_SpawnCast>(OwningAbility);
	NewTask->CastClass = CastActorClass;
	NewTask->bEnableDebug = bEnableDebug;
	return NewTask;	
}

void UAbilityTask_SpawnCast::AddCastRequest(UNinjaCombatCastRequest* Request)
{
	if (!IsValid(Request))
	{
		return;	
	}
	
	if (!CastRequests.Contains(Request))
	{
		// The source of the request has to be unique.
		//
		// In the current design this means "One Cast Animation Notify can trigger one cast" or
		// "One Gameplay Ability Can trigger one cast".
		//
		// Also keep in mind that one activation of the task is usually quite short, so this means
		// that "within a few frames, only one source can trigger one cast".
		//
		CastRequests.Add(Request->GetRequestSource(), Request);
	}
	else if (bEnableDebug)
	{
		COMBAT_LOG_ARGS(Verbose, "Discarded %s since owner %s was already registered.",
			*GetNameSafe(Request), *GetNameSafe(Request->GetRequestOwner()));
	}
}

void UAbilityTask_SpawnCast::Activate()
{
	Super::Activate();

	for (TPair<TObjectPtr<const UObject>, TObjectPtr<UNinjaCombatCastRequest>>& CastRequest : CastRequests)
	{
		UNinjaCombatCastRequest* Request = CastRequest.Value;
		SpawnCastActor(Request);
	}
	
	CastRequests.Empty();
}

void UAbilityTask_SpawnCast::BeginDestroy()
{
	CastRequests.Empty();
	Super::BeginDestroy();
}

void UAbilityTask_SpawnCast::SpawnCastActor(UNinjaCombatCastRequest* Request)
{
	static constexpr bool bAutoActivate = false;
	AActor* CastActor = Request->SpawnCastActor(bAutoActivate);
	if (IsValid(CastActor))
	{
		CastActor->SetActorTransform(Request->GetCastTransform());
		BroadcastActorReady(Request, CastActor);
		
		ActivateCastActor(Request, CastActor);
		BroadcastActorFinished(Request, CastActor);
	}
}

void UAbilityTask_SpawnCast::ActivateCastActor(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor)
{
	if (ICombatPoolableActorInterface::Execute_IsManagedByPool(CastActor))
	{
		// This cast actor is managed by the pool, it can be activated.
		ICombatPoolableActorInterface::Execute_Activate(CastActor);
	}
	else
	{
		// This cast actor is not managed by the pool, so it's in a deferred state.
		const FTransform CastTransform = OriginalRequest->GetCastTransform();
		CastActor->FinishSpawning(CastTransform);
	}
}

void UAbilityTask_SpawnCast::BroadcastActorReady(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor) const
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCastReady.Broadcast(OriginalRequest, CastActor);	
	}	
}

void UAbilityTask_SpawnCast::BroadcastActorFinished(const UNinjaCombatCastRequest* OriginalRequest, AActor* CastActor) const
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCastFinished.Broadcast(OriginalRequest, CastActor);	
	}	
}
