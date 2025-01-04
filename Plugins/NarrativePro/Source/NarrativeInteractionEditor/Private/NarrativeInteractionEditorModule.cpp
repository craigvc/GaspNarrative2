// Copyright Narrative Tools 2024. 

#include "NarrativeInteractionEditorModule.h"
#include "NarrativeInteractionStyle.h"

DEFINE_LOG_CATEGORY(LogNarrativeInteractionEditor);

#define LOCTEXT_NAMESPACE "FNarrativeInteractionEditorModule"

uint32 FNarrativeInteractionEditorModule::GameAssetCategory;

void FNarrativeInteractionEditorModule::StartupModule()
{
	FNarrativeInteractionStyle::Initialize();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}


}


void FNarrativeInteractionEditorModule::ShutdownModule()
{
	FNarrativeInteractionStyle::Shutdown();

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeInteractionEditorModule, NarrativeInteractionEditor)