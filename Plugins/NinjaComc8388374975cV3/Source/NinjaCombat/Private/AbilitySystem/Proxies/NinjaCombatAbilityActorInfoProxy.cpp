// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Proxies/NinjaCombatAbilityActorInfoProxy.h"

#include "AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h"

UNinjaCombatManagerComponent* UNinjaCombatAbilityActorInfoProxy::GetCombatManagerComponent(
	const FGameplayAbilityActorInfo* ActorInfo) const
{
	check(ActorInfo != nullptr);
    
	const FNinjaCombatGameplayAbilityActorInfo* CombatActorInfo = static_cast<const FNinjaCombatGameplayAbilityActorInfo*>(ActorInfo);
	if (CombatActorInfo != nullptr && CombatActorInfo->CombatManagerComponent.IsValid())
	{
		return CombatActorInfo->CombatManagerComponent.Get();
	}

	return nullptr;	
}
