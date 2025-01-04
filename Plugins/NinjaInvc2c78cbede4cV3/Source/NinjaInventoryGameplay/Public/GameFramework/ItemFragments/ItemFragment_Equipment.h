// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/EquipableItemInterface.h"
#include "ItemFragment_Equipment.generated.h"

class UNinjaEquipmentDataAsset;
class UNinjaEquipmentManagerComponent;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * Defines an Equipment, which is a physical representation of an Inventory Item in the world.
 */
UCLASS(DisplayName = "Equipment")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Equipment : public UNinjaInventoryItemFragment,
	public IEquipableItemInterface
{
	
	GENERATED_BODY()

public:

	UItemFragment_Equipment();

	// -- Begin Fragment implementation
	virtual void OnInitializeFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void OnApplyFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void OnRevertFragment_Implementation(UNinjaInventoryItem* Item) override;
	// -- End Fragment implementation

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation	
	
	/**
	 * Provides the Data Asset that configures the equipment representing this item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual const UNinjaEquipmentDataAsset* GetEquipmentDataAsset() const override;

	/**
	 * Provides the equipment representing a given item, if any.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual UNinjaEquipment* GetEquipment(const UNinjaInventoryItem* Item) const override;

	/**
	 * Provides the equipment state for the current item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual FGameplayTag GetEquipmentState(const UNinjaInventoryItem* Item) const;

protected:

	/** Definition for the asset, bundling all related assets. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	TObjectPtr<const UNinjaEquipmentDataAsset> EquipmentData;

	/**
	 * Synchronizes the equipment with the current item and container.
	 * 
	 * @param Item					Item that has changed to another container.
	 * @param Container				New container for the item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SynchronizeEquipment(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container);
	
	/**
	 * Handles a given state for the equipment backing the item.
	 *
	 * @param EquipmentManager		Equipment Manager owning the equipment.
	 * @param Item					Item backing the equipment, or used to create a new one.
	 * @param Container				Container where the item is stored.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void HandleEquipmentState(UNinjaEquipmentManagerComponent* EquipmentManager, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container);

	/**
	 * Removes the Equipment Instance.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void RemoveEquipment(UNinjaInventoryItem* Item) const;
	
};
