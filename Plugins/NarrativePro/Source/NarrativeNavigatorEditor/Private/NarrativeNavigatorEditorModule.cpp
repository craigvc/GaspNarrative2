// Copyright Narrative Tools 2022. 

#include "NarrativeNavigatorEditorModule.h"
#include "NarrativeNavigatorStyle.h"

DEFINE_LOG_CATEGORY(LogNarrativeNavigatorEditor);

#define LOCTEXT_NAMESPACE "FNarrativeNavigatorEditorModule"

uint32 FNarrativeNavigatorEditorModule::GameAssetCategory;

void FNarrativeNavigatorEditorModule::StartupModule()
{
	FNarrativeNavigatorStyle::Initialize();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}


}


void FNarrativeNavigatorEditorModule::ShutdownModule()
{
	FNarrativeNavigatorStyle::Shutdown();

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeNavigatorEditorModule, NarrativeNavigatorEditor)