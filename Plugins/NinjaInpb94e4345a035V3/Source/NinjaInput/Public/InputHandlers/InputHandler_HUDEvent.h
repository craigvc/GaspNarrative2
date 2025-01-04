// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_HUDEvent.generated.h"

/**
 * Triggers an User Interface Event
 *
 * It requires the Player Controller to have a valid HUD instance that implements the
 * HUD Event Dispatcher Interface. Please check the interface docs for more information.
 */
UCLASS(DisplayName = "HUD: Send UI Event")
class NINJAINPUT_API UInputHandler_HUDEvent : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_HUDEvent();

protected:

	/** Gameplay Tag representing the event to broadcast. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HUD Event")
	FGameplayTag EventTag;

	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
		const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;

};
