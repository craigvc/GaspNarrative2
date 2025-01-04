// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaInputFunctionLibrary.generated.h"

struct FBufferedInputCommand;
struct FInputActionInstance;

class APlayerController;
class UNinjaInputHandler;
class UNinjaInputManagerComponent;

/**
 * Provides static helpers for the Ninja Input system.
 */
UCLASS()
class NINJAINPUT_API UNinjaInputFunctionLibrary : public UBlueprintFunctionLibrary
{
    
    GENERATED_BODY()

public:

    /**
     * Retrieves the Input Manager Component from a given actor.
     *
     * @param Actor
     *      The actor that may provide the Manager Component. Null values are handled.
     *
     * @return
     *      Input Manager Component assigned to the actor.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input")
    static UNinjaInputManagerComponent* GetInputManagerComponent(const AActor* Actor);

    /**
     * Provides the Input Buffer assigned to a given actor.
     *
     * The generic Actor Component is guaranteed to be a valid implementation of the
     * Input Buffer interface and is also guaranteed to be usable.
     *
     * @param Actor
     *      The actor that may provide the Manager Component. Null values are handled.
     *
     * @return
     *      Actor Component that is a valid, enabled, implementation of the Input Buffer
     *      interface. May be null, so make sure to check before using it!
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Input")
    static UActorComponent* GetInputBufferComponent(const AActor* Actor);

	/**
	 * Makes the Input Buffer Command using all the provided values.
	 * If any value is invalid, then the Input Command will be invalid as well.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input", meta = (BlueprintThreadSafe))
	static FBufferedInputCommand MakeBufferedInputCommand(UNinjaInputManagerComponent* Source,
		UNinjaInputHandler* Handler, const FInputActionInstance& ActionInstance, ETriggerEvent TriggerEvent);
	
	/**
	 * Breaks the Input Buffered Command, providing the proper values.
	 * It will accept an invalid command, filling the output including its validity.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input", meta = (BlueprintThreadSafe))
    static void BreakBufferedInputCommand(const FBufferedInputCommand& Command, bool& bIsValid,
    	UNinjaInputManagerComponent*& Source, UNinjaInputHandler*& Handler, FInputActionInstance& ActionInstance,
    	ETriggerEvent& TriggerEvent);

	/**
	 * Calculates a Look At Rotation for the cursor.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Input")
	static bool FindLookAtCursorRotation(const APlayerController* Controller, FRotator& OutRotation, ECollisionChannel TraceChannel = ECC_Visibility);
	
};
