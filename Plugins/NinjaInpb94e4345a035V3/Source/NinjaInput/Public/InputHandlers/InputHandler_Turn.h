// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaInputHandler.h"
#include "InputHandler_Turn.generated.h"

/**
 * Rotates the character by adding values to the control rotation.
 * 
 * Usually relevant for the right thumbstick, for a twin-stick control scheme.
 */
UCLASS(meta = (DisplayName = "Character: Turn"))
class NINJAINPUT_API UInputHandler_Turn : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_Turn();

protected:

	/**
	 * Minimum magnitude required for the turn to be accepted.
	 * This is only relevant for analog input from a gamepad.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Turn")
	float MinimumMagnitudeToTurn;
	
	/** How fast the rotation interpolation happens. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Turn")
	float TurnSpeed;

	/** If any of these tags are present, rotation is blocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Turn")
	FGameplayTagContainer BlockRotationTags;
	
	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	/**
	 * Checks if the character is allowed to turn.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler|Turn")	
	bool CanTurn(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
	
	/**
	 * Effective implementation for the turn logic.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler|Turn")
	void Turn(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
	
};
