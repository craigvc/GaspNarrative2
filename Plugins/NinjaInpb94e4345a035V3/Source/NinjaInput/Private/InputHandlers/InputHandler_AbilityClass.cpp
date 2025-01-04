// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_AbilityClass.h"

#include "AbilitySystemComponent.h"
#include "NinjaInputHandlerHelpers.h"
#include "Abilities/GameplayAbility.h"
#include "Components/NinjaInputManagerComponent.h"

UInputHandler_AbilityClass::UInputHandler_AbilityClass()
{
	AbilityClass = nullptr;
}

bool UInputHandler_AbilityClass::CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
	const UInputAction* InputAction) const
{
	const bool bHasClass = ensureMsgf(IsValid(AbilityClass), TEXT("Please ensure the Ability Class is set!"));
	return Super::CanHandle_Implementation(TriggerEvent, InputAction) && bHasClass;
}

bool UInputHandler_AbilityClass::HasActiveAbility(UNinjaInputManagerComponent* Manager) const
{
    const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
    
    if (ensureMsgf(IsValid(AbilitySystemComponent), TEXT("No ASC received from the Input Manager.")) &&
        ensureMsgf(IsValid(AbilityClass), TEXT("The Gameplay Ability Class must be valid.")))
    {
        const FGameplayAbilitySpec* Spec = AbilitySystemComponent->FindAbilitySpecFromClass(AbilityClass);
        return Spec != nullptr && Spec->Handle.IsValid() && Spec->IsActive();
    }

    return false;
}

void UInputHandler_AbilityClass::ActivateAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
    const UInputAction* InputAction) const
{
    UAbilitySystemComponent* AbilitySystemComponent = Manager->GetAbilitySystemComponent();
    if (ensure(IsValid(AbilitySystemComponent)))
    {
        UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s is triggering ability with class %s."),
            *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), *GetNameSafe(AbilityClass));

        AbilitySystemComponent->TryActivateAbilityByClass(AbilityClass);
    }
}

void UInputHandler_AbilityClass::CancelAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
    const UInputAction* InputAction) const
{
    FNinjaInputHandlerHelpers::InterruptAbilityByClass(Manager, InputAction, AbilityClass);
}
