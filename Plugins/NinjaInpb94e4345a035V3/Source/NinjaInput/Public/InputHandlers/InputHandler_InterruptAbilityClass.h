// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputHandler_AbilityInterruption.h"
#include "InputHandler_InterruptAbilityClass.generated.h"

class UGameplayAbility;

/**
 * Interrupts a Gameplay Ability by Class.
 */
UCLASS(DisplayName = "GAS: Interrupt Ability by Class")
class NINJAINPUT_API UInputHandler_InterruptAbilityClass : public UInputHandler_AbilityInterruption
{
    
    GENERATED_BODY()

public:

    UInputHandler_InterruptAbilityClass();

    virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
        const UInputAction* InputAction) const override;
    
protected:

    /** Gameplay Ability Class used to interrupt an ability. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Interruption")
    TSubclassOf<UGameplayAbility> AbilityClass;
    
    virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
        const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;

};
