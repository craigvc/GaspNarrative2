// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_EquipmentDefinition.h"

#include "NinjaInventoryEditor.h"
#include "Data/NinjaEquipmentDataAsset.h"

FText FAssetTypeAction_EquipmentDefinition::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_EquipmentDefinition_Title", "Equipment Definition");
}

uint32 FAssetTypeAction_EquipmentDefinition::GetCategories()
{
	return FNinjaInventoryEditorModule::GetInventoryAssetsCategory();
}

FColor FAssetTypeAction_EquipmentDefinition::GetTypeColor() const
{
	return FColor(106, 117, 94);
}

FText FAssetTypeAction_EquipmentDefinition::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_EquipmentDefinition_Description", 
		"Data Asset that defines equipment. Equipment is the representation of an Item in the world.");
}

UClass* FAssetTypeAction_EquipmentDefinition::GetSupportedClass() const
{
	return UNinjaEquipmentDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeAction_EquipmentDefinition::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInventorySubMenu", "Ninja Inventory")
	};

	return SubMenus;
}
