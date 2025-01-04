// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Types/FEquipmentMeshTypes.h"
#include "NinjaEquipmentSlotDataAsset.generated.h"

#define EQUIPMENT_SLOT_DATA_ASSET_NAME	TEXT("EquipmentSlotData")

/**
 * Default configuration for slots used by equipments.
 */
UCLASS()
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentSlotDataAsset : public UPrimaryDataAsset
{
	
	GENERATED_BODY()

public:

	static const FPrimaryAssetType DataAssetType;

	/** Default data for equipment slots. */
	UPROPERTY(EditDefaultsOnly, Category = "Slot Data", meta = (TitleProperty = "SlotTag", AssetBundles = "Meshes"))
	TArray<FEquipmentSkeletalMesh> SkeletalMeshes;
	
	UNinjaEquipmentSlotDataAsset();
	
	// -- Begin Primary Data Asset implementation	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	// -- End Primary Data Asset implementation	
	
};
