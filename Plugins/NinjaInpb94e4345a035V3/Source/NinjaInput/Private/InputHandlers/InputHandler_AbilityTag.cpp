// Ninja Bear Studio Inc., all rights reserved.
#include "InputHandlers/InputHandler_AbilityTag.h"

#include "AbilitySystemComponent.h"
#include "NinjaInputHandlerHelpers.h"
#include "Components/NinjaInputManagerComponent.h"

UInputHandler_AbilityTag::UInputHandler_AbilityTag()
{
	AbilityTags = FGameplayTagContainer::EmptyContainer;
	CancelFilterTags = FGameplayTagContainer::EmptyContainer;
}

bool UInputHandler_AbilityTag::CanHandle_Implementation(const ETriggerEvent& TriggerEvent,
	const UInputAction* InputAction) const
{
	const bool bHasTags = ensureMsgf(AbilityTags.IsEmpty() == false, TEXT("Please ensure to fill the Ability Tags!"));
	return Super::CanHandle_Implementation(TriggerEvent, InputAction) && bHasTags;
}

bool UInputHandler_AbilityTag::HasActiveAbility(UNinjaInputManagerComponent* Manager) const
{
    const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
    
   if (ensureMsgf(IsValid(AbilitySystemComponent), TEXT("No ASC received from the Input Manager.")) &&
        ensureMsgf(AbilityTags.IsValid(), TEXT("The Gameplay Tag Container must be valid.")))
    {
        TArray<FGameplayAbilitySpecHandle> Handles;
        AbilitySystemComponent->FindAllAbilitiesWithTags(Handles, AbilityTags);

        for (const FGameplayAbilitySpecHandle& Handle : Handles)
        {
            const FGameplayAbilitySpec* Spec = AbilitySystemComponent->FindAbilitySpecFromHandle(Handle);
            if (Spec != nullptr && Spec->Handle.IsValid() && Spec->IsActive())
            {
                return true;      
            }
        }
    }

    return false;
}

void UInputHandler_AbilityTag::ActivateAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
    const UInputAction* InputAction) const
{
    UAbilitySystemComponent* AbilitySystemComponent = Manager->GetAbilitySystemComponent();
    if (ensure(IsValid(AbilitySystemComponent)))
    {
        UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s is triggering abilities with tags %s."),
            *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), *AbilityTags.ToStringSimple());

        AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags);
    }
}

void UInputHandler_AbilityTag::CancelAbility(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
    const UInputAction* InputAction) const
{
    FNinjaInputHandlerHelpers::InterruptAbilityByTags(Manager, InputAction, AbilityTags, CancelFilterTags);
}