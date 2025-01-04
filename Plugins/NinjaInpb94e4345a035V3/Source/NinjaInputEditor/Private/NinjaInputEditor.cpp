// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInputEditor.h"

#include "AssetTypeActions/AssetTypeAction_NinjaInputHandler.h"
#include "AssetTypeActions/AssetTypeAction_NinjaInputSetup.h"

#define LOCTEXT_NAMESPACE "FNinjaInputEditorModule"

DEFINE_LOG_CATEGORY(LogNinjaInputEditor);
IMPLEMENT_MODULE(FNinjaInputEditorModule, NinjaInputEditor)

EAssetTypeCategories::Type FNinjaInputEditorModule::InputAssetsCategory;

void FNinjaInputEditorModule::StartupModule()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
    InputAssetsCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("NinjaBearStudio")), LOCTEXT("NinjaBearStudioAssetsCategory", "Ninja Bear Studio"));
    {
        RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeActions_NinjaInputHandler>());
        RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeActions_NinjaInputSetup>());
    }
}

void FNinjaInputEditorModule::ShutdownModule()
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