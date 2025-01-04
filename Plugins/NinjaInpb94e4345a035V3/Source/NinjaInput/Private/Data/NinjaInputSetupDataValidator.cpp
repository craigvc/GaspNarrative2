// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaInputSetupDataValidator.h"

#if WITH_EDITOR

#include "InputMappingContext.h"
#include "NinjaInputHandler.h"
#include "Data/NinjaInputSetupDataAsset.h"
#include "Misc/DataValidation.h"

#define LOCTEXT_NAMESPACE "InputSetupNamespace"
EDataValidationResult FNinjaInputSetupDataValidator::ValidateInputSetupData(const UNinjaInputSetupDataAsset* SetupData, FDataValidationContext& Context)
{
    bool bHasContext = true;
    if (!IsValid(SetupData->InputMappingContext))
    {
        const FText Message = NSLOCTEXT("InputSetupNamespace", "MissingMappingContext", "Missing Input Mapping Context!");
        Context.AddError(Message);
        bHasContext = false;
    }

    bool bHasHandlers = true;
    if (SetupData->InputHandlers.IsEmpty())
    {
        const FText Message = NSLOCTEXT("InputSetupNamespace", "MissingInputHandlers", "Missing Input Handlers!");
        Context.AddError(Message);
        bHasHandlers = false;
    }

    if (bHasContext && bHasHandlers)
    {
    	// Check that all Input Handlers are valid.
    	// No empty lines, all have at least one action and trigger.
    	//
    	for (int32 Idx = 0; Idx < SetupData->InputHandlers.Num(); ++Idx)
    	{
    		const UNinjaInputHandler* Handler = SetupData->InputHandlers[Idx];
    		if (IsValid(Handler))
    		{
    			FFormatNamedArguments Args;
    			Args.Add(TEXT("Handler"), FText::FromString(GetNameSafe(Handler)));
                	
    			if (!Handler->HasAnyTriggerEvents())
    			{
    				const FText HandlerWithoutTriggerMessage = FText::Format(NSLOCTEXT("InputSetupNamespace", "HandlerWithoutTrigger", "No Trigger Events assigned to Handler {Handler}!"), Args);
    				Context.AddError(HandlerWithoutTriggerMessage);
    			}

    			if (!Handler->HasAnyInputActions())
    			{
    				const FText HandlerWithoutActionMessage = FText::Format(NSLOCTEXT("InputSetupNamespace", "HandlerWithoutAction", "No Input Actions assigned to Handler {Handler}!"), Args);
    				Context.AddError(HandlerWithoutActionMessage);
    			}
    		}
    		else
    		{
    			FFormatNamedArguments Args;
    			Args.Add(TEXT("Position"), FText::FromString(FString::Printf(TEXT("%d"), Idx + 1)));
                	
    			const FText InvalidInputHandlerMessage = FText::Format(NSLOCTEXT("InputSetupNamespace", "InvalidInputHandler", "Empty entry in the Handler List, position {Position}!"), Args);
    			Context.AddError(InvalidInputHandlerMessage);
    		}
    	}

    	TArray<const UInputAction*> ActionsToCheck;
    	TArray<const UInputAction*> MatchedActions;
    	
        for (const auto& KeyMapping: SetupData->InputMappingContext->GetMappings())
        {
            ActionsToCheck.AddUnique(KeyMapping.Action);
        }
        
        for (const UInputAction* InputAction : ActionsToCheck)
        {
        	const bool bMatched = SetupData->InputHandlers.ContainsByPredicate([InputAction](const UNinjaInputHandler* Handler)
				{ return IsValid(Handler) && Handler->HandlesAction(InputAction); });
        	
        	if (bMatched)
        	{
        		MatchedActions.AddUnique(InputAction);
        	}
        }

    	for (const UInputAction* InputAction : ActionsToCheck)
    	{
    		if (!MatchedActions.Contains(InputAction))
    		{
    			FFormatNamedArguments Args;
    			Args.Add(TEXT("Action"), FText::FromString(GetNameSafe(InputAction)));
    
    			const FText Message = FText::Format(NSLOCTEXT("InputSetupNamespace", "UnmatchedAction", "No Input Handlers for Action {Action}!"), Args);
    			Context.AddWarning(Message);
    		}
    	}
    }
    
    return DetermineResult(Context);
}

EDataValidationResult FNinjaInputSetupDataValidator::DetermineResult(const FDataValidationContext& Context)
{
    if (Context.GetNumErrors() > 0 || Context.GetNumWarnings() > 0)
    {
        return EDataValidationResult::Invalid;
    }
    
    return EDataValidationResult::Valid;
}

#undef LOCTEXT_NAMESPACE
#endif