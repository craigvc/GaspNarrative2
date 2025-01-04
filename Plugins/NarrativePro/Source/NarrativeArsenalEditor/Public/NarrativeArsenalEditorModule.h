// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "AssetTypeActions_Base.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNarrativeArsenalEditor, All, All);

class FNarrativeArsenalEditorModule : public IModuleInterface,
	public IHasMenuExtensibility, public IHasToolBarExtensibility
{
public:

	static uint32 GameAssetCategory;

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

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

	TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
	TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;
};
