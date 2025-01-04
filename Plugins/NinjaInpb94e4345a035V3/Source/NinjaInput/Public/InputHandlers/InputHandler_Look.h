// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_Look.generated.h"

/**
 * Translates mouse or gamepad commands into camera input.
 */
UCLASS(meta = (DisplayName = "Character: Look"))
class NINJAINPUT_API UInputHandler_Look : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_Look();

protected:

	/**
	 * If true, applies the World Delta Seconds to the input.
	 * Useful for gamepad input, as per established by the GASP sample.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Look")
	bool bApplyWorldDeltaSeconds;
	
	/**
	 * Minimum magnitude required for the camera movement to be accepted.
	 * This is only relevant for analog input from a gamepad.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Look")
	float MinimumMagnitudeToLook;
	
	/** If any of these tags are present, camera pitch is blocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Look")
	FGameplayTagContainer BlockPitchTags;

	/** If any of these tags are present, camera yaw is blocked. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Look")
	FGameplayTagContainer BlockYawTags;
	
	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	/**
	 * Checks if the character is allowed to look around.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Look")	
	bool CanLook(UNinjaInputManagerComponent* Manager) const;

	/**
	 * Checks if the character is allowed to change camera pitch.
	 * Checked after evaluating if camera movement is fully blocked.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Look")	
	bool CanChangePitch(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;

	/**
	 * Checks if the character is allowed to change camera yaw.
	 * Checked after evaluating if camera movement is fully blocked.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Look")	
	bool CanChangeYaw(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
	
	/**
	 * Effective implementation the camera movement (look).
	 *
	 * @param Manager		Manager component providing access to the affected character.
	 * @param Value			Event magnitude applied to the camera.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Look")
	void Look(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;

};
