// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AssetTypeCategories.h"
#include "IAssetTools.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaInputEditor, Log, All);

class FNinjaInputEditorModule : public IModuleInterface
{
public:
    
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    /** Provides the asset categories supported by this editor module. */
    static EAssetTypeCategories::Type GetInputAssetsCategory()
    {
        return InputAssetsCategory;
    }

private:

    /** All asset categories managed by this editor module. */
    static EAssetTypeCategories::Type InputAssetsCategory;

    /** All asset type actions registered by this module. */
    TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;

    void RegisterAssetTypeActions(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
    {
        AssetTools.RegisterAssetTypeActions(Action);
        CreatedAssetTypeActions.Add(Action);
    }
};
