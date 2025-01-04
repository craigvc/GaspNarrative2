// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_InventoryItemDefinition.h"

#include "NinjaInventoryEditor.h"
#include "Data/NinjaInventoryItemDataAsset.h"

FText FAssetTypeAction_InventoryItemDefinition::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_ItemDefinition_Title", "Item Definition");
}

uint32 FAssetTypeAction_InventoryItemDefinition::GetCategories()
{
	return FNinjaInventoryEditorModule::GetInventoryAssetsCategory();
}

FColor FAssetTypeAction_InventoryItemDefinition::GetTypeColor() const
{
	return FColor(106, 117, 94);
}

FText FAssetTypeAction_InventoryItemDefinition::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_ItemDefinition_Description", 
		"Data Asset that defines an Item. Items are build using Fragments and are added to Containers in an Inventory.");
}

UClass* FAssetTypeAction_InventoryItemDefinition::GetSupportedClass() const
{
	return UNinjaInventoryItemDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeAction_InventoryItemDefinition::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInventorySubMenu", "Ninja Inventory")
	};

	return SubMenus;
}
