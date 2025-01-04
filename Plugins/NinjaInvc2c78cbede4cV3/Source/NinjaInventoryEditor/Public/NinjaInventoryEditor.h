// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AssetTypeCategories.h"
#include "IAssetTools.h"
#include "Modules/ModuleManager.h"

class FNinjaInventoryEditorModule : public IModuleInterface
{
public:
	
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

	/** Provides the asset categories supported by this editor module. */
	static EAssetTypeCategories::Type GetInventoryAssetsCategory()
	{
		return InventoryAssetsCategory;
	}

private:

	/** Main Ninja Bear Studio category. */
	static EAssetTypeCategories::Type InventoryAssetsCategory;
	
	/** All asset type actions registered by this module. */
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;

	void RegisterAssetTypeActions(IAssetTools& AssetTools, const TSharedRef<IAssetTypeActions>& Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}
	
};
