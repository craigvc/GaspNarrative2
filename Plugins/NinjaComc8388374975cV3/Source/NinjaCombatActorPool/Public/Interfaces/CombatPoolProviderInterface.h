// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatPoolProviderInterface.generated.h"

class UNinjaCombatActorPoolComponent;

UINTERFACE(MinimalAPI)
class UCombatPoolProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Provides the Pool Component from an owner.
 */
class NINJACOMBATACTORPOOL_API ICombatPoolProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Actor Pool Component available.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Pool Provider Interface")
	UNinjaCombatActorPoolComponent* GetActorPool() const;
	virtual UNinjaCombatActorPoolComponent* GetActorPool_Implementation() const;

};
