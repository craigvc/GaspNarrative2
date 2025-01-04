// Ninja Bear Studio Inc., all rights reserved.
#include "InputActions/InputTriggerDoubleTap.h"

ETriggerState UInputTriggerDoubleTap::UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput,
	const FInputActionValue ModifiedValue, const float DeltaTime)
{
	const float LastHeldDuration = HeldDuration;
	ETriggerState State = Super::UpdateState_Implementation(PlayerInput, ModifiedValue, DeltaTime);

	if (IsActuated(LastValue) && State == ETriggerState::None && LastHeldDuration < TapReleaseTimeThreshold)
	{
		if (Taps == 0)
		{
			Taps++;
			LastTapTime = DeltaTime;
		}
		else if (Taps == 1 && LastTapTime <= TapIntervalThreshold)
		{
			State = ETriggerState::Triggered;
			Taps = 0;
			LastTapTime = 0;
		}
	}
	else if (HeldDuration >= TapReleaseTimeThreshold)
	{
		// Once we pass the threshold halt all triggering until released.
		State = ETriggerState::None;
	}

	return State;
}
