// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "VendorInventoryComponent.generated.h"



/**
 * A special type of inventory you should use for vendors. Vendors are essentially just lootable containers, however looting/storing items
 * will consume/remove currency from the player and vendors when the looting occurs. The UI will also display prices. 
 */
UCLASS( ClassGroup=(Narrative), DisplayName = "Narrative Vendor Inventory", meta=(BlueprintSpawnableComponent) )
class NARRATIVEINVENTORY_API UVendorInventoryComponent : public UNarrativeInventoryComponent
{
	GENERATED_BODY()
	
//	//class UNarrativeItem;
//
//protected:
//
//	UVendorInventoryComponent(const FObjectInitializer& ObjectInitializer);
//
//	virtual bool AllowLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText) const override;
//	virtual bool AllowStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText) const override;
//
//	/** Remove the item from us, and give it to the taker */
//	virtual FItemAddResult PerformLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity = 1) override;
//
//	/** Remove the item from the storer, and give it to us */
//	virtual FItemAddResult PerformStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity = 1) override;
//
//
//	/**
//	* Return the price we'll buy the given item for
//	*/
//	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
//	int32 GetBuyPrice(TSubclassOf<class UNarrativeItem> Item, int32 Quantity = 1) const;
//	virtual int32 GetBuyPrice_Implementation(TSubclassOf<class UNarrativeItem> Item, int32 Quantity = 1) const;
//
//	/**
//	* Return the price we'll sell the given item for
//	*/
//	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Item")
//	int32 GetSellPrice(TSubclassOf<class UNarrativeItem> Item, int32 Quantity = 1) const;
//	virtual int32 GetSellPrice_Implementation(TSubclassOf<class UNarrativeItem> Item, int32 Quantity = 1) const;
//
//	//The percentage of the items value we'll buy items for
//	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
//	float BuyItemPct;
//
//	//The percentage of the items value we'll sell items for 
//	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
//	float SellItemPct;
};
