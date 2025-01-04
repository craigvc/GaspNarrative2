// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaFactionAttitudeSolver.h"
#include "FactionSolver_SimpleAttitudeCheck.generated.h"

/**
 * Attitude Solver that considers the Faction Attitude configuration.
 *
 * Ultimately, once Factions are gathered from the participants, it will delegate the resolution to the
 * Faction Data Asset and its internal properties (default alignment and alignment matrix).
 */
UCLASS(DisplayName = "Faction Attitude Solver: Simple Attitude Check")
class NINJAFACTIONS_API UFactionSolver_SimpleAttitudeCheck : public UNinjaFactionAttitudeSolver
{
    
    GENERATED_BODY()

public:

    // -- Begin Faction Solver implementation
    virtual ETeamAttitude::Type SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const override;
    // -- End Faction Solver implementation

protected:
	
    /**
     * Dedicated logic to determine Faction Equality.
     *
     * By default this is determined by the Faction Tags, but games may have different logic for this, such
     * as considering the Team Id instead, or simply considering the Data Asset itself, to simplify the check.
     * 
     * @param SourceFactionData		Source Faction to be checked. Must be valid. 
     * @param TargetFactionData		Target Faction to be checked. Must be valid.
     * @return						True if both factions are considered to be equal.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Attitude Check")
	bool IsSameFaction(const UNinjaFactionDataAsset* SourceFactionData,
		const UNinjaFactionDataAsset* TargetFactionData) const;
	
};
