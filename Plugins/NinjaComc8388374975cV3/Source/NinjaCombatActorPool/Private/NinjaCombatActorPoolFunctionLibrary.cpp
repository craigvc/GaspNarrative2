// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatActorPoolFunctionLibrary.h"

#include "Components/NinjaCombatActorPoolComponent.h"
#include "Interfaces/CombatPoolProviderInterface.h"

UNinjaCombatActorPoolComponent* UNinjaCombatActorPoolFunctionLibrary::GetCombatActorPool(const AActor* PoolOwner)
{
	if (IsValid(PoolOwner) && PoolOwner->Implements<UCombatPoolProviderInterface>())
	{
		return ICombatPoolProviderInterface::Execute_GetActorPool(PoolOwner);
	}

	return nullptr;
}

AActor* UNinjaCombatActorPoolFunctionLibrary::TryGetActorFromPool(const AActor* PoolOwner, const TSubclassOf<AActor> PoolableActorClass, const bool bActivate)
{
	if (!IsValid(PoolableActorClass))
	{
		return nullptr;
	}

	UNinjaCombatActorPoolComponent* ActorPool = GetCombatActorPool(PoolOwner);
	if (!IsValid(ActorPool))
	{
		return nullptr;
	}
	
	return ActorPool->GetActorFromPool(PoolableActorClass, bActivate);
}
