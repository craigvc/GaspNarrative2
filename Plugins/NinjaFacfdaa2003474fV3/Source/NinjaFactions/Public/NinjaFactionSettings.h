// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DeveloperSettings.h"
#include "NinjaFactionSettings.generated.h"

class UDataTable;
class UNinjaFactionAttitudeSolver;
class UNinjaFactionDatabase;

/**
 * Developer settings for the Ninja Factions plugin.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Ninja Factions"))
class NINJAFACTIONS_API UNinjaFactionSettings : public UDeveloperSettings
{
    
    GENERATED_BODY()

public:
	
    /**
     * Default Team provided by controllers when unable to obtain a proper one.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Factions")
	uint8 DefaultTeam;
	
    /**
     * Default attitude used in case no resolution is possible. 
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Factions", NoClear)
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitude;
    
    /**
     * Database class for Faction data.
     *
     * The Faction Database provides details about each faction that can receive members.
     * You can either select from default implementations or create your own for specific
     * purposes (such as a cached database from a backend server).
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Factions", NoClear)
    TSubclassOf<UNinjaFactionDatabase> FactionDatabaseClass;

    /**
     * Solver class for Faction alignments.
     *
     * Depending on your requirements, solving the alignment between factions can be trivial
     * or complex. Externalizing the Faction Alignment solver allows games to have their
     * dedicated classes, to determine proper alignment between pawns.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Factions", NoClear)
    TSubclassOf<UNinjaFactionAttitudeSolver> FactionSolverClass;

    /**
     * Reputation table used by solvers that require such values.
     * Requires a table with rows of type "FactionReputationTableRow".
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Factions", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaFactions.FactionReputationTableRow"))
    TSoftObjectPtr<UDataTable> ReputationTable;
    
    UNinjaFactionSettings();
    
};
