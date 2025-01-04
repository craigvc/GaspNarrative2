// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AbilitySystemComponent.h"
#include "Components/NinjaInputManagerComponent.h"

struct FNinjaInputHandlerHelpers
{
    /**
     * Checks if the owner's ASC passes the provided query test.
     * In this context, an empty query will be ignored and the test will return true.
     */
    static bool HasTags(const UNinjaInputManagerComponent* Manager, const FGameplayTagQuery& Query)
    {
        if (Query.IsEmpty())
        {
            // If empty, ignore the execution, but consider valid.
            return true;
        }

        const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
        checkf(IsValid(AbilitySystemComponent), TEXT("No ASC received from the Input Manager."));
    
        FGameplayTagContainer OutContainer;
        AbilitySystemComponent->GetOwnedGameplayTags(OutContainer);
        return OutContainer.MatchesQuery(Query);
    }
    
    /**
     * Sends a Gameplay Event, through the manager's ASC.
     *
     * @param Manager               Input manager requesting this event and able to provide the ability component.
     * @param GameplayEventTag      Tag representing this event, being watched by abilities that should react to it.
     * @param Value                 Input value, to be used as the payload's magnitude.
     * @param InputAction           Input Action that triggered the event, provided as an optional object.
     * @param Context               Arbitrary description of the context in which this event is being invoked.
     * @return                      Amount of activations triggered by this event.
     */
    // ReSharper disable once CppPassValueParameterByConstReference
    static int32 SendGameplayEvent(const UNinjaInputManagerComponent* Manager, const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction, const FString Context = TEXT("Local Execution"))
    {
        int32 Activations = 0;
        const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
    
        if (ensureMsgf(IsValid(AbilitySystemComponent), TEXT("No ASC received from the Input Manager.")) &&
            ensureMsgf(GameplayEventTag.IsValid(), TEXT("The Gameplay Event Tag must be valid.")))
        {
            FGameplayEventData* Payload = new FGameplayEventData();
            Payload->Instigator = Manager->GetOwner();
            Payload->Target = Manager->GetOwner();
            Payload->EventTag = GameplayEventTag;
            Payload->EventMagnitude = Value.GetMagnitude();
            Payload->OptionalObject = InputAction;

            Activations = AbilitySystemComponent->HandleGameplayEvent(GameplayEventTag, Payload);
            
            UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s triggered event %s with %d activations. Context: %s"),
                *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), *GameplayEventTag.ToString(), Activations, *Context);
        }

        return Activations;
    }

    /**
     * Interrupts an Ability by its class.
     */
    static void InterruptAbilityByClass(const UNinjaInputManagerComponent* Manager, const UInputAction* InputAction, const TSubclassOf<UGameplayAbility>& AbilityClass)
    {
        const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
        if (ensure(IsValid(AbilitySystemComponent)))
        {
            const FGameplayAbilitySpec* Spec = AbilitySystemComponent->FindAbilitySpecFromClass(AbilityClass);
            if (Spec != nullptr && Spec->Handle.IsValid())
            {
                UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s is interrupting ability with class %s."),
                    *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), *GetNameSafe(AbilityClass));
                
                AbilitySystemComponent->CancelAbilityHandle(Spec->Handle);
            }
        }
    }

    /**
     * Interrupts an Ability by Gameplay Tags.
     */
    static void InterruptAbilityByTags(const UNinjaInputManagerComponent* Manager, const UInputAction* InputAction, const FGameplayTagContainer& AbilityTags, const FGameplayTagContainer& CancelFilterTags)
    {
        const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
        if (ensure(IsValid(AbilitySystemComponent)))
        {
            UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s is interrupting abilities with tags %s."),
                *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), *AbilityTags.ToStringSimple());

            AbilitySystemComponent->CancelAbilities(&AbilityTags, &CancelFilterTags);
        }
    }

    /**
     * Interrupts an Ability by its Input ID.
     */
    static void InterruptAbilityByInputID(const UNinjaInputManagerComponent* Manager, const UInputAction* InputAction, const int32 InputID)
    {
        const TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = Manager->GetAbilitySystemComponent();
        if (ensure(IsValid(AbilitySystemComponent)))
        {
            UE_LOG(LogNinjaInputHandler, Verbose, TEXT("[%s] Action %s is interrupting abilities with ID %d."),
                *GetNameSafe(Manager->GetOwner()), *GetNameSafe(InputAction), InputID);
			
            AbilitySystemComponent->AbilityLocalInputReleased(InputID);
        }
    }
};
