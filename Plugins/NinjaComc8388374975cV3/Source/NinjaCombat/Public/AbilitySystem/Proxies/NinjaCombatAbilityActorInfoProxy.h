// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Interfaces/CombatActorInfoProxyInterface.h"
#include "UObject/Object.h"
#include "NinjaCombatAbilityActorInfoProxy.generated.h"

class UNinjaCombatManagerComponent;

/**
 * Default Proxy for an Ability Actor Info.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatAbilityActorInfoProxy : public UObject, public ICombatActorInfoProxyInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Ability Actor Info Proxy implementation
	virtual UNinjaCombatManagerComponent* GetCombatManagerComponent(const FGameplayAbilityActorInfo* ActorInfo) const override;
	// -- End Ability Actor Info Proxy implementation
	
};
