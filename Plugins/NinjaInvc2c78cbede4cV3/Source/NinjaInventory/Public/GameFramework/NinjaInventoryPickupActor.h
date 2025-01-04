// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InventoryPickupInterface.h"
#include "NinjaInventoryPickupActor.generated.h"

class UNinjaInventoryItemDataAsset;

/**
 * A default Pickup Actor that implements the appropriate interface
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class NINJAINVENTORY_API ANinjaInventoryPickupActor : public AActor, public IInventoryPickupInterface
{
	
	GENERATED_BODY()

public:

	ANinjaInventoryPickupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Actor implementation

	// -- Begin Pickup implementation
	virtual const UNinjaInventoryItemDataAsset* GetItemData_Implementation() const override;
	virtual void SetItemData_Implementation(const UNinjaInventoryItemDataAsset* NewItemData) override;
	virtual TArray<FInventoryDefaultItemMemory> GetItemMemories_Implementation() const override;
	virtual void SetItemMemories_Implementation(const TArray<FInventoryDefaultItemMemory>& NewItemMemories) override;
	virtual AActor* GetSource_Implementation() const override;
	virtual void SetSource_Implementation(AActor* Source) override;
	virtual void SetInitialLocation_Implementation(FVector InitialLocation, FVector& ActualLocation) override;
	// -- End Pickup implementation
	
protected:

	/**
	 * Allows this item to react to the Item Instance.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void HandleItemDataUpdated();

	/**
	 * Allows this item to react to the Source.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup Actor")
	void HandleSourceUpdated();
	
	/**
	 * Reacts to the Item Data that has been replicated.
	 * Useful to gather specific fragments that affect cosmetics.
	 */
	UFUNCTION()
	virtual void OnRep_ItemData();

	/**
	 * Reacts to the Source that has been replicated.
	 * 
	 * Useful to gather aspects of the source once it has been set, since the
	 * actual source might be unavailable later.
	 */
	UFUNCTION()
	virtual void OnRep_Source();
	
private:

	/** Data Asset representing the item to grant. */
	UPROPERTY(ReplicatedUsing = OnRep_ItemData)
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData;

	/** Weak pointer to the source that originated this pickup. */
	UPROPERTY(ReplicatedUsing = OnRep_Source)
	TWeakObjectPtr<AActor> SourcePtr;
	
	/**
	 * All memories available to this item.
	 * These are only available in the authority.
	 */
	TArray<FInventoryDefaultItemMemory> ItemMemories;

};
