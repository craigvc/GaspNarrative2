// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InventoryFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEINVENTORY_API UInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/**
	* Find the inventory component from the supplied target object. 
	* 
	* If given a pawn/controller, will check pawns player state and controller for the inventory component also. 
	*
	* @return The inventory component.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory", meta = (DefaultToSelf = "Target"))
	static class UNarrativeInventoryComponent* GetInventoryComponentFromTarget(AActor* Target);


	/**
	* Sort the array of inventory items from a-z
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory")
	static TArray<class UNarrativeItem*> SortItemArrayAlphabetical(TArray<class UNarrativeItem*> InItems, const bool bReverse);

	/**
	* Sort the array of inventory items using stack weight
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory")
	static TArray<class UNarrativeItem*> SortItemArrayWeight(TArray<class UNarrativeItem*> InItems, const bool bReverse);
};
