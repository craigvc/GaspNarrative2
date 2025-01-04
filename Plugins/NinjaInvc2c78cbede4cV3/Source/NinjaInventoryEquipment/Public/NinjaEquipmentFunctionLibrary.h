// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NinjaEquipmentFunctionLibrary.generated.h"

class UNinjaEquipment;
class UNinjaEquipmentManagerComponent;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;

/**
 * Support functions for the Equipment System. 
 */
UCLASS()
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentFunctionLibrary : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Equipment Manager assigned to an actor.
	 * 
	 * The Equipment Manager should be assigned to the actual Pawn, so this function
	 * will not look for it in any other places, but it will navigate different assets
	 * that may be provided, such as a Player State or Controller.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment", meta = (ReturnDisplayName = "Equipment Manager"))
	static UNinjaEquipmentManagerComponent* GetEquipmentManager(const AActor* Owner);

	/**
	 * Provides the Equipment Manager related to an Inventory Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment", meta = (ReturnDisplayName = "Equipment Manager"))
	static UNinjaEquipmentManagerComponent* GetEquipmentManagerForInventory(const UNinjaInventoryManagerComponent* InventoryManager);

	/**
	 * Provides the Equipment Manager related to an Inventory Item.
	 * The item must be currently assigned to an Inventory Manager for this to be viable.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment", meta = (ReturnDisplayName = "Equipment Manager"))
	static UNinjaEquipmentManagerComponent* GetEquipmentManagerForItem(const UNinjaInventoryItem* Item);

	/**
	 * Retrieves the equipment that represents an item in the world.
	 * The item must be currently assigned to an Inventory Manager for this to be viable.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Equipment", meta = (ReturnDisplayName = "Equipment Manager"))
    static UNinjaEquipment* GetEquipmentForItem(const UNinjaInventoryItem* Item);
	
};
