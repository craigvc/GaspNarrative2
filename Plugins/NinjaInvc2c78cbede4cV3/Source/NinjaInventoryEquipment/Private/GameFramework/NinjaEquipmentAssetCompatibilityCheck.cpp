// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaEquipmentAssetCompatibilityCheck.h"

bool UNinjaEquipmentAssetCompatibilityCheck::IsCompatible_Implementation(const FGameplayTagContainer AssetTags, AActor* EquipmentOwner) const
{
	return true;
}
