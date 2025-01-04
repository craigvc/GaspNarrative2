// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/FFactionReputationTableRow.h"
#include "UObject/Object.h"
#include "NinjaFactionDatabase.generated.h"

class UDataTable;
class UNinjaFactionSubsystem;
class UNinjaFactionDataAsset;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaFactionDatabase, Log, All);

/**
 * Base implementation of a Faction Database.
 */
UCLASS(Abstract, Blueprintable, BlueprintType, DisplayName = "Faction Database")
class NINJAFACTIONS_API UNinjaFactionDatabase : public UObject
{
    
    GENERATED_BODY()

public:

    UNinjaFactionDatabase();
    
    /**
     * Allows the initialization of the database. 
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ninja Factions|Faction Database")
    void InitializeDatabase();

    /**
     * Provides the Data Asset for the provided Faction Tag.
     * 
     * @param FactionTag    Tag that uniquely identifies the Faction. 
     * @return              The Faction Data Asset.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ninja Factions|Faction Database")
    UNinjaFactionDataAsset* GetFaction(const FGameplayTag& FactionTag) const;
    
    /**
     * Provides all Factions available.
     * 
     * @param OutFactions
     *      The array containing all factions. It's a hard copy of the data assets to avoid
     *      duplicating a potentially large list of Data assets from the game.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ninja Factions|Faction Database")
    void GetFactions(TArray<UNinjaFactionDataAsset*>& OutFactions) const;

    /**
     * Provides all available Reputation Tiers.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ninja Factions|Faction Database")
    void GetReputationTiers(TArray<FFactionReputationTableRow>& OutReputationTiers) const;
    
    /**
     * Provides the reputation tier configured for a given amount of reputation.
     * 
     * @param Reputation            Amount of reputation used as a reference. 
     * @param OutReputationTier     Tier equivalent to the amount of reputation.
     * @return						True if a tier was found for the provided reputation.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ninja Factions|Faction Database")
    bool GetReputationTier(int32 Reputation, FFactionReputationTableRow& OutReputationTier) const;

    /**
     * Provides the reputation tier using its unique name as criteria.
     * 
     * @param TierName              Name that identifies the tier.
     * @param OutReputationTier     Tier equivalent to the amount of reputation.
     * @return						True if a tier was found for the provided name.
     */
    UFUNCTION(BlueprintPure, Category = "Ninja Factions")
    bool GetReputationTierByName(FName TierName, FFactionReputationTableRow& OutReputationTier) const;

protected:

    /** Data Table containing reputation tiers. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = " Database")
    TObjectPtr<UDataTable> ReputationTable;

    /** Cache of all reputation tiers. */
    TArray<FFactionReputationTableRow> CachedReputationTiers;
	
	void UpdateReputationTable();

	void OnReputationTableLoaded();
	
    void CacheReputationTiers();
	
};
