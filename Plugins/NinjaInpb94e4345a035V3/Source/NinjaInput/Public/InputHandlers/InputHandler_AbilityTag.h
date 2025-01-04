// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputHandler_AbilityActivation.h"
#include "InputHandler_AbilityTag.generated.h"

/**
 * Triggers and interrupts Gameplay Abilities using a Gameplay Tag.
 *
 * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle
 * the Completed and Cancelled events which in turn, will interrupt the ability.
 */
UCLASS(DisplayName = "GAS: Activate Ability by Tags")
class NINJAINPUT_API UInputHandler_AbilityTag : public UInputHandler_AbilityActivation
{
	
	GENERATED_BODY()

public:

	UInputHandler_AbilityTag();

	virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
	    const UInputAction* InputAction) const override;
	
protected:

	/** Gameplay tags used to trigger one or many abilities. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation")
	FGameplayTagContainer AbilityTags;

	/**
	 * Tags used to filter-out abilities that should not be cancelled.
	 * 
	 * These are relevant in two scenarios:
	 *
	 * 1. Toggling is enabled and the ability is being interrupted.
	 * 2. Tracking the Completed or Cancelled states, which will interrupt the ability.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation")
	FGameplayTagContainer CancelFilterTags;
	
    // -- Begin Ability Activation Handler implementation
    virtual bool HasActiveAbility(UNinjaInputManagerComponent* Manager) const final override;
    
    virtual void ActivateAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;

    virtual void CancelAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
        const UInputAction* InputAction) const final override;
    // -- End Ability Activation Handler implementation
    
};
