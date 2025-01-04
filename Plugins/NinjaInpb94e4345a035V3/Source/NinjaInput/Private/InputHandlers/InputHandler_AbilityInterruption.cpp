// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_AbilityInterruption.h"

#include "Components/NinjaInputManagerComponent.h"

UInputHandler_AbilityInterruption::UInputHandler_AbilityInterruption()
{
    TriggerEvents.Add(ETriggerEvent::Triggered);
}
