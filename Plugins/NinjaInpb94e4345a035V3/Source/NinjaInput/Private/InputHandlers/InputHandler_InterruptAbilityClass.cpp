// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_InterruptAbilityClass.h"

#include "NinjaInputHandlerHelpers.h"
#include "Abilities/GameplayAbility.h"

UInputHandler_InterruptAbilityClass::UInputHandler_InterruptAbilityClass()
{
    AbilityClass = nullptr;
}

bool UInputHandler_InterruptAbilityClass::CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
    const UInputAction* InputAction) const
{
    const bool bHasClass = ensureMsgf(IsValid(AbilityClass), TEXT("Please ensure the Ability Class is set!"));
    return Super::CanHandle_Implementation(TriggerEvent, InputAction) && bHasClass;
}

void UInputHandler_InterruptAbilityClass::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
    FNinjaInputHandlerHelpers::InterruptAbilityByClass(Manager, InputAction, AbilityClass);
}
