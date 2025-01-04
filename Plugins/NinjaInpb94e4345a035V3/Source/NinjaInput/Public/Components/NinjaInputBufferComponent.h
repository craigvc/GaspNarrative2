// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/InputBufferInterface.h"
#include "Types/EInputBufferMode.h"
#include "Types/FBufferedInputCommand.h"
#include "NinjaInputBufferComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInputBufferComponent, Log, All);

/**
 * Base implementation for an Input Buffer.
 *
 * Not only serves as a base implementation for the Buffer Interface, but also provides some
 * support methods that can be useful for most implementations.
 */
UCLASS(Abstract, Blueprintable, ClassGroup=(NinjaInput), meta = (BlueprintSpawnableComponent))
class NINJAINPUT_API UNinjaInputBufferComponent : public UActorComponent, public IInputBufferInterface
{
    
    GENERATED_BODY()

public:

    UNinjaInputBufferComponent();

    // -- Begin Input Buffer Interface
    virtual bool IsInputBufferEnabled_Implementation() const final override;
    virtual bool IsInputBufferOpen_Implementation() const final override;
    virtual void BufferInputCommands_Implementation(TArray<FBufferedInputCommand>& InputCommandsForAction) override;
    virtual void OpenInputBuffer_Implementation() override;
	virtual void CloseInputBuffer_Implementation(bool bCancelled = false) override;
    // -- End Input Buffer Interface

    /**
     * Provides the Input Buffer enabled for this component's owner.
     *
     * @return
     *      The Input Buffer enabled for the current owner. It may be null in case no buffers
     *      were configured and the Main Input Manager Component's buffer is disabled. 
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Buffer Component")
    UActorComponent* GetInputBufferComponent(); 

protected:

    /** List of buffered inputs to be released later. */
    UPROPERTY(Transient)
    TArray<FBufferedInputCommand> BufferedCommands;
    
    /**
     * Determines how the Input Buffer will operate.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Buffer")
    EInputBufferMode InputBufferMode;

    /**
     * Helper method to determine if entries can be added to the buffer, based on mode/current commands.
     *
     * @return
     *      A boolean value informing if the Buffer is currently usable. This considers both the
     *      Buffer state and also the Input Buffer Mode currently in use.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input|Input Buffer Component")
    virtual bool CanAddToBuffer() const;
    
private:

    /** Informs the current state of the Input Buffer. */
    UPROPERTY()
    bool bUsingInputBuffer;
    
};
