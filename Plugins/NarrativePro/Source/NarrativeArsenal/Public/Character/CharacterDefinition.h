// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryComponent.h"
#include "CharacterDefinition.generated.h"

/**
 * Data asset containing character data - the characters default appearance, etc.
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterDefinition();

	/**The characters default appearance*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Appearance", meta = (AssetBundles = "SpawnedData"))
	TSoftObjectPtr<class UCharacterAppearance> DefaultAppearance; 

	/** Default currency this character should have in their inventory */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 DefaultCurrency;

	/** The items we should grant the character by default. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FLootTableRoll> DefaultItemLoadout;

	 /** The type of asset, in this example this value HAS to be specified in the constructor for each type(unless its abstract). */
    UPROPERTY()
    FPrimaryAssetType AssetType;

	FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId(AssetType, GetFName());
	}
};
