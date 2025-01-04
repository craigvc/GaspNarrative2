// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_CharacterJump.generated.h"

/**
 * Replicates the original Jump setup for Character owners.
 *
 * Avoid mixing default Character actions, such as this one, when you are using the Gameplay
 * Ability System as it provides a Jump Gameplay Ability that can be used instead.
 */
UCLASS(meta = (DisplayName = "Character: Jump"))
class NINJAINPUT_API UInputHandler_CharacterJump : public UNinjaInputHandler
{
	
	GENERATED_BODY()

public:

	UInputHandler_CharacterJump();

protected:

	/**
	 * Minimum magnitude required for the jump to be accepted.
	 * This is only relevant for analog input from a gamepad.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Jump")
	float MinimumMagnitudeToJump;

	/** Gameplay tags that, if present, will block the ability of jumping. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Jump")
	FGameplayTagContainer BlockJumpTags;

	/**
	 * Checks if the character is allowed to jump.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler|Jump")	
	bool CanJump(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
	
	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const override;

	virtual void HandleCompletedEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction) const override;
	
};
