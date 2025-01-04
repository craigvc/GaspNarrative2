// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/FactionDatabases/FactionDatabase_DataAssets.h"

#include "Data/NinjaFactionDataAsset.h"
#include "Engine/AssetManager.h"

void UFactionDatabase_DataAssets::InitializeDatabase_Implementation()
{
	Super::InitializeDatabase_Implementation();
	
    const FPrimaryAssetType AssetType = UNinjaFactionDataAsset::AssetType;
    UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	check(IsValid(AssetManager));

    TArray<FPrimaryAssetId> Assets;
    AssetManager->GetPrimaryAssetIdList(AssetType, Assets);
    
    if (Assets.Num() > 0)
    {
        const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnFactionsLoaded, Assets);
        AssetManager->LoadPrimaryAssets(Assets, TArray<FName>(), Delegate);
    }
}

// ReSharper disable once CppPassValueParameterByConstReference
void UFactionDatabase_DataAssets::OnFactionsLoaded(TArray<FPrimaryAssetId> AssetIds)
{
    const UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	check(IsValid(AssetManager));
	
    for (auto& AssetId : AssetIds)
    {
        UNinjaFactionDataAsset* FactionData = Cast<UNinjaFactionDataAsset>(AssetManager->GetPrimaryAssetObject(AssetId));
        if (IsValid(FactionData))
        {
            Factions.AddUnique(FactionData);
        }
    }
}

void UFactionDatabase_DataAssets::GetFactions_Implementation(TArray<UNinjaFactionDataAsset*>& OutFactions) const
{
    OutFactions = Factions;
}
