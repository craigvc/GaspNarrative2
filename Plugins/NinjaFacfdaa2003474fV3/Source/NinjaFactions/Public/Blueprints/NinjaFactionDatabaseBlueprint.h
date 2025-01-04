// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "NinjaFactionDatabaseBlueprint.generated.h"

/**
 * A Faction Database determines the strategy to Factions from specific sources, such as a list of assets or a server.
 */
UCLASS(Hidden, BlueprintType)
class NINJAFACTIONS_API UNinjaFactionDatabaseBlueprint : public UBlueprint
{
    
    GENERATED_BODY()

public:

    UNinjaFactionDatabaseBlueprint(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR

    // UBlueprint interface
    virtual bool SupportedByDefaultBlueprintFactory() const override;
    // End of UBlueprint interface
    
#endif
};
