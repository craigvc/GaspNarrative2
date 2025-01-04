// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_NinjaFactionData.h"

#include "NinjaFactionsEditor.h"
#include "Data/NinjaFactionDataAsset.h"

FText FAssetTypeActions_NinjaFactionData::GetName() const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionData_Title", "Faction");
}

uint32 FAssetTypeActions_NinjaFactionData::GetCategories()
{
    return FNinjaFactionsEditorModule::GetFactionAssetsCategory();
}

FColor FAssetTypeActions_NinjaFactionData::GetTypeColor() const
{
    return FColor(106, 117, 94);
}

FText FAssetTypeActions_NinjaFactionData::GetAssetDescription(const FAssetData& AssetData) const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionData_Description", 
        "Contains details about a Faction.");
}

UClass* FAssetTypeActions_NinjaFactionData::GetSupportedClass() const
{
    return UNinjaFactionDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeActions_NinjaFactionData::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaFactionsSubMenu", "Ninja Factions")
	};

	return SubMenus;
}
