// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "NinjaFactionAttitudeSolverBlueprint.generated.h"

/**
 * An attitude solver is capable of evaluating the attitude between two given factions. 
 */
UCLASS(Hidden, BlueprintType)
class NINJAFACTIONS_API UNinjaFactionAttitudeSolverBlueprint : public UBlueprint
{
    
    GENERATED_BODY()

public:

    UNinjaFactionAttitudeSolverBlueprint(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR

    // UBlueprint interface
    virtual bool SupportedByDefaultBlueprintFactory() const override;
    // End of UBlueprint interface
    
#endif
};
