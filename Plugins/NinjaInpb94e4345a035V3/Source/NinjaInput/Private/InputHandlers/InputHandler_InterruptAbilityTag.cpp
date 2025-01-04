// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_InterruptAbilityTag.h"

#include "NinjaInputHandlerHelpers.h"

UInputHandler_InterruptAbilityTag::UInputHandler_InterruptAbilityTag()
{
    AbilityTags = FGameplayTagContainer::EmptyContainer;
    CancelFilterTags = FGameplayTagContainer::EmptyContainer;
}

bool UInputHandler_InterruptAbilityTag::CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
    const UInputAction* InputAction) const
{
    const bool bHasTags = ensureMsgf(AbilityTags.IsEmpty() == false, TEXT("Please ensure to fill the Ability Tags!"));
    return Super::CanHandle_Implementation(TriggerEvent, InputAction) && bHasTags;
}

void UInputHandler_InterruptAbilityTag::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager,
    const FInputActionValue& Value, const UInputAction* InputAction, float ElapsedTime) const
{
    FNinjaInputHandlerHelpers::InterruptAbilityByTags(Manager, InputAction, AbilityTags, CancelFilterTags);    
}
