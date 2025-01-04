// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_AbilityConfirm.generated.h"

/**
 * Sends a target confirm request to the Ability System.
 */
UCLASS(DisplayName = "GAS: Ability Target Confirm")
class NINJAINPUT_API UInputHandler_AbilityConfirm : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_AbilityConfirm();

protected:

	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
		const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;
	
};
