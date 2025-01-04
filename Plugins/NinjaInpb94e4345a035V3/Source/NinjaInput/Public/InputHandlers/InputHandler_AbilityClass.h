// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputHandler_AbilityActivation.h"
#include "InputHandler_AbilityClass.generated.h"

class UGameplayAbility;

/**
 * Triggers and interrupts Gameplay Abilities targeted by their class definition.
 *
 * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle
 * the Completed and Cancelled events which in turn, will interrupt the ability.
 */
UCLASS(DisplayName = "GAS: Activate Ability by Class")
class NINJAINPUT_API UInputHandler_AbilityClass : public UInputHandler_AbilityActivation
{
	
	GENERATED_BODY()

public:

	UInputHandler_AbilityClass();

	virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
	    const UInputAction* InputAction) const override;
	
protected:

	/** Gameplay Ability class used to trigger an ability. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation")
	TSubclassOf<UGameplayAbility> AbilityClass;

    // -- Begin Ability Activation Handler implementation
    virtual bool HasActiveAbility(UNinjaInputManagerComponent* Manager) const final override;
    
    virtual void ActivateAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;

    virtual void CancelAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;
    // -- End Ability Activation Handler implementation
    
};
