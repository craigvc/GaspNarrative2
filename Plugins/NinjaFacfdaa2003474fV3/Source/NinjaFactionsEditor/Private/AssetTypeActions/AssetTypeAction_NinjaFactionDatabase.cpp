// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_NinjaFactionDatabase.h"

#include "NinjaFactionsEditor.h"
#include "Blueprints/NinjaFactionDatabaseBlueprint.h"

FText FAssetTypeActions_NinjaFactionDatabase::GetName() const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionDatabase_Title", "Faction Database");
}

uint32 FAssetTypeActions_NinjaFactionDatabase::GetCategories()
{
    return FNinjaFactionsEditorModule::GetFactionAssetsCategory();
}

FColor FAssetTypeActions_NinjaFactionDatabase::GetTypeColor() const
{
    return FColor(50, 108, 90);
}

FText FAssetTypeActions_NinjaFactionDatabase::GetAssetDescription(const FAssetData& AssetData) const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionDatabase_Description", 
        "A Blueprint used by the Ninja Factions plugin to retrieve Faction Data");
}

UClass* FAssetTypeActions_NinjaFactionDatabase::GetSupportedClass() const
{
    return UNinjaFactionDatabaseBlueprint::StaticClass();
}

const TArray<FText>& FAssetTypeActions_NinjaFactionDatabase::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaFactionsSubMenu", "Ninja Factions")
	};

	return SubMenus;
}
