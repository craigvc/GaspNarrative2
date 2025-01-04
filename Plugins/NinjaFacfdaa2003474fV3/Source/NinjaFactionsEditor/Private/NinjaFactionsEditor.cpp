// Ninja Bear Studio Inc., all rights reserved. 
#include "NinjaFactionsEditor.h"

#include "AssetToolsModule.h"
#include "AssetTypeActions/AssetTypeAction_NinjaFactionAttitudeSolver.h"
#include "AssetTypeActions/AssetTypeAction_NinjaFactionData.h"
#include "AssetTypeActions/AssetTypeAction_NinjaFactionDatabase.h"

#define LOCTEXT_NAMESPACE "FNinjaFactionsEditorModule"

IMPLEMENT_MODULE(FNinjaFactionsEditorModule, NinjaFactionsEditor)

EAssetTypeCategories::Type FNinjaFactionsEditorModule::FactionAssetsCategory;

void FNinjaFactionsEditorModule::StartupModule()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	FactionAssetsCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("NinjaBearStudio")), LOCTEXT("NinjaBearStudioAssetsCategory", "Ninja Bear Studio"));
    {
        RegisterAssetTypeActions(AssetTools, MakeShareable(new FAssetTypeActions_NinjaFactionData));
    	RegisterAssetTypeActions(AssetTools, MakeShareable(new FAssetTypeActions_NinjaFactionDatabase));
    	RegisterAssetTypeActions(AssetTools, MakeShareable(new FAssetTypeActions_NinjaFactionAttitudeSolver));
    }
}

void FNinjaFactionsEditorModule::ShutdownModule()
{
    if (const FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools"))
    {
        for (TSharedPtr<IAssetTypeActions>& AssetAction : CreatedAssetTypeActions)
        {
            AssetToolsModule->Get().UnregisterAssetTypeActions(AssetAction.ToSharedRef());
        }
    }
    
    CreatedAssetTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE