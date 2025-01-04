// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "GameFramework/NinjaInventoryEquipmentAwarePickupActor.h"
#include "NinjaInventoryPhysicsPickupActor.generated.h"

/**
 * A Pickup Actor that is Aware of the Equipment and adds physics to the drop behavior.
 */
UCLASS(Abstract)
class NINJAINVENTORYGAMEPLAY_API ANinjaInventoryPhysicsPickupActor : public ANinjaInventoryEquipmentAwarePickupActor
{
	
	GENERATED_BODY()

public:

	ANinjaInventoryPhysicsPickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Pickup Actor implementation
	virtual void SetInitialLocation_Implementation(FVector InitialLocation, FVector& ActualLocation) override;
	// -- End Pickup Actor implementation
	
protected:

	/** An offset added to the height (Z axis). so the item can "fall". */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Actor")
	float HeightOffset;

	/**
	 * Mass set to mesh component used to represent this pickup.
	 * Only used if the item does not have a weight fragment that can be used.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Actor")
	float DefaultMassInKg;
	
	// -- Begin Equipment Aware Pickup implementation
	virtual void HandleStaticMeshAsset_Implementation(UStaticMesh* StaticMeshAsset) override;
	virtual void HandleSkeletalMeshAsset_Implementation(USkeletalMesh* SkeletalMeshAsset) override;
	// -- End Equipment Aware Pickup implementation

	/**
	 * Provides the weight to be used for physics.
	 */
	virtual float GetBaseWeight() const;

	/**
	 * Provides the stack size used to calculate the total weight.
	 */
	virtual int32 GetStackSize() const;
	
	/**
	 * Applies physics to the Mesh Component used to represent the equipment.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void ApplyPhysics(UMeshComponent* MeshComponent) const;
	
};
