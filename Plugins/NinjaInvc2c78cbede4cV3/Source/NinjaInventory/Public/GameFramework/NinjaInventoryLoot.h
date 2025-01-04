// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NinjaInventoryLoot.generated.h"

struct FInventoryDefaultItemMemory;

class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;

/**
 * Stores information about loot that has been selected for a requester.
 */
UCLASS(Blueprintable, BlueprintType)
class NINJAINVENTORY_API UNinjaInventoryLoot : public UObject
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryLoot();

	/**
	 * Provides the container where the loot was previously stored.
	 * Might be relevant for some scenarios (like player drops).
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot")
	const UNinjaInventoryContainerDataAsset* GetContainerData() const;

	/**
	 * Sets the new Container Data assigned to the loot.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	void SetContainerData(const UNinjaInventoryContainerDataAsset* NewContainerData);
	
	/**
	 * Provides the item data for the loot.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot")
	const UNinjaInventoryItemDataAsset* GetItemData() const;

	/**
	 * Sets the new Item Data assigned to the loot.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	void SetItemData(UNinjaInventoryItemDataAsset* NewItemData);
	
	/**
	 * Provides the quantity assigned to this loot.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot")
	int32 GetQuantity() const;

	/**
	 * Sets the new quantity assigned to the loot.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	void SetQuantity(int32 NewQuantity);

	/**
	 * Provides the Loot Component that generated this loot.
	 * It might be null in some cases, if the owner has been destroyed.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot")
	UNinjaInventoryLootComponent* GetSource() const;

	/**
	 * Sets the new Loot Component assigned to this loot. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	void SetSource(UNinjaInventoryLootComponent* NewSource);

	/**
	 * Creates any default memories needed to support this loot.
	 * Most common case is creating stack memories for the quantity.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Loot")
	virtual TArray<FInventoryDefaultItemMemory> GetDefaultMemories() const;
	
protected:

	/** Container data where the loot was stored. Might be null. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot")
	TObjectPtr<const UNinjaInventoryContainerDataAsset> ContainerData = nullptr;
	
	/** Item data for the loot. Always present. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot")
	TObjectPtr<const UNinjaInventoryItemDataAsset> ItemData = nullptr;

	/** Amount looted for the item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Loot")
	int32 Quantity = 0;

	/** The source that generated this loot. */
	UPROPERTY()
	TWeakObjectPtr<UNinjaInventoryLootComponent> SourceComponent;
	
};
