// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "Engine/DeveloperSettings.h"
#include "NinjaInputSettings.generated.h"

/**
 * Central location for system-wide settings related to the Ninja Input plugin.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Ninja Input"))
class NINJAINPUT_API UNinjaInputSettings : public UDeveloperSettings
{
	
	GENERATED_BODY()

public:

    /** Input Events that are tracked by managers and delegated to registered Handlers. */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Core Settings")
    TArray<ETriggerEvent> TrackedEvents;
    
    /**
     * Determines if debug messages show be added to screen for all input handlers.
     *
     * This option is only valid in the editor and won't be added to packaged builds.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Development")
    bool bShowScreenDebugMessages;

    /** Duration for the Debug Message on screen. */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Development", meta = (EditCondition = bShowScreenDebugMessages, EditConditionHides))
    float DebugMessageDuration;
    
    /** Color used for the on-screen debug messages. */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Development", meta = (EditCondition = bShowScreenDebugMessages, EditConditionHides))
    FColor DebugMessageColor;
    
	UNinjaInputSettings();
	
};
