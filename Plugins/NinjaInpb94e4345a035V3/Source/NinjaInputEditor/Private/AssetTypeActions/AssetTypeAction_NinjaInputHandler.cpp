// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_NinjaInputHandler.h"

#include "NinjaInputEditor.h"
#include "NinjaInputHandlerBlueprint.h"

FText FAssetTypeActions_NinjaInputHandler::GetName() const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_InputHandler_Title", "Input Handler");
}

uint32 FAssetTypeActions_NinjaInputHandler::GetCategories()
{
    return FNinjaInputEditorModule::GetInputAssetsCategory();
}

FColor FAssetTypeActions_NinjaInputHandler::GetTypeColor() const
{
    return FColor(50, 108, 90);
}

FText FAssetTypeActions_NinjaInputHandler::GetAssetDescription(const FAssetData& AssetData) const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_InputHandler_Description", 
        "A Blueprint used by the Ninja Input plugin to handle Enhanced Input Actions");
}

UClass* FAssetTypeActions_NinjaInputHandler::GetSupportedClass() const
{
    return UNinjaInputHandlerBlueprint::StaticClass();
}

const TArray<FText>& FAssetTypeActions_NinjaInputHandler::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInputSubMenu", "Ninja Input")
	};

	return SubMenus;
}
