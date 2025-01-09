// Copyright Narrative Tools 2022. 


#include "VendorInventoryComponent.h"
#include "NarrativeItem.h"
#include "NarrativeInventorySettings.h"

#define LOCTEXT_NAMESPACE "VendorInventoryComponent"

//UVendorInventoryComponent::UVendorInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
//{
//	//By default buy items for 50% of their value, and sell for 2x their value 
//	BuyItemPct = 0.5f;
//	SellItemPct = 2.f;
//	Currency = 500;
//}
//
//bool UVendorInventoryComponent::AllowLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText) const
//{
//	if (Taker)
//	{
//		const bool bSuperAllows = Super::AllowLootItem(Taker, ItemClass, Quantity, ErrorText);
//		const bool bTheyHaveCurrency = Taker->GetCurrency() >= GetSellPrice(ItemClass, Quantity);
//
//		if (!bTheyHaveCurrency)
//		{
//			ErrorText = LOCTEXT("AllowLootItem_NotEnoughMoney", "You don't have enough money to complete this trade.");
//		}
//
//		return bSuperAllows && bTheyHaveCurrency;
//	}
//
//	return false;
//}
//
//bool UVendorInventoryComponent::AllowStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText) const
//{
//	if (Storer)
//	{
//		//Ensure we have enough money to buy the item from the seller 
//		const bool bSuperAllows = Super::AllowStoreItem(Storer, ItemClass, Quantity, ErrorText);
//		const bool bWeHaveCurrency = GetCurrency() >= GetBuyPrice(ItemClass, Quantity);
//
//		if (!bWeHaveCurrency)
//		{
//			ErrorText = LOCTEXT("AllowStoreItem_NotEnoughMoney", "The shop doesn't have enough money to complete the trade.");
//		}
//
//		return bSuperAllows && bWeHaveCurrency;
//	}
//
//	return false;
//}
//
//FItemAddResult UVendorInventoryComponent::PerformLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/)
//{
//	FItemAddResult LootResult = Super::PerformLootItem(Taker, ItemClass, Quantity);
//
//	if (Taker)
//	{
//		const int32 TransactionPrice = GetSellPrice(ItemClass, LootResult.AmountGiven);
//
//		//We sold an item, need to remove cash from taker and store in our inventory 
//		Taker->AddCurrency(-TransactionPrice);
//		AddCurrency(TransactionPrice);
//	}
//	
//	return LootResult;
//}
//
//FItemAddResult UVendorInventoryComponent::PerformStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/)
//{
//	FItemAddResult StoreResult = Super::PerformStoreItem(Storer, ItemClass, Quantity);
//	
//	if (Storer)
//	{
//		const int32 TransactionPrice = GetBuyPrice(ItemClass, StoreResult.AmountGiven);
//
//		//We sold an item, need to remove cash from taker and store in our inventory 
//		Storer->AddCurrency(TransactionPrice);
//		AddCurrency(-TransactionPrice);
//	}
//
//	return StoreResult;
//}
//
//int32 UVendorInventoryComponent::GetBuyPrice_Implementation(TSubclassOf<UNarrativeItem> Item, int32 Quantity) const
//{
//	if (IsValid(Item))
//	{
//		if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(Item))
//		{
//			return FMath::CeilToInt((ItemCDO->BaseValue * BuyItemPct) * Quantity);
//		}
//	}
//	return 0;
//}
//
//int32 UVendorInventoryComponent::GetSellPrice_Implementation(TSubclassOf<UNarrativeItem> Item, int32 Quantity) const
//{
//	if (IsValid(Item))
//	{
//		if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(Item))
//		{
//			return FMath::CeilToInt((ItemCDO->BaseValue * SellItemPct) * Quantity);
//		}
//	}
//
//	return INT_MAX;
//}

#undef LOCTEXT_NAMESPACE 