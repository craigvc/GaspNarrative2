// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryComponent.h"
#include <GameplayTagContainer.h>
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
	TSoftObjectPtr<class UCharacterAppearanceBase> DefaultAppearance; 

	/** Default currency this character should have in their inventory */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 DefaultCurrency;

	/** The items we should grant the character by default. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FLootTableRoll> DefaultItemLoadout;

	/** Add any custom tags the character needs in here, for example State.Invulnerable if you want the character to never take damage. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Factions", meta = (Categories = "Narrative.State"))
	FGameplayTagContainer DefaultOwnedTags;

	/**The factions this character will be in by default - you can set the characters faction to something else later if desired. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Factions", meta = (Categories = "Narrative.Factions"))
	FGameplayTagContainer DefaultFactions;

	/** Bots use this in their EQS query when looking for targets. Higher values make bots more drawn to us. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attack Priority")
	float AttackPriority;

    UPROPERTY()
    FPrimaryAssetType AssetType;

	FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId(AssetType, GetFName());
	}
};
