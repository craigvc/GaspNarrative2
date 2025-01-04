// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_InventoryLayout.h"

#include "NinjaInventoryEditor.h"
#include "Data/NinjaInventoryLayoutDataAsset.h"

FText FAssetTypeAction_InventoryLayout::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_InventoryLayout_Title", "Inventory Layout");
}

uint32 FAssetTypeAction_InventoryLayout::GetCategories()
{
	return FNinjaInventoryEditorModule::GetInventoryAssetsCategory();
}

FColor FAssetTypeAction_InventoryLayout::GetTypeColor() const
{
	return FColor(106, 117, 94);
}

FText FAssetTypeAction_InventoryLayout::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_InventoryLayout_Description", 
		"Data Asset that defines an Inventory Layout. The Layout defines Containers and other details relevant to the Inventory Manager.");
}

UClass* FAssetTypeAction_InventoryLayout::GetSupportedClass() const
{
	return UNinjaInventoryLayoutDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeAction_InventoryLayout::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInventorySubMenu", "Ninja Inventory")
	};

	return SubMenus;
}
