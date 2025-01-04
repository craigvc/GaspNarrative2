// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "NinjaInputHandlerBlueprint.generated.h"

/**
 * Input Handlers are used by the Ninja Input plugin to process incoming actions from the Enhanced Input.
 */
UCLASS(BlueprintType)
class NINJAINPUT_API UNinjaInputHandlerBlueprint : public UBlueprint
{
    
    GENERATED_BODY()

public:

    UNinjaInputHandlerBlueprint(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR

    // UBlueprint interface
    virtual bool SupportedByDefaultBlueprintFactory() const override;
    // End of UBlueprint interface
    
#endif
};
