// Copyright Narrative Tools 2022. 

#include "NarrativeInventoryEditorModule.h"
#include "NarrativeInventoryStyle.h"
#include "UObject/CoreRedirects.h"
#include "AssetTypeActions_NarrativeItem.h"
#include "AssetTypeActions_ItemCollection.h"
#include <ISettingsModule.h>
#include "NarrativeInventorySettings.h"

DEFINE_LOG_CATEGORY(LogNarrativeInventoryEditor);

#define LOCTEXT_NAMESPACE "FNarrativeInventoryEditorModule"

uint32 FNarrativeInventoryEditorModule::GameAssetCategory;

void FNarrativeInventoryEditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		// Register the settings
		SettingsModule->RegisterSettings("Project", "Plugins", "Narrative Inventory",
			LOCTEXT("NarrativeInventorySettingsName", "Narrative Inventory"),
			LOCTEXT("NarrativeInventorySettingsDescription", "Configuration Settings for the Narrative Inventory plugin."),
			GetMutableDefault<UNarrativeInventorySettings>()
		);
	}
}

void FNarrativeInventoryEditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "Narrative Inventory");
	}
}

void FNarrativeInventoryEditorModule::StartupModule()
{
	FNarrativeInventoryStyle::Initialize();

	RegisterSettings();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}

	TSharedPtr<FAssetTypeActions_NarrativeItem> NarrativeItemTypeAction = MakeShareable(new FAssetTypeActions_NarrativeItem(GameAssetCategory));
	NarrativeItemTypeActions = NarrativeItemTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeItemTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_ItemCollection> NarrativeItemCollectionTypeAction = MakeShareable(new FAssetTypeActions_ItemCollection(GameAssetCategory));
	NarrativeItemCollectionTypeActions = NarrativeItemCollectionTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeItemTypeAction.ToSharedRef());
}


void FNarrativeInventoryEditorModule::ShutdownModule()
{
	FNarrativeInventoryStyle::Shutdown();

	if (UObjectInitialized())
	{
		UnregisterSettings();
	}

	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		if (NarrativeItemTypeActions.IsValid())
		{
			AssetToolsModule.UnregisterAssetTypeActions(NarrativeItemTypeActions.ToSharedRef());
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeInventoryEditorModule, NarrativeInventoryEditor)