// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FBufferedInputCommand.h"

#include "InputAction.h"
#include "NinjaInputHandler.h"

bool FBufferedInputCommand::IsValid() const
{
    return Source != nullptr
		&& ActionInstancePtr.IsValid()
		&& Handler != nullptr
		&& TriggerEvent != ETriggerEvent::None;
}

void FBufferedInputCommand::Execute() const
{
    if (IsValid())
    {
        Handler->HandleInput(Source, *ActionInstancePtr.Get(), TriggerEvent);
    }
}

UNinjaInputManagerComponent* FBufferedInputCommand::GetSource() const
{
	return Source;
}

UNinjaInputHandler* FBufferedInputCommand::GetHandler() const
{
	return Handler;
}

const FInputActionInstance* FBufferedInputCommand::GetActionInstance() const
{
	if (ActionInstancePtr.IsValid())
	{
		return ActionInstancePtr.Get();
	}

	return nullptr;
}

const UInputAction* FBufferedInputCommand::GetSourceAction() const
{
	if (ActionInstancePtr.IsValid())
	{
		return ActionInstancePtr->GetSourceAction();
	}

	return nullptr;
}

ETriggerEvent FBufferedInputCommand::GetTriggerEvent() const
{
	return TriggerEvent;
}
