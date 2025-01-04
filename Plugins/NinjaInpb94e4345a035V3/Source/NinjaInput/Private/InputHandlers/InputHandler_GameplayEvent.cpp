// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_GameplayEvent.h"

#include "AbilitySystemComponent.h"
#include "NinjaInputHandlerHelpers.h"
#include "Components/NinjaInputManagerComponent.h"

UInputHandler_GameplayEvent::UInputHandler_GameplayEvent()
{
	EventTag = FGameplayTag::EmptyTag;
	TriggerEvents.Add(ETriggerEvent::Triggered);
}

void UInputHandler_GameplayEvent::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
    FNinjaInputHandlerHelpers::SendGameplayEvent(Manager, EventTag, Value, InputAction);
}
