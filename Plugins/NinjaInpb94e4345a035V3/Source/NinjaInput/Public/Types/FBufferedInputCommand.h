// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "FBufferedInputCommand.generated.h"

struct FInputActionInstance;

class UNinjaInputManagerComponent;
class UNinjaInputHandler;

/**
 * Represents a buffered command that may be executed later.
 */
USTRUCT(BlueprintType, meta = (
	HasNativeBreak = "/Script/NinjaInput.NinjaInputFunctionLibrary.BreakBufferedInputCommand",
	HasNativeMake = "/Script/NinjaInput.NinjaInputFunctionLibrary.MakeBufferedInputCommand"
))
struct FBufferedInputCommand
{
    
    GENERATED_BODY()

private:
	
    /** The manager that registered this command. */
	UPROPERTY()
    TObjectPtr<UNinjaInputManagerComponent> Source;
    
    /** Handler that must be executed. */
	UPROPERTY()
    TObjectPtr<UNinjaInputHandler> Handler;

    /** The value that needs to be processed. */
    TSharedPtr<FInputActionInstance> ActionInstancePtr;

    /** Trigger that originated the action. */
    ETriggerEvent TriggerEvent;

public:
	
    FBufferedInputCommand()
    {
    	Source = nullptr;
        Handler = nullptr;
    	ActionInstancePtr.Reset();
        TriggerEvent = ETriggerEvent::None;
    }

    explicit FBufferedInputCommand(UNinjaInputManagerComponent* Source
        , UNinjaInputHandler* Handler
        , const FInputActionInstance& ActionInstance
        , const ETriggerEvent TriggerEvent)
        : Source(Source)
        , Handler(Handler)
        , TriggerEvent(TriggerEvent)
    {
    	ActionInstancePtr = MakeShared<FInputActionInstance>(ActionInstance);
    }

	~FBufferedInputCommand()
    {
		ActionInstancePtr.Reset();    
    }
	
    /**
     * Evaluates if this command has valid data and can be executed.
     */
    bool IsValid() const;
    
    /**
     * Executes the command represented by this entry, on a given context.
     */
    void Execute() const;

	/**
	 * Provides the Input Manager Component that originated this command.
	 */
	UNinjaInputManagerComponent* GetSource() const;

	/**
	 * Provides the Input Handler that is being buffered and should be triggered.
	 */
	UNinjaInputHandler* GetHandler() const;
	
    /**
     * Provides the Action Instance assigned to this command, if any.
     * Make sure to check the pointer to avoid null errors.
     */
    const FInputActionInstance* GetActionInstance() const;

	/**
	 * Provides the Input Action assigned to the current action instance.
	 * Only valid if the Action Instance is also provided.
	 */
	const UInputAction* GetSourceAction() const;
	
	/**
	 * Provides the Trigger Event that originated this command.
	 */
	ETriggerEvent GetTriggerEvent() const;
	
    // Within the context of a buffered command, we can to determine equality by comparing the
    // action that should be handled, its trigger and the Handler that is supposed to execute.
    FORCEINLINE bool operator == (const FBufferedInputCommand& In) const
    {
        return In.ActionInstancePtr->GetSourceAction() == ActionInstancePtr->GetSourceAction()
    		&& In.Handler == Handler && In.TriggerEvent == TriggerEvent;
    }

    // Within the context of a buffered command, we can determine inequality by comparing the
    // action that should be handled, its trigger and the Handler that is supposed to execute.
    FORCEINLINE bool operator != (const FBufferedInputCommand& In) const
    {
        return In.ActionInstancePtr->GetSourceAction() != ActionInstancePtr->GetSourceAction()
    		|| In.Handler != Handler
    		|| In.TriggerEvent != TriggerEvent;
    }
};