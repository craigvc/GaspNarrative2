// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "AssetTypeActions_Base.h"
#include "Interaction/InteractableComponentVisualizer.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNarrativeArsenalEditor, All, All);

class FNarrativeArsenalEditorModule : public IModuleInterface,
	public IHasMenuExtensibility, public IHasToolBarExtensibility
{
public:

	static uint32 GameAssetCategory;
	static uint32 CharacterCreatorAssetCategory;

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void RegisterComponentVisualizer(FName ComponentClassName, TSharedPtr<FComponentVisualizer> Visualizer);

	void RegisterSettings();
	void UnregisterSettings();

	/** Needed to allow toolbar/menu extensibility */
	virtual TSharedPtr<FExtensibilityManager> GetMenuExtensibilityManager() override { return MenuExtensibilityManager; }
	virtual TSharedPtr<FExtensibilityManager> GetToolBarExtensibilityManager() override { return ToolBarExtensibilityManager; }

	TSharedPtr<class FAssetTypeActions_Base> NarrativeWeaponTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeGameplayEffectTypeActions;

	TSharedPtr<class FAssetTypeActions_Base> NarrativeEquippableTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeClothingTypeActions;

	TSharedPtr<class FAssetTypeActions_Base> NarrativeNPCDefinitionTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativePlayerDefinitionTypeActions;

	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorOptionMeshTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorOptionGroomTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorOptionScalarTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorOptionVectorTypeActions;

	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorItemMeshTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorItemGroomTypeActions;

	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorFormTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorPageTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorSectionTypeActions;
	TSharedPtr<class FAssetTypeActions_Base> NarrativeCreatorColorSwatchTypeActions;

	TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
	TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;

private:
	TArray<FName> RegisteredComponentClassNames;
};
