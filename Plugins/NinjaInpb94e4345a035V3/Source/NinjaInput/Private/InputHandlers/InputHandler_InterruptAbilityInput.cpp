// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_InterruptAbilityInput.h"

#include "NinjaInputHandlerHelpers.h"

UInputHandler_InterruptAbilityInput::UInputHandler_InterruptAbilityInput()
{
    InputID = INDEX_NONE;
}

bool UInputHandler_InterruptAbilityInput::CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
    const UInputAction* InputAction) const
{
    const bool bHasClass = ensureMsgf(InputID > INDEX_NONE, TEXT("Please ensure the Input ID is valid!"));
    return Super::CanHandle_Implementation(TriggerEvent, InputAction) && bHasClass;
}

void UInputHandler_InterruptAbilityInput::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
    FNinjaInputHandlerHelpers::InterruptAbilityByInputID(Manager, InputAction, InputID);
}
