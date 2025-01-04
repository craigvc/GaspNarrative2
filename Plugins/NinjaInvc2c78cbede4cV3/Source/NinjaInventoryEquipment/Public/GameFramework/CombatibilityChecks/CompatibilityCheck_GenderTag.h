// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaEquipmentAssetCompatibilityCheck.h"
#include "CompatibilityCheck_GenderTag.generated.h"

/**
 * Checks an asset's compatibility with the owner based on a gender tag for the body type.
 */
UCLASS()
class NINJAINVENTORYEQUIPMENT_API UCompatibilityCheck_GenderTag : public UNinjaEquipmentAssetCompatibilityCheck
{
	
	GENERATED_BODY()

public:

	// -- Begin Mesh Check implementation
	virtual bool IsCompatible_Implementation(const FGameplayTagContainer AssetTags, AActor* EquipmentOwner) const override;
	// -- End Mesh Check implementation
	
};
