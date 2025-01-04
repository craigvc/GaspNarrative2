// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatAbilitySystemGlobals.h"

#include "AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h"
#include "AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h"

FGameplayAbilityActorInfo* UNinjaCombatAbilitySystemGlobals::AllocAbilityActorInfo() const
{
	return new FNinjaCombatGameplayAbilityActorInfo();
}

FGameplayEffectContext* UNinjaCombatAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FNinjaCombatGameplayEffectContext();
}
