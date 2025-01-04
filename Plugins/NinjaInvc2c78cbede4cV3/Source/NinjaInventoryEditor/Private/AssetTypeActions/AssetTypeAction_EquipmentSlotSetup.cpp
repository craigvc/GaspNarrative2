// Ninja Bear Studio Inc., all rights reserved.
#include "AssetTypeActions/AssetTypeAction_EquipmentSlotSetup.h"

#include "NinjaInventoryEditor.h"
#include "Data/NinjaEquipmentSlotDataAsset.h"

FText FAssetTypeAction_EquipmentSlotSetup::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_EquipmentSlotSetup_Title", "Equipment Slot Setup");
}

uint32 FAssetTypeAction_EquipmentSlotSetup::GetCategories()
{
	return FNinjaInventoryEditorModule::GetInventoryAssetsCategory();
}

FColor FAssetTypeAction_EquipmentSlotSetup::GetTypeColor() const
{
	return FColor(106, 117, 94);
}

FText FAssetTypeAction_EquipmentSlotSetup::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_EquipmentSlotSetup_Description", 
		"Data Asset that defines an equipment slot setup. The Slot Setup is used to define available slots and their default meshes.");
}

UClass* FAssetTypeAction_EquipmentSlotSetup::GetSupportedClass() const
{
	return UNinjaEquipmentSlotDataAsset::StaticClass();
}

const TArray<FText>& FAssetTypeAction_EquipmentSlotSetup::GetSubMenus() const
{
	static const TArray SubMenus
	{
		NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NinjaInventorySubMenu", "Ninja Inventory")
	};

	return SubMenus;
}
