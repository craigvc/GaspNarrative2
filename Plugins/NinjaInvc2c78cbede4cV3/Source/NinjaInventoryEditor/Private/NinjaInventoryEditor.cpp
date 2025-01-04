// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventoryEditor.h"

#include "AssetToolsModule.h"
#include "AssetTypeActions/AssetTypeAction_InventoryContainerDefinition.h"
#include "AssetTypeActions/AssetTypeAction_EquipmentDefinition.h"
#include "AssetTypeActions/AssetTypeAction_EquipmentSlotSetup.h"
#include "AssetTypeActions/AssetTypeAction_InventoryLayout.h"
#include "AssetTypeActions/AssetTypeAction_InventoryItemDefinition.h"

#define LOCTEXT_NAMESPACE "FNinjaInventoryEditorModule"
IMPLEMENT_MODULE(FNinjaInventoryEditorModule, NinjaInventoryEditor)

EAssetTypeCategories::Type FNinjaInventoryEditorModule::InventoryAssetsCategory;

void FNinjaInventoryEditorModule::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	InventoryAssetsCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("NinjaBearStudio")), LOCTEXT("NinjaBearStudioAssetsCategory", "Ninja Bear Studio"));
	{
		RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeAction_InventoryContainerDefinition>());
		RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeAction_EquipmentDefinition>());
		RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeAction_EquipmentSlotSetup>());
		RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeAction_InventoryLayout>());
		RegisterAssetTypeActions(AssetTools, MakeShared<FAssetTypeAction_InventoryItemDefinition>());
	}
}

void FNinjaInventoryEditorModule::ShutdownModule()
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
