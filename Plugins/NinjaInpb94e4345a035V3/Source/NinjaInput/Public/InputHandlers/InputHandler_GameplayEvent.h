// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaInputHandler.h"
#include "InputHandler_GameplayEvent.generated.h"

/**
 * Triggers a Gameplay Event.
 *
 * The Value and Action are sent in the Gameplay Event as Magnitude and the first Additional Object,
 * so they can be accessed by Gameplay Abilities interested in those values.
 */
UCLASS(DisplayName = "GAS: Send Gameplay Event")
class NINJAINPUT_API UInputHandler_GameplayEvent : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_GameplayEvent();

protected:

	/** Gameplay Tag representing the event to broadcast. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay Event")
	FGameplayTag EventTag;

	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
		const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;
	
};
