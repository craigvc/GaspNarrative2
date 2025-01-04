// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FEquipmentMeshTypes.h"
#include "UObject/Object.h"
#include "NinjaEquipmentAssetCompatibilityCheck.generated.h"

/**
 * Checks if a given Equipment Asset (Mesh, Actors) is compatible with the owner.
 *
 * The most classic scenario is having a piece of equipment with meshes for male and female characters
 * and having this compatibility to check which mesh is the correct one to assign to the owner.
 */
UCLASS(Abstract, Const, Blueprintable, BlueprintType)
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentAssetCompatibilityCheck : public UObject
{
	
	GENERATED_BODY()


public:

	/**
	 * Checks if a given equipment asset tag container is compatible with the owner.
	 *
	 * @param AssetTags			Gameplay Tags assigned to the asset configuration.
	 * @param EquipmentOwner	Owner of the equipment. May provide tags, additional information, etc.
	 * @return					True if the asset is compatible, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Equipment Asset Check")
	bool IsCompatible(const FGameplayTagContainer AssetTags, AActor* EquipmentOwner) const;
	
};
