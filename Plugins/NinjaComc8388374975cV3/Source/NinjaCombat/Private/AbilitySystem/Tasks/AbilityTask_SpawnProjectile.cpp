// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"

#include "GameFramework/NinjaCombatProjectileRequest.h"

UAbilityTask_SpawnProjectile::UAbilityTask_SpawnProjectile()
{
	bEnableDebug = false;
}

UAbilityTask_SpawnProjectile* UAbilityTask_SpawnProjectile::CreateTask(UGameplayAbility* OwningAbility, const bool bEnableDebug)
{
	UAbilityTask_SpawnProjectile* NewTask = NewAbilityTask<UAbilityTask_SpawnProjectile>(OwningAbility);
	NewTask->bEnableDebug = bEnableDebug;
	return NewTask;	
}

void UAbilityTask_SpawnProjectile::AddProjectileRequest(const UNinjaCombatProjectileRequest* Request)
{
	if (!IsValid(Request))
	{
		return;	
	}
	
	if (!ProjectileRequests.Contains(Request))
	{
		// The source of the request has to be unique.
		//
		// In the current design this means "One Projectile Animation Notify can launch one projectile"
		// or "One Gameplay Ability Can launch one projectile".
		//
		// Also keep in mind that one activation of the task is usually quite short, so this means
		// that "within a few frames, only one source can trigger one projectile".
		//
		UNinjaCombatProjectileRequest* NonConstRequest = const_cast<UNinjaCombatProjectileRequest*>(Request);
		ProjectileRequests.Add(Request->GetRequestSource(), NonConstRequest);
	}
}

void UAbilityTask_SpawnProjectile::Activate()
{
	Super::Activate();

	for (TPair<TObjectPtr<const UObject>, TObjectPtr<UNinjaCombatProjectileRequest>>& ProjectileRequest : ProjectileRequests)
	{
		const UNinjaCombatProjectileRequest* Request = ProjectileRequest.Value;

		AActor* Projectile = Request->SpawnProjectileActor();
		if (IsValid(Projectile) && ShouldBroadcastAbilityTaskDelegates())
		{
			OnProjectileLaunched.Broadcast(Request, Projectile);
		}
	}

	ProjectileRequests.Empty();
}

void UAbilityTask_SpawnProjectile::BeginDestroy()
{
	ProjectileRequests.Empty();
	Super::BeginDestroy();
}
