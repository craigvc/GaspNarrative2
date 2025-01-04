// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/NinjaInventoryPickupActor.h"
#include "Types/FEquipmentStateConfiguration.h"
#include "NinjaInventoryEquipmentAwarePickupActor.generated.h"

class UStreamableRenderAsset;
class UStaticMesh;
class USkeletalMesh;
class UNinjaEquipmentDataAsset;

/**
 * A Pickup Actor that is aware of the Equipment and will try to collect the proper mesh to use.
 */
UCLASS(Abstract)
class NINJAINVENTORYGAMEPLAY_API ANinjaInventoryEquipmentAwarePickupActor : public ANinjaInventoryPickupActor
{
	
	GENERATED_BODY()

public:

	ANinjaInventoryEquipmentAwarePickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor implementation

	/**
	 * Provides the Static Mesh Component used, if the actor has a Static Mesh.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	UStaticMeshComponent* GetStaticMeshComponent() const;

	/**
	 * Provides the Skeletal Mesh Component used, if the actor has a Static Mesh.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	USkeletalMeshComponent* GetSkeletalMeshComponent() const;
	
protected:

	/** Gameplay Tag representing the Equipment State from which assets should be collected. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pickup Actor")
	FGameplayTag TargetEquipmentStateTag;
	
	// -- Begin Pickup Actor implementation
	virtual void HandleItemDataUpdated_Implementation() override;
	virtual void OnRep_ItemData() override;
	// -- End Pickup Actor implementation

	const UNinjaEquipmentDataAsset* GetEquipmentDefinition() const;

	/**
	 * Retrieves all equipment assets that might be usable by this actor and loads them.
	 */
	virtual void RetrieveAndLoadEquipmentAssets();

	/**
	 * Dedicated function to collect relevant assets from a state configuration.
	 *
	 * @param StateConfiguration	State configuration providing assets that can be loaded.
	 * @param EquipmentAssets		Array receiving all relevant assets retrieved from the configuration.
	 */
	virtual void AddAssetsToLoad(const FEquipmentStateConfiguration& StateConfiguration, TArray<TSoftObjectPtr<UStreamableRenderAsset>>& EquipmentAssets) const;

	/**
	 * Loads all Equipment Assets using the Asset Manager.
	 */
	virtual void LoadAssets(TArray<TSoftObjectPtr<UStreamableRenderAsset>>& EquipmentAssets);

	/**
	 * Handle the array of assets once it has been fully loaded.
	 */
	virtual void OnEquipmentAssetsLoaded(TArray<TSoftObjectPtr<UStreamableRenderAsset>> EquipmentAssets);

	/**
	 * Handles one specific Equipment Asset that has been loaded, converting it into the proper type.
	 */
	virtual void HandleEquipmentAsset(UStreamableRenderAsset* EquipmentAsset);
	
	/**
	 * Handles a Static Mesh that has been loaded for this equipment.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void HandleStaticMeshAsset(UStaticMesh* StaticMeshAsset);

	/**
	 * Handles a Skeletal Mesh that has been loaded for this equipment.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void HandleSkeletalMeshAsset(USkeletalMesh* SkeletalMeshAsset);

	/**
	 * Allows classes to react to a quality tag.
	 *
	 * It's very common for pickups to somehow represent their quality (Particle Beams, for example)
	 * so to simplify that common requirement, this event is available and can be used by child
	 * classes or blueprints to react to a Gameplay Tag representing the item's quality.
	 *
	 * By default, this is only available if the item has a Quality Fragment.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void HandleItemQualityUpdated(FGameplayTag QualityTag);
	
private:

	TSharedPtr<FStreamableHandle> EquipmentAssetsHandle;
	
};
