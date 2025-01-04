// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "FProcessedBinding.generated.h"

class UInputAction;

/**
 * Stores a registered binding that can be accessed later.
 */
USTRUCT(BlueprintType)
struct FProcessedBinding
{
	
    GENERATED_BODY()

    /** Input Action that this binding is observing. */
    UPROPERTY()
    TObjectPtr<const UInputAction> InputAction;

    /** Trigger Event that this binding is observing. */
    ETriggerEvent TriggerEvent;

    /** The Handle for this binding, which can be used to remove it later. */
    FEnhancedInputActionEventBinding* Handle;

    FProcessedBinding()
    {
        InputAction = nullptr;
        TriggerEvent = ETriggerEvent::None;
        Handle = nullptr;
    }
	
    explicit FProcessedBinding(const UInputAction* InputAction, const ETriggerEvent TriggerEvent, FEnhancedInputActionEventBinding* Handle)
        : InputAction(InputAction)
        , TriggerEvent(TriggerEvent)
        , Handle(Handle)
    {
    }
};