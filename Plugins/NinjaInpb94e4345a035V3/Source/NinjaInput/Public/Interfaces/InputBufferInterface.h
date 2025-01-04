// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputBufferInterface.generated.h"

struct FBufferedInputCommand;

class UNinjaInputHandler;

UINTERFACE(MinimalAPI)
class UInputBufferInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * Determines the main behavior introduced by an Input Buffer.
 */
class NINJAINPUT_API IInputBufferInterface
{
    
    GENERATED_BODY()

public:

    /**
     * Informs the current buffer is enabled and can be activated.
     *
     * @return
     *      A boolean value informing if the Input Buffer is enabled. If not, then the
     *      buffer is not functional, and therefore it can't be opened.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Buffer Interface")
    bool IsInputBufferEnabled() const;
    
    /**
     * Informs the current state of the Input Buffer.
     *
     * @return
     *      A boolean value informing if the Input Buffer is currently open or closed.
     *      To modify the buffer state, please use the proper "Open" and "Close" functions.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Buffer Interface")
    bool IsInputBufferOpen() const;
    
    /**
     * Activates the Input Buffer and routes actions to it.
     * An Input Buffer can only be opened if it's enabled.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Buffer Interface")
    void OpenInputBuffer();

    /**
     * Adds an array of commands to the Input Buffer.
     *
     * All these commands were originated from the same accepted Input Action and actually
     * represent the outcome of one Input Action Event.
     *
     * @param InputCommandsForAction
     *      Input command to be added to the Buffer. The implementation can decide on its own
     *      policy to add/override/queue commands as per current design requirements.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Buffer Interface")
    void BufferInputCommands(TArray<FBufferedInputCommand>& InputCommandsForAction);
    
    /**
     * Closes the Input Buffer and executes the buffered action.
     *
     * @param bCancelled
     *      Informs if the buffer was cancelled when, for example the Animation Notify
     *      State ended without reaching the expected number of frames.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Buffer Interface")
    void CloseInputBuffer(bool bCancelled = false);
    
};
