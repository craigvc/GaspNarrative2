// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaFactionAttitudeSolver.h"
#include "FactionSolver_TargetReputation.generated.h"

/**
 * Attitude Solver that considers a target's reputation for the source's main faction.
 *
 * This considers the reputation table considered in the Faction Settings Page and whatever
 * Backing Attribute is configured for that faction on the target.
 */
UCLASS(DisplayName = "Faction Attitude Solver: Target Reputation")
class NINJAFACTIONS_API UFactionSolver_TargetReputation : public UNinjaFactionAttitudeSolver
{
    
    GENERATED_BODY()

public:

    UFactionSolver_TargetReputation();
    
    // -- Begin Faction Solver implementation
    virtual ETeamAttitude::Type SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const override;
    // -- End Faction Solver implementation

};
