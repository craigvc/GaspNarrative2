// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/Object.h"
#include "NinjaFactionAttitudeSolver.generated.h"

class UNinjaFactionComponent;
class UNinjaFactionDataAsset;
class UNinjaFactionSubsystem;
class UNinjaFactionDatabase;
class APawn;

/**
 * Base implementation of a Faction Solver.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, DisplayName = "Faction Attitude Solver")
class NINJAFACTIONS_API UNinjaFactionAttitudeSolver : public UObject
{
    
    GENERATED_BODY()

public:

    friend UNinjaFactionSubsystem;
    
    /**
     * Determines the attitude between two pawns.
     * 
     * @param Source    Source Pawn from which the faction test is done. Must be a valid faction member.
     * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.
     * @return          The attitude between both actors.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Faction Attitude Solver")
    ETeamAttitude::Type SolveAttitude(const AActor* Source, const AActor* Target) const;

protected:

	/** Default attitude, as per the Faction Settings page. */
	TEnumAsByte<ETeamAttitude::Type> DefaultAttitude;
	
    /** Database available to this solver. Valid while the subsystem is active. */
    UPROPERTY(BlueprintReadOnly, Category = "Faction Attitude Solver")
    TObjectPtr<UNinjaFactionDatabase> Database;

	/**
	 * Allows the initialization of the solver.
	 *
	 * Called by the subsystem while instantiating the Solver. This is called after the Database
	 * has been initialized, so if you need to use the database, it will be valid at this point.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Faction Attitude Solver")
	void InitializeSolver();
	
    /**
     * Retrieves the Faction Component 
     * 
     * @param Member    Actor providing the component.
     * @return          The component assigned to the actor. May be null.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Attitude Solver")
    static UNinjaFactionComponent* GetFactionComponent(const AActor* Member);

    /**
     * Provides the Main Faction assigned to a member.
     *
     * @param Member    Actor implementing the Faction Member interface.
     * @return          The Main Faction assigned to the actor. May be null.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions|Faction Attitude Solver")
    static UNinjaFactionDataAsset* GetMainFaction(const AActor* Member);
    
private:

    /** Private setter, meant to be called by the subsystem during initialization. */
    void SetDatabase(UNinjaFactionDatabase* NewDatabase);

    /** Private setter, meant to be called by the subsystem during initialization. */
    void SetDefaultAttitude(ETeamAttitude::Type NewDefaultAttitude);

};
