// Copyright Narrative Tools 2022. 

#include "NarrativeCommonUIEditorModule.h"
#include "NarrativeCommonUIStyle.h"

DEFINE_LOG_CATEGORY(LogNarrativeCommonUIEditor);

#define LOCTEXT_NAMESPACE "FNarrativeCommonUIEditorModule"

uint32 FNarrativeCommonUIEditorModule::GameAssetCategory;

void FNarrativeCommonUIEditorModule::StartupModule()
{
	FNarrativeCommonUIStyle::Initialize();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}


}


void FNarrativeCommonUIEditorModule::ShutdownModule()
{
	FNarrativeCommonUIStyle::Shutdown();

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeCommonUIEditorModule, NarrativeCommonUIEditor)