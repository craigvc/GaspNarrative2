// Copyright Narrative Tools 2022. 

#include "NarrativeArsenalEditorModule.h"
#include "NarrativeArsenalStyle.h"
#include "UObject/CoreRedirects.h"
#include "AssetTypeActions_ArsenalItems.h"
#include "AssetTypeActions_EquippableItem.h"
#include "AssetTypeActions_NPCDefinition.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "ISettingsContainer.h"
#include <ISettingsCategory.h>
#include "ArsenalSettings.h"
#include "AI/NarrativeNPCSubsystem.h"

DEFINE_LOG_CATEGORY(LogNarrativeArsenalEditor);

#define LOCTEXT_NAMESPACE "FNarrativeArsenalEditorModule"

uint32 FNarrativeArsenalEditorModule::GameAssetCategory;

void FNarrativeArsenalEditorModule::StartupModule()
{
	FNarrativeArsenalStyle::Initialize();

	RegisterSettings();

	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	GameAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("Narrative"));

	if (GameAssetCategory == EAssetTypeCategories::Misc)
	{
		GameAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeCategory", "Narrative"));
	}

	TSharedPtr<FAssetTypeActions_WeaponItem> NarrativeWeaponTypeAction = MakeShareable(new FAssetTypeActions_WeaponItem(GameAssetCategory));
	NarrativeWeaponTypeActions = NarrativeWeaponTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeWeaponTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_GameplayEffectItem> NarrativeGameplayEffectTypeAction = MakeShareable(new FAssetTypeActions_GameplayEffectItem(GameAssetCategory));
	NarrativeGameplayEffectTypeActions = NarrativeGameplayEffectTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeGameplayEffectTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_EquippableItem> NarrativeEquippableTypeAction = MakeShareable(new FAssetTypeActions_EquippableItem(GameAssetCategory));
	NarrativeEquippableTypeActions = NarrativeEquippableTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeEquippableTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_ClothingItem> NarrativeClothingTypeAction = MakeShareable(new FAssetTypeActions_ClothingItem(GameAssetCategory));
	NarrativeClothingTypeActions = NarrativeClothingTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeClothingTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_NPCDefinition> NarrativeNPCDefinitionTypeAction = MakeShareable(new FAssetTypeActions_NPCDefinition(GameAssetCategory));
	NarrativeNPCDefinitionTypeActions = NarrativeNPCDefinitionTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeNPCDefinitionTypeAction.ToSharedRef());
}


void FNarrativeArsenalEditorModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}

	FNarrativeArsenalStyle::Shutdown();

	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		if (NarrativeWeaponTypeActions.IsValid())
		{
			AssetToolsModule.UnregisterAssetTypeActions(NarrativeWeaponTypeActions.ToSharedRef());
		}
		if (NarrativeGameplayEffectTypeActions.IsValid())
		{
			AssetToolsModule.UnregisterAssetTypeActions(NarrativeGameplayEffectTypeActions.ToSharedRef());
		}
		if (NarrativeEquippableTypeActions.IsValid())
		{
			AssetToolsModule.UnregisterAssetTypeActions(NarrativeEquippableTypeActions.ToSharedRef());
		}
		if (NarrativeClothingTypeActions.IsValid())
		{
			AssetToolsModule.UnregisterAssetTypeActions(NarrativeClothingTypeActions.ToSharedRef());
		}
	}
}

void FNarrativeArsenalEditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		// Register the runtime settings
		SettingsModule->RegisterSettings("Project", "Plugins", "Narrative Pro",
			LOCTEXT("NarrativeRuntimeNPCSettingsName", "Narrative Pro"),
			LOCTEXT("NarrativeRuntimeNPCSettingsDescription", "Configuration Settings for Narrative Pro."),
			GetMutableDefault<UArsenalSettings>()
		);
	}
}

void FNarrativeArsenalEditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "Narrative Pro");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeArsenalEditorModule, NarrativeArsenalEditor)