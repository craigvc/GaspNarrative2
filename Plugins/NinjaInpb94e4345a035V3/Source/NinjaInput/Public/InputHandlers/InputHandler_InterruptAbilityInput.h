// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "InputHandler_AbilityInterruption.h"
#include "InputHandler_InterruptAbilityInput.generated.h"

/**
 * Interrupts a Gameplay Ability by Input ID.
 */
UCLASS(DisplayName = "GAS: Interrupt Ability by Input")
class NINJAINPUT_API UInputHandler_InterruptAbilityInput : public UInputHandler_AbilityInterruption
{
    
    GENERATED_BODY()

public:

    UInputHandler_InterruptAbilityInput();

    virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
        const UInputAction* InputAction) const override;
    
protected:

    /** Input ID to be sent to the Ability System Component. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Interruption")
    int32 InputID;

    virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
        const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;
    
};
