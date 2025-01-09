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
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"
#include "AI/NarrativeNPCSubsystem.h"
#include "StableActor/StableActorPropertyCustomization.h"

DEFINE_LOG_CATEGORY(LogNarrativeArsenalEditor);

#define LOCTEXT_NAMESPACE "FNarrativeArsenalEditorModule"

uint32 FNarrativeArsenalEditorModule::GameAssetCategory;
uint32 FNarrativeArsenalEditorModule::CharacterCreatorAssetCategory;

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

	CharacterCreatorAssetCategory = AssetToolsModule.FindAdvancedAssetCategory(FName("CharacterCreator"));

	if (CharacterCreatorAssetCategory == EAssetTypeCategories::Misc)
	{
		CharacterCreatorAssetCategory = AssetToolsModule.RegisterAdvancedAssetCategory(FName(TEXT("CharacterCreator")), LOCTEXT("CharacerCreatorCategory", "Narrative Character Creator"));
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

	TSharedPtr<FAssetTypeActions_PlayerDefinition> NarrativePlayerDefinitionTypeAction = MakeShareable(new FAssetTypeActions_PlayerDefinition(GameAssetCategory));
	NarrativePlayerDefinitionTypeActions = NarrativePlayerDefinitionTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativePlayerDefinitionTypeAction.ToSharedRef());


	TSharedPtr<FAssetTypeActions_CreatorOptionMesh> NarrativeCreatorOptionMeshTypeAction = MakeShareable(new FAssetTypeActions_CreatorOptionMesh(CharacterCreatorAssetCategory));
	NarrativeCreatorOptionMeshTypeActions = NarrativeCreatorOptionMeshTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorOptionMeshTypeAction.ToSharedRef());
	
	TSharedPtr<FAssetTypeActions_CreatorOptionGroom> NarrativeCreatorOptionGroomTypeAction = MakeShareable(new FAssetTypeActions_CreatorOptionGroom(CharacterCreatorAssetCategory));
	NarrativeCreatorOptionGroomTypeActions = NarrativeCreatorOptionGroomTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorOptionGroomTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorOptionScalar> NarrativeCreatorOptionScalarTypeAction = MakeShareable(new FAssetTypeActions_CreatorOptionScalar(CharacterCreatorAssetCategory));
	NarrativeCreatorOptionScalarTypeActions = NarrativeCreatorOptionScalarTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorOptionScalarTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorOptionVector> NarrativeCreatorOptionVectorTypeAction = MakeShareable(new FAssetTypeActions_CreatorOptionVector(CharacterCreatorAssetCategory));
	NarrativeCreatorOptionVectorTypeActions = NarrativeCreatorOptionVectorTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorOptionVectorTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorItemMesh> NarrativeCreatorItemMeshTypeAction = MakeShareable(new FAssetTypeActions_CreatorItemMesh(CharacterCreatorAssetCategory));
	NarrativeCreatorItemMeshTypeActions = NarrativeCreatorItemMeshTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorItemMeshTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorItemGroom> NarrativeCreatorItemGroomTypeAction = MakeShareable(new FAssetTypeActions_CreatorItemGroom(CharacterCreatorAssetCategory));
	NarrativeCreatorItemGroomTypeActions = NarrativeCreatorItemGroomTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorItemGroomTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorForm> NarrativeCreatorFormTypeAction = MakeShareable(new FAssetTypeActions_CreatorForm(CharacterCreatorAssetCategory));
	NarrativeCreatorFormTypeActions = NarrativeCreatorFormTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorFormTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorSection> NarrativeCreatorSectionTypeAction = MakeShareable(new FAssetTypeActions_CreatorSection(CharacterCreatorAssetCategory));
	NarrativeCreatorSectionTypeActions = NarrativeCreatorSectionTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorSectionTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorPage> NarrativeCreatorPageTypeAction = MakeShareable(new FAssetTypeActions_CreatorPage(CharacterCreatorAssetCategory));
	NarrativeCreatorPageTypeActions = NarrativeCreatorPageTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorPageTypeAction.ToSharedRef());

	TSharedPtr<FAssetTypeActions_CreatorColorSwatch> NarrativeCreatorColorSwatchTypeAction = MakeShareable(new FAssetTypeActions_CreatorColorSwatch(CharacterCreatorAssetCategory));
	NarrativeCreatorColorSwatchTypeActions = NarrativeCreatorColorSwatchTypeAction;
	AssetToolsModule.RegisterAssetTypeActions(NarrativeCreatorColorSwatchTypeAction.ToSharedRef());

	// Register component visualizer for InteractableComponent
	RegisterComponentVisualizer(UNarrativeInteractableComponent::StaticClass()->GetFName(), MakeShareable(new FNarrativeInteractableComponentVisualizer));

	// Register the details customizer
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomPropertyTypeLayout("StableActor", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FStableActorPropertyCustomization::MakeInstance));
		PropertyModule.NotifyCustomizationModuleChanged();
	}
}


void FNarrativeArsenalEditorModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}

	// Unregister all component visualizers
	if (GEngine)
	{
		for (const FName ClassName : RegisteredComponentClassNames)
		{
			GUnrealEd->UnregisterComponentVisualizer(ClassName);
		}
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

void FNarrativeArsenalEditorModule::RegisterComponentVisualizer(FName ComponentClassName, TSharedPtr<FComponentVisualizer> Visualizer)
{
	if (GUnrealEd != nullptr && Visualizer.IsValid())
	{
		GUnrealEd->RegisterComponentVisualizer(ComponentClassName, Visualizer);
		Visualizer->OnRegister();

		RegisteredComponentClassNames.Add(ComponentClassName);
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