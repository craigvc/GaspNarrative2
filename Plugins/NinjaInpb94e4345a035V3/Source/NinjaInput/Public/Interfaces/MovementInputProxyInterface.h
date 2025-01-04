// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovementInputProxyInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UMovementInputProxyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows movement to be routed to something like replication method, before being sent to the default Pawn Input.
 */
class NINJAINPUT_API IMovementInputProxyInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Analogous to "AddMovementInput", but allows the implementation to perform additional steps.
	 * Useful for example to store input values for replication, before sending them to the actual movement function.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Movement Input Proxy Interface")
	void PrepareAndAddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
	
};