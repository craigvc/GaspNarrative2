// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LastInputProviderInterface.generated.h"

UINTERFACE(MinimalAPI)
class ULastInputProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows an actor to provide their last input vector.
 */
class NINJAINPUT_API ILastInputProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the last input that has been processed by the pawn/character.
	 *
	 * Useful when the way to retrieve such value is not as simple as simply obtaining it
	 * from the default Movement Component, which is what the Input Manager will do.
	 * 
	 * @return
	 *      Returns the last input vector that was handled by the Pawn or Character.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Last Input Provider Interface")
	FVector GetLastInputVector() const;

};