// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/DroppableItemInterface.h"
#include "Interfaces/Aspects/OperableItemInterface.h"
#include "Templates/SubclassOf.h"
#include "Types/FInventoryDefaultItem.h"
#include "ItemFragment_Pickup.generated.h"

class AActor;

/**
 * A fragment that specifies an item that can be represented as a pickup actor.
 */
UCLASS(DisplayName = "Pickup")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Pickup : public UNinjaInventoryItemFragment, public IDroppableItemInterface 
{
	
	GENERATED_BODY()

public:

	UItemFragment_Pickup();

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation
	
	/**
	 * Checks if this fragment has a valid Pickup Actor Class.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	bool HasValidPickupActorClass() const;

	/**
	 * Retrieves the Actor used to represent dropped items in the world.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual TSubclassOf<AActor> GetPickupActorClass() const final override;

	/**
	 * Evaluates if an item can be dropped.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanDropItem(const UNinjaInventoryItem* Item) const override;
	
	/**
	 * Drops an inventory item, including its current memory.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void DropItem(UNinjaInventoryItem* Item, FVector InitialLocation, FVector& ActualLocation) override;
	
	/**
	 * Drops an inventory data, with any additional memories.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void DropItemData(AActor* Source, const UNinjaInventoryItemDataAsset* ItemData, FVector InitialLocation, FVector& ActualLocation, const TArray<FInventoryDefaultItemMemory>& Memories) override;

protected:

	/** Class that represents this item when placed in the world, available for pickup. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (MustImplement = "/Script/NinjaInventory.InventoryPickupInterface"))
	TSubclassOf<AActor> PickupActorClass;

	/** If set to true, allows this item to be dropped if the Inventory Manager is not assigned. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bDroppedWhenUnassigned;

	/**
	 * Extension point to handle an item that has been spawned.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Fragment")
	void HandlePickupSpawned(AActor* PickupActor);
	virtual void HandlePickupSpawned_Implementation(AActor* PickupActor) { }

	/**
	 * Extension point used to modify the initial location in any way.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Fragment")
	FVector ModifyInitialLocation(const AActor* Source, const FVector& InitialLocation);
	
	/**
	 * Selects all item memories that should be added to the pickup actor.
	 */
	virtual TArray<FInventoryDefaultItemMemory> GetItemMemories(UNinjaInventoryItem* Item) const;
	
};
