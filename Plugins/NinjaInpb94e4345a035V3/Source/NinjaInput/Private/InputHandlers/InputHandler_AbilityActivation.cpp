// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_AbilityActivation.h"

#include "AbilitySystemComponent.h"
#include "Components/NinjaInputManagerComponent.h"
#include "InputHandlers/NinjaInputAbilityActivationCheck.h"

UInputHandler_AbilityActivation::UInputHandler_AbilityActivation()
{
    bToggledActivation = false;
    bSendEventIfActive = false;
    bTriggerEventLocally = true;
    bTriggerEventOnServer = true;
    ActiveEventTag = FGameplayTag::EmptyTag;
    TriggerEvents.Add(ETriggerEvent::Triggered);
	AbilityActivationCheckClass = UNinjaInputAbilityActivationCheck::StaticClass();
}

int32 UInputHandler_AbilityActivation::SendGameplayEvent(const UNinjaInputManagerComponent* Manager,
	const FGameplayTag GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const
{
    check(IsValid(Manager));
    return Manager->SendGameplayEventToOwner(GameplayEventTag, Value, InputAction,
        bTriggerEventLocally, bTriggerEventOnServer);
}

void UInputHandler_AbilityActivation::HandleStartedEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction) const
{
	static constexpr float ElapsedTime = 0.f;
	HandleActivation(Manager, Value, InputAction, ElapsedTime);
}

void UInputHandler_AbilityActivation::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, const float ElapsedTime) const
{
	HandleActivation(Manager, Value, InputAction, ElapsedTime);
}

void UInputHandler_AbilityActivation::HandleActivation(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	if (EvaluateAbilityActivation(Value, InputAction))
	{
		if (!TryHandleActiveAbility(Manager, Value, InputAction))
		{
			ActivateAbility(Manager, Value, InputAction);
		}
	}
	else
	{
		CancelAbility(Manager, Value, InputAction);
	}
}

bool UInputHandler_AbilityActivation::EvaluateAbilityActivation(const FInputActionValue& Value,
	const UInputAction* InputAction) const
{
	if (IsValid(AbilityActivationCheckClass))
	{
		const UNinjaInputAbilityActivationCheck* ActivationCheck = GetDefault<UNinjaInputAbilityActivationCheck>(AbilityActivationCheckClass);
		return IsValid(ActivationCheck) && ActivationCheck->ShouldActivate(Value, InputAction);
	}

	return Value.IsNonZero();
}

bool UInputHandler_AbilityActivation::TryHandleActiveAbility(UNinjaInputManagerComponent* Manager,
	const FInputActionValue& Value, const UInputAction* InputAction) const
{
    if (HasActiveAbility(Manager))
    {
        if (bSendEventIfActive)
        {
            // ReSharper disable once CppExpressionWithoutSideEffects
            SendGameplayEvent(Manager, ActiveEventTag, Value, InputAction);
        }
        if (bToggledActivation)
        {
            CancelAbility(Manager, Value, InputAction);   
        }

        return true;
    }

    return false;
}

void UInputHandler_AbilityActivation::HandleCompletedEvent_Implementation(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction) const
{
    CancelAbility(Manager, Value, InputAction);
}

void UInputHandler_AbilityActivation::HandleCancelledEvent_Implementation(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction) const
{
    CancelAbility(Manager, Value, InputAction);
}

bool UInputHandler_AbilityActivation::HasActiveAbility(UNinjaInputManagerComponent* Manager) const
{
    // Child classes must implement this function adequately, based on their activation mode.
    checkNoEntry();
    return false;
}

void UInputHandler_AbilityActivation::ActivateAbility(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction) const
{
    // Child classes must implement this function adequately, based on their activation mode.
    checkNoEntry();
}

void UInputHandler_AbilityActivation::CancelAbility(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction) const
{
    // Child classes must implement this function adequately, based on their activation mode.
    checkNoEntry();
}