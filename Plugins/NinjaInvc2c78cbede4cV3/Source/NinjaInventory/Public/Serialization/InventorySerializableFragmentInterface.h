// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "UObject/Interface.h"
#include "InventorySerializableFragmentInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UInventorySerializableFragmentInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Marks a fragment that can be persisted in a save game.
 */
class NINJAINVENTORY_API IInventorySerializableFragmentInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Informs if this fragment can be serialized.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Serializable Fragment Interface")
	bool CanBeSerialized() const;
	virtual bool CanBeSerialized_Implementation() const { return true; }
	
	/**
	 * Restores the fragment from a saved memory.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Serializable Fragment Interface")
	void RestoreFromSavedMemory(const FInventoryDefaultItemMemory& Memory);
	
};