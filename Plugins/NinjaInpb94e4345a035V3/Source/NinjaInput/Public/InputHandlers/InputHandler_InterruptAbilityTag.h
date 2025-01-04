// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputHandler_AbilityInterruption.h"
#include "InputHandler_InterruptAbilityTag.generated.h"

/**
 * Interrupts a Gameplay Ability by gameplay tags.
 */
UCLASS(DisplayName = "GAS: Interrupt Ability by Tags")
class NINJAINPUT_API UInputHandler_InterruptAbilityTag : public UInputHandler_AbilityInterruption
{
    
    GENERATED_BODY()

public:

    UInputHandler_InterruptAbilityTag();

    virtual bool CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
        const UInputAction* InputAction) const override;
    
protected:

    /** Gameplay tags used to trigger one or many abilities. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Interruption")
    FGameplayTagContainer AbilityTags;

    /**
     * Tags used to filter-out abilities that should not be cancelled.
     */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Interruption")
    FGameplayTagContainer CancelFilterTags;

    virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
        const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const override;
    
};
