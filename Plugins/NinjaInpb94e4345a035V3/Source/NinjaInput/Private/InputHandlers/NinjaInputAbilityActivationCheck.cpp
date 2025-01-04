// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/NinjaInputAbilityActivationCheck.h"

#include "InputAction.h"
#include "InputActions/InputTriggerDoubleTap.h"

UNinjaInputAbilityActivationCheck::UNinjaInputAbilityActivationCheck()
{
	NonValuedTriggerClasses.Add(UInputTriggerTap::StaticClass());
	NonValuedTriggerClasses.Add(UInputTriggerDoubleTap::StaticClass());
}

bool UNinjaInputAbilityActivationCheck::ShouldActivate_Implementation(const FInputActionValue& Value, const UInputAction* InputAction) const
{
	// Even though the Evaluate method will check all triggers, we can return faster and
	// avoid iterations by checking the value right away. If it's true, then we are good!
	return Value.Get<bool>() || EvaluateActionTriggers(Value, InputAction);
}

bool UNinjaInputAbilityActivationCheck::EvaluateActionTriggers(const FInputActionValue& Value, const UInputAction* InputAction) const
{
	for (const UInputTrigger* Trigger : InputAction->Triggers)
	{
		if (Trigger->IsActuated(Value) || NonValuedTriggerClasses.Contains(Trigger->GetClass()))
		{
			return true;
		}
	}

	return false;
}
