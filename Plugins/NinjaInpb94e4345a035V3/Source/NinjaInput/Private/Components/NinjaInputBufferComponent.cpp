// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaInputBufferComponent.h"

#include "InputAction.h"
#include "NinjaInputFunctionLibrary.h"
#include "NinjaInputHandler.h"
#include "GameFramework/Actor.h"

DEFINE_LOG_CATEGORY(LogNinjaInputBufferComponent);

UNinjaInputBufferComponent::UNinjaInputBufferComponent()
{
    InputBufferMode = EInputBufferMode::LastCommand;
    bUsingInputBuffer = false;
}

bool UNinjaInputBufferComponent::IsInputBufferEnabled_Implementation() const
{
    return InputBufferMode != EInputBufferMode::Disabled;
}

bool UNinjaInputBufferComponent::IsInputBufferOpen_Implementation() const
{
    return bUsingInputBuffer;
}

void UNinjaInputBufferComponent::BufferInputCommands_Implementation(TArray<FBufferedInputCommand>& InputCommandsForAction)
{
    if (!InputCommandsForAction.IsEmpty() && CanAddToBuffer())
    {
        BufferedCommands.Empty();
        BufferedCommands = InputCommandsForAction;

    	const UInputAction* InputAction = InputCommandsForAction[0].GetSourceAction();
        UE_LOG(LogNinjaInputBufferComponent, Verbose, TEXT("[%s] Action %s added %d Handlers to the Input Buffer."),
            *GetNameSafe(GetOwner()), *GetNameSafe(InputAction), BufferedCommands.Num());
    }
}

void UNinjaInputBufferComponent::OpenInputBuffer_Implementation()
{
    if (!Execute_IsInputBufferOpen(this))
    {
        BufferedCommands.Empty();
        bUsingInputBuffer = true;
    }
}

void UNinjaInputBufferComponent::CloseInputBuffer_Implementation(const bool bCancelled)
{
    if (Execute_IsInputBufferOpen(this))
    {
        bUsingInputBuffer = false;
        
        for (auto It(BufferedCommands.CreateIterator()); It; ++It)
        {
            // Only execute commands if this buffer has not been cancelled.
            if (!bCancelled)
            {
                const FBufferedInputCommand Command = *It;
                if (Command.IsValid())
                {
                	const UInputAction* InputAction = Command.GetSourceAction();
                	const UNinjaInputHandler* Handler = Command.GetHandler();
                	
                    UE_LOG(LogNinjaInputBufferComponent, Verbose, TEXT("[%s] Releasing Input Action %s and Handler %s from buffer."),
                        *GetNameSafe(GetOwner()), *GetNameSafe(InputAction), *GetNameSafe(Handler));
            
                    Command.Execute();
                }
            }

            // The command must be removed, regardless of the buffer finishing or being cancelled.
            It.RemoveCurrent();
        }
    }
}

UActorComponent* UNinjaInputBufferComponent::GetInputBufferComponent()
{
    // If this buffer is enabled, then there's no need to perform the look-up.
    if (Execute_IsInputBufferEnabled(this))
    {
        return Cast<UActorComponent>(this);
    }

    // Try to find another buffer that's currently active.
    return UNinjaInputFunctionLibrary::GetInputBufferComponent(GetOwner());
}

bool UNinjaInputBufferComponent::CanAddToBuffer() const
{
    return InputBufferMode == EInputBufferMode::LastCommand
        || (InputBufferMode == EInputBufferMode::FirstCommand && BufferedCommands.IsEmpty());
}
