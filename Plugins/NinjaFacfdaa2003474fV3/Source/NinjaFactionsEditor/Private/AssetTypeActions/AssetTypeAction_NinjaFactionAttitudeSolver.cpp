// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_NinjaFactionAttitudeSolver.h"

#include "NinjaFactionsEditor.h"
#include "Blueprints/NinjaFactionAttitudeSolverBlueprint.h"

FText FAssetTypeActions_NinjaFactionAttitudeSolver::GetName() const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionAttitudeSolver_Title", "Attitude Solver");
}

uint32 FAssetTypeActions_NinjaFactionAttitudeSolver::GetCategories()
{
    return FNinjaFactionsEditorModule::GetFactionAssetsCategory();
}

FColor FAssetTypeActions_NinjaFactionAttitudeSolver::GetTypeColor() const
{
    return FColor(50, 108, 90);
}

FText FAssetTypeActions_NinjaFactionAttitudeSolver::GetAssetDescription(const FAssetData& AssetData) const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FactionAttitudeSolver_Description", 
        "A Blueprint used by the Ninja Factions plugin to determine the Attitude between Faction Members.");
}

UClass* FAssetTypeActions_NinjaFactionAttitudeSolver::GetSupportedClass() const
{
    return UNinjaFactionAttitudeSolverBlueprint::StaticClass();
}

const TArray<FText>& FAssetTypeActions_NinjaFactionAttitudeSolver::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaFactionsSubMenu", "Ninja Factions")
	};

	return SubMenus;
}
