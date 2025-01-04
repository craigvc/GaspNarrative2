// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatActorInfoProxyInterface.generated.h"

struct FGameplayAbilityActorInfo;

class UActorComponent;
class UNinjaCombatManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UCombatActorInfoProxyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Basic definition of a proxy that provides actor info for the ability system.
 */
class NINJACOMBAT_API ICombatActorInfoProxyInterface
{
	
	GENERATED_BODY()

public:

	/** Provides the Combat Manager Component from the Actor Info. */
	virtual UNinjaCombatManagerComponent* GetCombatManagerComponent(const FGameplayAbilityActorInfo* ActorInfo) const = 0;

};