// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Types/FEquipmentStateConfiguration.h"
#include "NinjaEquipmentDataAsset.generated.h"

#define EQUIPMENT_DATA_ASSET_NAME	TEXT("EquipmentData")

class UNinjaEquipment;

/**
 * Bundles information about an Equipment Piece.
 */
UCLASS()
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentDataAsset : public UPrimaryDataAsset
{
	
	GENERATED_BODY()

public:

	static const FPrimaryAssetType DataAssetType;

	/** Class that represents the equipment. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment", NoClear, meta = (AssetBundles = "Classes"))
	TSubclassOf<UNinjaEquipment> EquipmentInstanceClass;

	/** Assets related to each state available for this equipment. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment", meta = (AssetBundles = "States", TitleProperty = "StateTags"))
	TArray<FEquipmentStateConfiguration> StateConfigurations;

	UNinjaEquipmentDataAsset();
	
	// -- Begin Primary Data Asset implementation	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	// -- End Primary Data Asset implementation	

	/**
	 * Provides the configuration for a given state in this Data Asset.
	 *
	 * @param StateTag					Gameplay Tag representing the state.
	 * @param OutStateConfiguration		Configuration for the state. 
	 * @return							True if a configuration was found, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment|Equipment Data")
	bool GetStateConfiguration(UPARAM(meta = (Categories = "Equipment.State")) FGameplayTag StateTag
		, FEquipmentStateConfiguration& OutStateConfiguration) const;

};
