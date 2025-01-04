// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaEquipmentDataAsset.h"

#include "AbilitySystemComponent.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "GameFramework/NinjaEquipment.h"

const FPrimaryAssetType	UNinjaEquipmentDataAsset::DataAssetType = EQUIPMENT_DATA_ASSET_NAME;

UNinjaEquipmentDataAsset::UNinjaEquipmentDataAsset()
{
	EquipmentInstanceClass = UNinjaEquipment::StaticClass();
}

FPrimaryAssetId UNinjaEquipmentDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(DataAssetType, GetFName());
}

bool UNinjaEquipmentDataAsset::GetStateConfiguration(const FGameplayTag StateTag, FEquipmentStateConfiguration& OutStateConfiguration) const
{
	if (StateTag.IsValid())
	{
		for (const FEquipmentStateConfiguration& Config : StateConfigurations)
		{
			if (Config.StateTags.HasTagExact(StateTag))
			{
				OutStateConfiguration = Config;
				return true;
			}
		}	
	}
	
	return false;
}
