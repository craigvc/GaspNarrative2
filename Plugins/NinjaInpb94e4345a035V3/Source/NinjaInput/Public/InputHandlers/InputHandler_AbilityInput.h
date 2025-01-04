// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputHandler_AbilityActivation.h"
#include "InputHandler_AbilityInput.generated.h"

class UNinjaInputManagerComponent;

/**
 * Triggers and interrupts Gameplay Abilities through their Input IDs.
 * 
 * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle
 * the Completed and Cancelled events which in turn, will interrupt the ability.
 */
UCLASS(DisplayName = "GAS: Activate Ability by Input")
class NINJAINPUT_API UInputHandler_AbilityInput : public UInputHandler_AbilityActivation
{
	
	GENERATED_BODY()

public:

	UInputHandler_AbilityInput();

    virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
        const UInputAction* InputAction) const override;
    
protected:

	/** Input ID to be sent to the Ability System Component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation")
	int32 InputID;

    // -- Begin Ability Activation Handler implementation
    virtual bool HasActiveAbility(UNinjaInputManagerComponent* Manager) const final override;
    
    virtual void ActivateAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;

    virtual void CancelAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;
    // -- End Ability Activation Handler implementation
    
};
