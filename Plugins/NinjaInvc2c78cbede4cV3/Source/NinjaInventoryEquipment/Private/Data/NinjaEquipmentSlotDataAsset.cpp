// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaEquipmentSlotDataAsset.h"

const FPrimaryAssetType	UNinjaEquipmentSlotDataAsset::DataAssetType = EQUIPMENT_SLOT_DATA_ASSET_NAME;

UNinjaEquipmentSlotDataAsset::UNinjaEquipmentSlotDataAsset()
{
}

FPrimaryAssetId UNinjaEquipmentSlotDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(DataAssetType, GetFName());
}
