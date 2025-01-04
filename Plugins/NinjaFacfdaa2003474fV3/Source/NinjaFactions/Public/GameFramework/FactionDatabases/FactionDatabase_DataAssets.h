// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaFactionDatabase.h"
#include "FactionDatabase_DataAssets.generated.h"

class UNinjaFactionDataAsset;

/**
 * Faction Database based on the Asset Manager.
 *
 * It will automatically add all Faction Data Assets to the collection. For this to work properly,
 * make sure that the Primary Data Asset for Factions is properly configured in the Asset Manager.
 */
UCLASS(DisplayName = "Faction Database: Data Assets")
class NINJAFACTIONS_API UFactionDatabase_DataAssets : public UNinjaFactionDatabase
{
    
    GENERATED_BODY()

public:
    
    // -- Begin Faction Database implementation
    virtual void InitializeDatabase_Implementation() override;
    virtual void GetFactions_Implementation(TArray<UNinjaFactionDataAsset*>& OutFactions) const override;
    // -- End Faction Database implementation

protected:

    /**
     * Callback for the Asset Manager. Invoked when factions were loaded.
     *
     * @param AssetIds
     *      All Primary Asset Ids loaded, which can now be used.
     */
    virtual void OnFactionsLoaded(TArray<FPrimaryAssetId> AssetIds);

private:

    /** All Factions loaded into this database. */
    UPROPERTY()
    TArray<UNinjaFactionDataAsset*> Factions;
    
};
