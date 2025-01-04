// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "UObject/Object.h"
#include "NinjaInputHandler.generated.h"

class UNinjaInputManagerComponent;
class UWorld;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInputHandler, Log, All);

/**
 * Basic implementation of an Input Handler.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, DefaultToInstanced, EditInlineNew, ClassGroup = NinjaInput)
class NINJAINPUT_API UNinjaInputHandler : public UObject
{
	
	GENERATED_BODY()

public:

    UNinjaInputHandler();

    // -- Begin Object implementation
    virtual UWorld* GetWorld() const override;
    // -- End Object implementation

	/**
	 * Checks if this handler can deal with a given action/trigger.
	 *
	 * @param TriggerEvent
	 *      The event to be checked.
	 *      
	 * @param InputAction
	 *      The input action to be checked.
	 *
	 * @return
	 *		A boolean value informing if this Action Handler is capable of handling a given
	 *		combination of Trigger Event and Input Action.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	bool CanHandle(const ETriggerEvent& TriggerEvent, const UInputAction* InputAction) const;
    
	/**
	 * Handles an Input Action, triggered by the Enhanced Input subsystem.
	 *
	 * It should not be necessary to override this method to handle triggers. Instead, consider
	 * implementing each one of the dedicated Handler methods for each relevant Trigger Event.
	 *
	 * @param Manager
	 *      The Actor Component assigned to the owning character invoking this handler.
	 *
	 * @param ActionInstance
	 *      The instance from which details such as the Input Action, value and elapsed time can be obtained.
	 *
	 * @param TriggerEvent
	 *      Type of event that is triggering this handler.
	 */
	void HandleInput(UNinjaInputManagerComponent* Manager, const FInputActionInstance& ActionInstance,
		const ETriggerEvent& TriggerEvent) const;

    /**
     * Informs if this handler can be buffered.
     *
     * @return
     *      A boolean value informing if this Input Handler can be buffered, meaning that if the
     *      Input Buffer is open, than this won't be executed immediately. Instead, it will be
     *      executed later, when the buffer is closed and released.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Handler")
    bool CanBeBuffered() const;

    /**
     * Sets the world pointer for easy access. Meant to be invoked by the Input Manager.
     * 
     * @param WorldReference
     *      The reference to the UWorld in which this handler is executing.
     */
    void SetWorld(UWorld* WorldReference);

protected:

	/** Actions that may trigger this input. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Handler")
	TArray<TObjectPtr<UInputAction>> InputActions;

	/** Triggers that will invoke the handler. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Handler")
	TArray<ETriggerEvent> TriggerEvents;

    /** Informs if this handler can be buffered. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Handler")
    bool bCanBeBuffered;
	
	/**
	 * Handles the Started event.
	 *
	 * @param Manager		The Actor Component assigned to the owning character invoking this handler.
	 * @param Value			Final Action value to be applied to the owning character.
	 * @param InputAction	Additional information about the Input Action that triggered this handler.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	void HandleStartedEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction) const;

	/**
	 * Handles the Triggered event.
	 *
	 * @param Manager		The Actor Component assigned to the owning character invoking this handler.
	 * @param Value			Final Action value to be applied to the owning character.
	 * @param InputAction	Additional information about the Input Action that triggered this handler.
	 * @param ElapsedTime	Total time the action has been evaluating triggering (Ongoing & Triggered).
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	void HandleTriggeredEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const;
	
	/**
	 * Handles the Ongoing event.
	 *
	 * @param Manager		The Actor Component assigned to the owning character invoking this handler.
	 * @param Value			Final Action value to be applied to the owning character.
	 * @param InputAction	Additional information about the Input Action that triggered this handler.
	 * @param ElapsedTime	Total time the action has been evaluating triggering (Ongoing & Triggered).
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	void HandleOngoingEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction, float ElapsedTime) const;
	
	/**
	 * Handles the Completed event.
	 *
	 * @param Manager		The Actor Component assigned to the owning character invoking this handler.
	 * @param Value			Final Action value to be applied to the owning character.
	 * @param InputAction	Additional information about the Input Action that triggered this handler.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	void HandleCompletedEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction) const;

	/**
	 * Handles the Cancelled event.
	 *
	 * @param Manager		The Actor Component assigned to the owning character invoking this handler.
	 * @param Value			Final Action value to be applied to the owning character.
	 * @param InputAction	Additional information about the Input Action that triggered this handler.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Input Handler")
	void HandleCancelledEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value,
		const UInputAction* InputAction) const;

	/**
	 * Checks if any of the provided tags is present in the owner's ASC.
	 *
	 * @param Manager		Component that will provide access to the Ability Component.
	 * @param Tags			Tags that will be checked in the owner.
	 * 
	 * @return
	 *		A boolean value informing if any tags is present in the owner's ASC. Also, if the
	 *		owner does not have this component, then the result will be false as well.
	 */
	UFUNCTION(BlueprintPure, Category = "Input Handler")
	static bool HasAnyTags(const UNinjaInputManagerComponent* Manager, const FGameplayTagContainer& Tags);

private:

    /** Weak reference to the world pointer. Should be valid during all executions triggered by the manager. */
    TWeakObjectPtr<UWorld> WorldPtr;
    
    void AddOnScreenDebugMessage(const UNinjaInputManagerComponent* Manager, const FInputActionInstance& ActionInstance,
        const ETriggerEvent& TriggerEvent) const;

#if WITH_EDITOR
public:
	
    /** Checks if this handler has any Input Action. */
    bool HasAnyInputActions() const;

    /** Checks if this handler has any Trigger Events. */
    bool HasAnyTriggerEvents() const;
	
    /** Checks if this Handler is compatible with a certain action. */
    bool HandlesAction(const UInputAction* InputAction) const;

#endif
    
};
