// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatTargetReceiverInterface.generated.h"

class UNinjaCombatManagerComponent;

UINTERFACE(MinimalAPI)
class UCombatTargetReceiverInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines an object that can receive a combat target.
 */
class NINJACOMBAT_API ICombatTargetReceiverInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Receives the Combat Target from a source.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Target Receiver Interface")
	void ReceiveCombatTarget(AActor* CombatTarget);
	
};