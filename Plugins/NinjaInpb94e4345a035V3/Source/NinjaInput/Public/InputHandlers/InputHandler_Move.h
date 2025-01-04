// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaInputHandler.h"
#include "InputHandler_Move.generated.h"

/**
 * Handles character movement.
 */
UCLASS(meta = (DisplayName = "Character: Move"))
class NINJAINPUT_API UInputHandler_Move : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_Move();

protected:

	/** Applies movement in world space, which can be useful for locomotion testing. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Move")
	bool bUseWorldSpace;
	
	/**
	 * Minimum magnitude required for the movement to be accepted.
	 * This is only relevant for analog input from a gamepad.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Move")
	float MinimumMagnitudeToMove;
	
	/** If any of these tags are present, movement is blocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Move")
	FGameplayTagContainer BlockMovementTags;
	
	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	/**
	 * Checks if the character is allowed to move.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Move")	
	bool CanMove(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
	
	/**
	 * Effective implementation for moving a character.
	 *
	 * @param Manager		Manager component providing access to the affected character.
	 * @param Value			Event magnitude applied to the movement.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Move")
	void Move(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;

	/**
	 * Processes the Input Value considering any values from the Input Manager, such as the "AnalogStickBehavior".
	 *
	 * @param Manager		Manager component providing access to the affected character.
	 * @param InputValue	Event magnitude applied to the movement.
	 * @return				The scaled input value.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Move")
	FVector2D GetMovementInputScaleValue(const UNinjaInputManagerComponent* Manager, const FVector2D& InputValue) const;
	
};
