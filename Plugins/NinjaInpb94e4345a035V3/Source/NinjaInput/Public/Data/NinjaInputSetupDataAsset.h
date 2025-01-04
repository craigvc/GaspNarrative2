// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "Engine/DataAsset.h"
#include "NinjaInputSetupDataAsset.generated.h"

class UInputAction;
class UInputMappingContext;
class UNinjaInputHandler;

/**
 * Centralized way to share input configurations between multiple pawns/characters/controllers.
 */
UCLASS(Blueprintable, BlueprintType)
class NINJAINPUT_API UNinjaInputSetupDataAsset : public UDataAsset
{
    
    GENERATED_BODY()

public:

    /**
     * Priority determined for this Input Mapping Context.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Setup")
    int32 Priority;
    
    /**
     * Input Mapping Contexts added by this configuration.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Setup")
    TObjectPtr<UInputMappingContext> InputMappingContext;

    /**
     * All instances of Input Handlers relevant to this Input Mapping Context.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Setup")
    TArray<TObjectPtr<UNinjaInputHandler>> InputHandlers;
    
    UNinjaInputSetupDataAsset();
    
    /**
     * Checks if this Data Asset has a compatible input handler for a given Action/Trigger.
     *
     * @param InputAction
     *      Input Action used as a search reference.
     *
     * @param TriggerEvent
     *      Trigger Event used as a search reference.
     *
     * @return
     *      A boolean value informing if there's a Handler for the provided set.
     */
    bool HasCompatibleInputHandler(const UInputAction* InputAction, const ETriggerEvent& TriggerEvent) const;

#if WITH_EDITOR

    // Editor functionalities.
    virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) const override;

#endif
};
