// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_InventoryContainerDefinition.h"

#include "NinjaInventoryEditor.h"
#include "Data/NinjaInventoryContainerDataAsset.h"

FText FAssetTypeAction_InventoryContainerDefinition::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_ContainerDefinition_Title", "Container Definition");
}

uint32 FAssetTypeAction_InventoryContainerDefinition::GetCategories()
{
	return FNinjaInventoryEditorModule::GetInventoryAssetsCategory();
}

FColor FAssetTypeAction_InventoryContainerDefinition::GetTypeColor() const
{
	return FColor(106, 117, 94);
}

FText FAssetTypeAction_InventoryContainerDefinition::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_ContainerDefinition_Description", 
		"Data Asset that defines a Container. Containers are sections of the Inventory used to store Items.");
}

UClass* FAssetTypeAction_InventoryContainerDefinition::GetSupportedClass() const
{
	return UNinjaInventoryContainerDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeAction_InventoryContainerDefinition::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInventorySubMenu", "Ninja Inventory")
	};

	return SubMenus;
}
