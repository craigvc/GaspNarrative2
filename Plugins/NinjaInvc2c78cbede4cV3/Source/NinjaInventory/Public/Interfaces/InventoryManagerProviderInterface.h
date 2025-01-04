// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FInventoryDefaultItem.h"
#include "UObject/Interface.h"
#include "InventoryManagerProviderInterface.generated.h"

class UNinjaInventoryLayoutDataAsset;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, Blueprintable)
class UInventoryManagerProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows actors to provide direct access to an Inventory Manager component.
 *
 * Even though this is an optional interface, using the provided static library to retrieve
 * the Equipment Manager Component will always use it first, before performing a component
 * scan in an actor.
 *
 * Inventory Items may be constantly queried by games and implementing this interface as a way
 * to provide the Manager Component, without iterating over actor components, may be a good
 * performance gain.
 */
class NINJAINVENTORY_API IInventoryManagerProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Inventory Manager assigned to an actor.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Manager Provider")
	UNinjaInventoryManagerComponent* GetInventoryManager() const;
	virtual UNinjaInventoryManagerComponent* GetInventoryManager_Implementation() const;

	/**
	 * Provides the Layout for the inventory, for a given character.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Manager Provider")
	const UNinjaInventoryLayoutDataAsset* GetInventoryLayout() const;
	virtual const UNinjaInventoryLayoutDataAsset* GetInventoryLayout_Implementation() const;

	/**
	 * Provides all default items for a character. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Inventory Manager Provider")
	bool GetDefaultItems(TArray<FInventoryDefaultItem>& OutDefaultItems) const;
	virtual bool GetDefaultItems_Implementation(TArray<FInventoryDefaultItem>& OutDefaultItems) const;
	
};