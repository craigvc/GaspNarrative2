// Copyright Narrative Tools 2022. 

#include "NarrativeEquipmentEditorModule.h"
#include "NarrativeEquipmentStyle.h"
#include "UObject/CoreRedirects.h"


DEFINE_LOG_CATEGORY(LogNarrativeEquipmentEditor);

#define LOCTEXT_NAMESPACE "FNarrativeEquipmentEditorModule"

uint32 FNarrativeEquipmentEditorModule::GameAssetCategory;

void FNarrativeEquipmentEditorModule::StartupModule()
{
	FNarrativeEquipmentStyle::Initialize();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}

}


void FNarrativeEquipmentEditorModule::ShutdownModule()
{
	FNarrativeEquipmentStyle::Shutdown();

	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeEquipmentEditorModule, NarrativeEquipmentEditor)