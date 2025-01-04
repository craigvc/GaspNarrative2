// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_AbilityCancel.generated.h"

/**
 * Sends a target cancel request to the Ability System.
 */
UCLASS(DisplayName = "GAS: Ability Target Cancel")
class NINJAINPUT_API UInputHandler_AbilityCancel : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_AbilityCancel();

protected:

	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
		const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;
	
};
