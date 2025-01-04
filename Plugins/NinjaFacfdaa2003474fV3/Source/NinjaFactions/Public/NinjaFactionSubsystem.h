// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable IdentifierTypo
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NinjaFactionSubsystem.generated.h"

struct FFactionReputationTableRow;
struct FGameplayTag;

class UNinjaFactionAttitudeSolver;
class UNinjaFactionDataAsset;
class UNinjaFactionDatabase;
class UNinjaFactionComponent;

/**
 * Central hub for the Faction System functionality.
 */
UCLASS(DisplayName = "Faction Subsystem")
class NINJAFACTIONS_API UNinjaFactionSubsystem : public UGameInstanceSubsystem
{
    
    GENERATED_BODY()

public:

    // -- Begin Subsystem implementation
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // -- End Subsystem implementation

	/**
	 * Retrieves the Faction Component from a given member actor.
	 * 
	 * @param Member    The Faction Member to provide the component. 
	 * @return          Pointer to the Faction Component assigned to the provided member.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Factions", meta = (ReturnDisplayName = "Faction Component"))
	static UNinjaFactionComponent* GetFactionComponent(const AActor* Member);
	
    /**
     * Provides the Data Asset for the provided Faction Tag.
     * 
     * @param FactionTag    Tag that uniquely identifies the Faction. 
     * @return              The Faction Data Asset.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions", meta = (ReturnDisplayName = "Faction Data"))
    UNinjaFactionDataAsset* GetFaction(const FGameplayTag& FactionTag) const;
    
    /**
     * Provides all available Factions.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions")
    void GetFactions(UPARAM(DisplayName = "Factions") TArray<UNinjaFactionDataAsset*>& OutFactions) const;

    /**
     * Provides all available Reputation Tiers.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions")
    void GetReputationTiers(UPARAM(DisplayName = "Reputation Tiers") TArray<FFactionReputationTableRow>& OutReputationTiers) const;
    
    /**
     * Provides the reputation tier configured for a given amount of reputation.
     * 
     * @param Reputation            Amount of reputation used as a reference. 
     * @param OutReputationTier     Tier equivalent to the amount of reputation.
     * @return                      True if a tier was found for the given reputation.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Success"))
    bool GetReputationTier(int32 Reputation, UPARAM(DisplayName = "Reputation Tier") FFactionReputationTableRow& OutReputationTier) const;

    /**
     * Provides the reputation tier configured for its unique name
     * 
     * @param TierName              Unique name that identifies the tier.
     * @param OutReputationTier     Tier equivalent to the amount of reputation.
     * @return                      True if a tier was found for the given name.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Success"))
    bool GetReputationTierByName(FName TierName, UPARAM(DisplayName = "Reputation Tier") FFactionReputationTableRow& OutReputationTier) const;
    
    /**
     * Determines the attitude between two pawns.
     * 
     * @param Source    Source Pawn from which the faction test is done. Must be a valid faction member.
     * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.
     * @return          The attitude between both pawns.
     */
    UFUNCTION(BlueprintCallable, Category = "Ninja Factions", meta = (ReturnDisplayName = "Attitude"))
    ETeamAttitude::Type GetAttitude(const AActor* Source, const AActor* Target) const;

protected:

    /**
     * Initializes objects related to the Faction Subsystem.
     */
    void InitializeFactionObjects();
    
private:

    /** Default attitude in case resolution is not possible. */
    UPROPERTY()
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitude;
    
    /** Database for all registered factions in the game. */
    UPROPERTY()
    TObjectPtr<UNinjaFactionDatabase> FactionDatabase;

    /** Solver used to determine the alignment between factions. */
    UPROPERTY()
    TObjectPtr<UNinjaFactionAttitudeSolver> FactionSolver;

};

