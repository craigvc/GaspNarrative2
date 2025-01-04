// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "UObject/Interface.h"
#include "InventoryPickupInterface.generated.h"

class UNinjaInventoryItemDataAsset;

UINTERFACE(MinimalAPI, Blueprintable)
class UInventoryPickupInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Configures an Actor that represents an Item Pickup.
 */
class NINJAINVENTORY_API IInventoryPickupInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the item granted by the pickup.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	const UNinjaInventoryItemDataAsset* GetItemData() const;
	
	/**
	 * Sets the item granted by the pickup.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	void SetItemData(const UNinjaInventoryItemDataAsset* NewItemData);

	/**
	 * Provides all memories for this item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	TArray<FInventoryDefaultItemMemory> GetItemMemories() const;

	/**
	 * Sets memories that should be used when the item is granted.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	void SetItemMemories(const TArray<FInventoryDefaultItemMemory>& NewItemMemories);
	/**
	 * Gets the source that originated this pickup.
	 *
	 * Might be null, since common implementations might store this as a weak reference to
	 * the original source, that might not be available anymore at this point.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	AActor* GetSource() const;
	
	/**
	 * Sets the source actor that generated this pickup.
	 *
	 * Usually this is the pawn that owns the inventory originating this item, but it could
	 * be something else, like the AI Director that forced a pickup to spawn for example.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	void SetSource(AActor* Source);
	
	/**
	 * Sets an initial location that can be used as-is or as a reference.
	 *
	 * @param InitialLocation
	 *		The initial location set to the actor. This can be modified by the method.
	 *
	 * @param ActualLocation
	 *		The actual location used, which can be the same as the initial, or modified.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Pickup")
	void SetInitialLocation(FVector InitialLocation, FVector& ActualLocation);

};