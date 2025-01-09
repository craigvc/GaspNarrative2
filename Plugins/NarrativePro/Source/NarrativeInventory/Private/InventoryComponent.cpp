// Copyright Narrative Tools 2022. 

#include "InventoryComponent.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "NarrativeItem.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>
#include "NarrativeInventorySettings.h"
#include <Serialization/ObjectAndNameAsStringProxyArchive.h>


#define LOCTEXT_NAMESPACE "Inventory"

FNarrativeSavedItem::FNarrativeSavedItem(class UNarrativeItem* Item)
{
	if (Item)
	{
		ItemClass = Item->GetClass();
		Quantity = Item->GetQuantity();
		bActive = Item->bActive;
		//bFavourited = Item->bFavourite;

		//Serialize the items savegame vars into byte data 
		FMemoryWriter MemWriter(ByteData);
		FObjectAndNameAsStringProxyArchive Ar(MemWriter, true);
		Ar.ArIsSaveGame = true;

		Item->Serialize(Ar);
	}
}


// Sets default values for this component's properties
UNarrativeInventoryComponent::UNarrativeInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);

	WeightCapacity = 100.f;
	Capacity = 50;

	BuyItemPct = 0.5f;
	SellItemPct = 2.f;

	bGaveDefaultItems = false; 
}

void UNarrativeInventoryComponent::PrepareForSave_Implementation()
{

	SavedCurrency = Currency;

	SavedItems.Empty();

	for (auto& Item : Items)
	{
		if (Item)
		{
			SavedItems.Add(FNarrativeSavedItem(Item));
		}
	}
}

void UNarrativeInventoryComponent::Load_Implementation()
{
	SetCurrency(SavedCurrency);

	//Deactivate any active items we currently have 
	for (auto& Item : Items)
	{
		if (Item->bActive)
		{
			Item->SetActive(false, true);
		}
	}

	Items.Empty();

	for (auto& InventoryItem : SavedItems)
	{
		if (IsValid(InventoryItem.ItemClass) && InventoryItem.Quantity > 0)
		{
			FItemAddResult AddResult = TryAddItemFromClass(InventoryItem.ItemClass, InventoryItem.Quantity, false);

			//1 saved item is saved per item, we should never have multiples 
			check(AddResult.Stacks.Num() && AddResult.Stacks.IsValidIndex(0));

			FMemoryReader MemReader(InventoryItem.ByteData);
			FObjectAndNameAsStringProxyArchive Ar(MemReader, true);
			Ar.ArIsSaveGame = true;

			//Reactivate any items that were active 
			if (UNarrativeItem* AddedItem = AddResult.Stacks[0])
			{
				//Activate/deactivate the item 
				AddedItem->SetActive(InventoryItem.bActive, false);

				//Load the saved variables back into the remade item
				AddedItem->Serialize(Ar);
			}
		}
	}
}

bool UNarrativeInventoryComponent::UseItem(class UNarrativeItem* Item)
{
	if (!IsValid(Item))
	{
		return false;
	}

	//Ask server to use item - TODO server should probably auth this and then replicate the use back to us - we don't want to predict this 
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerUseItem(Item);
	}

	if (GetOwnerRole() >= ROLE_Authority)
	{
		// Server should validate the inventory actually contains the item the player is attempting to use 
		if (!IsValid(FindItemByClass(Item->GetClass())))
		{
			return false;
		}
	}

	if (Item && Item->CanUse())
	{
		const float UseTime = GetWorld()->GetTimeSeconds();

		if (UseTime - Item->GetLastUseTime() > Item->UseRechargeDuration)
		{
			//If the item is consumable like food, but it can't be removed from the inventory then disallow using the item 
			if (!Item->CanBeRemoved() && Item->bConsumeOnUse)
			{
				return false;
			}

			Item->OnUse();
			Item->Use();

			OnItemUsed.Broadcast(Item);

			if (GetOwnerRole() < ROLE_Authority)
			{
				return true;
			}

			Item->SetLastUseTime(UseTime);

			if (Item->bToggleActiveOnUse)
			{
				Item->SetActive(!Item->bActive);
			}

			if (Item->bConsumeOnUse)
			{
				ConsumeItem(Item, 1);
			}

			return true;
		}
	}

	return false;
}

void UNarrativeInventoryComponent::TryAddFromLootTable(FLootTableRoll LootTable, TArray<FItemAddResult>& OutItemAddResults)
{
	if (LootTable.CanRoll())
	{
		const TArray<FName> AllRows = LootTable.TableToRoll->GetRowNames();

		for (int32 i = 0; i < LootTable.NumRolls; ++i)
		{
			if (FMath::FRand() <= LootTable.Chance)
			{
				const FName RandomRowName = AllRows[FMath::RandRange(0, AllRows.Num() - 1)];
				const FString ContextString = "LootRoll";

				//Grab a row from the loot table, and if it passes, grant the item
				if (FLootTableRow* Row = LootTable.TableToRoll->FindRow<FLootTableRow>(RandomRowName, ContextString))
				{
					if (FMath::FRand() <= Row->Chance)
					{

						//Grant the items and item collections 
						for (FItemWithQuantity& ItemToGive : Row->ItemsToGrant)
						{
							OutItemAddResults.Add(TryAddItemFromClass(ItemToGive.Item.LoadSynchronous(), ItemToGive.Quantity));
						}

						for (auto& Collection : Row->ItemCollectionsToGrant)
						{
							if (IsValid(Collection))
							{
								for (auto& Item : Collection->Items)
								{
									if (!Item.Item.IsNull() && Item.Quantity > 0)
									{
										OutItemAddResults.Add(TryAddItemFromClass(Item.Item.LoadSynchronous(), Item.Quantity));
									}
								}
							}
						}

						for (auto& Subtable : Row->SubTablesToRoll)
						{
							//Make sure the subtable we're about to roll isn't the same table we're already rolling, as that would cause an infinite loop 
							if (Subtable.TableToRoll != LootTable.TableToRoll)
							{
								TryAddFromLootTable(Subtable, OutItemAddResults);
							}
						}
					}
				}
			}
		}
	}
}

FItemAddResult UNarrativeInventoryComponent::TryAddItemFromClass(TSubclassOf<class UNarrativeItem> ItemClass, const int32 Quantity /*=1*/, const bool bCheckAutoUse/*=false*/)
{
	if (ItemClass && Quantity > 0)
	{
		FItemAddResult AddResult = TryAddItem_Internal(ItemClass, Quantity);

		if (AddResult.AmountGiven > 0)
		{
			OnItemAdded.Broadcast(AddResult);
		}

		if (bCheckAutoUse && GetNetMode() == NM_Standalone)
		{
			for (auto& Stack : AddResult.Stacks)
			{
				if (Stack->ShouldUseOnAdd())
				{
					UseItem(Stack);
				}
			}
		}


		return AddResult;
	}
	return FItemAddResult::AddedNone(Quantity, FText::FromString("Failed to add item to inventory."));
}

int32 UNarrativeInventoryComponent::ConsumeItem(class UNarrativeItem* Item, const int32 Quantity)
{
	if (Item && Item->CanBeRemoved() && Quantity > 0)
	{
		if (GetOwnerRole() < ROLE_Authority)
		{
			ServerConsumeItem(Item, Quantity);
			return 0;
		}

		if (GetOwner() && GetOwner()->HasAuthority())
		{
			const int32 RemoveQuantity = FMath::Min(Quantity, Item->GetQuantity());

			//We shouldn't have a negative amount of the item after the drop
			ensure(!(Item->GetQuantity() - RemoveQuantity < 0));

			//We now have zero of this item, remove it from the inventory
			Item->SetQuantity(Item->GetQuantity() - RemoveQuantity);

			if (Item->GetQuantity() <= 0)
			{
				RemoveItem(Item);
			}

			OnItemRemoved.Broadcast(Item, RemoveQuantity);

			return RemoveQuantity;
		}
	}

	return 0;
}

bool UNarrativeInventoryComponent::RemoveItem(class UNarrativeItem* Item)
{
	if (Item && Item->CanBeRemoved())
	{
		if (GetOwnerRole() < ROLE_Authority)
		{
			ServerRemoveItem(Item);
			return false;
		}

		if (GetOwner() && GetOwner()->HasAuthority())
		{
			if (Item)
			{
				Item->RemovedFromInventory(this);

				Items.RemoveSingle(Item);

				//Consume item will have called this delegate, if we've called RemoveItem we need to call it 
				if (Item->GetQuantity() != 0)
				{
					OnItemRemoved.Broadcast(Item, Item->GetQuantity());
				}

				OnRep_Items(Items);

				ReplicatedItemsKey++;

				return true;
			}
		}

	}

	return false;
}

bool UNarrativeInventoryComponent::HasItem(TSoftClassPtr<class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/, const bool bCheckVisibility/*= false*/) const
{
	if (!ItemClass.IsNull())
	{	
		//Todo re-write this, it needs to iterate the inventory and find all items with quantity 
		if (UNarrativeItem* ItemToFind = FindItemByClass(ItemClass))
		{
			return true;
		}
		else
		{
			return false;
		}
		//if (UNarrativeItem* ItemCDO = ItemClass->GetDefaultObject<UNarrativeItem>())
		//{
		//	if (ItemCDO->bStackable)
		//	{
		//		//if the item is stackable we can just check the stack quantity
		//		if (UNarrativeItem* ItemToFind = FindItemByClass(ItemClass))
		//		{
		//			if (!bCheckVisibility || ItemToFind->ShouldShowInInventory())
		//			{
		//				return ItemToFind->GetQuantity() >= Quantity;
		//			}
		//		}
		//	}//For non stackable items get all of them and check quantity	
		//	else return FindItemsOfClass(ItemClass, bCheckVisibility).Num() >= Quantity;
		//}
	}

	return false;
}

bool UNarrativeInventoryComponent::AllowLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf<class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText)  const
{
	/**In order to prevent cheating, we'll generally assume that in a multiplayer game, you'd never want to let players loot
	from another active players inventory. Even if we're looting someones corpse, thats probably a corpse actor you'd be looting from,
	not our actual player state. */
	if (Taker)
	{
		const bool bTakerHasSpace = Taker->GetSpaceForItem(ItemClass, ErrorText) >= Quantity;
		const bool bShopHasItem = HasItem(TSoftClassPtr<UNarrativeItem>(ItemClass), Quantity);

		if (!bTakerHasSpace)
		{
			ErrorText = LOCTEXT("AllowLootItem_NotEnoughSpace", "You don't have enough space to carry this item. ");
		}
		else if (!bShopHasItem)
		{
			ErrorText = LOCTEXT("AllowLootItem_ShopHasItem", "There isn't enough of the item to take! ");
		}

		//If we're a vendor, need to check we have money 
		const bool bTheyHaveCurrency = !bIsVendor || Taker->GetCurrency() >= GetSellPrice(ItemClass, Quantity);

		if (!bTheyHaveCurrency)
		{
			ErrorText = LOCTEXT("AllowLootItem_NotEnoughMoney", "You don't have enough money to complete this trade.");
		}

		return bTakerHasSpace && bShopHasItem && bTheyHaveCurrency;
	}

	return false;
}

bool UNarrativeInventoryComponent::AllowStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity, FText& ErrorText) const
{
	if (Storer)
	{
		const bool bWeHaveSpace = GetSpaceForItem(ItemClass, ErrorText) >= Quantity;
		const bool bStorerHasItem = Storer->HasItem(TSoftClassPtr<UNarrativeItem>(ItemClass), Quantity);

		if (!bWeHaveSpace)
		{
			ErrorText = LOCTEXT("AllowStoreItem_WeHaveSpace", "You don't have enough space to carry this item. ");
		}
		else if (!bStorerHasItem)
		{
			//ErrorText = LOCTEXT("AllowLootItem_SellerHasItem", "You no longer have the item in your inventory.");
		}

		const bool bWeHaveCurrency = !bIsVendor || GetCurrency() >= GetBuyPrice(ItemClass, Quantity);

		if (!bWeHaveCurrency)
		{
			ErrorText = LOCTEXT("AllowStoreItem_NotEnoughMoney", "The shop doesn't have enough money to complete the trade.");
		}

		return bWeHaveSpace && bStorerHasItem && bWeHaveCurrency;
	}

	return false;
}

FItemAddResult UNarrativeInventoryComponent::PerformLootItem(class UNarrativeInventoryComponent* Taker, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/)
{
	if (Taker)
	{
		//Give the item to the looter
		const FItemAddResult AddResult = Taker->TryAddItemFromClass(ItemClass, Quantity);

		//However many we gave, take them from our inventory 
		if (AddResult.AmountGiven > 0)
		{
			if (UNarrativeItem* Item = FindItemByClass(TSoftClassPtr<UNarrativeItem>(ItemClass)))
			{
				//However much of the item we looted, remove from the loot source
				ConsumeItem(Item, AddResult.AmountGiven);
			}

			if (bIsVendor && Taker)
			{
				const int32 TransactionPrice = GetSellPrice(ItemClass, AddResult.AmountGiven);

				//We sold an item, need to remove cash from taker and store in our inventory 
				Taker->AddCurrency(-TransactionPrice);
				AddCurrency(TransactionPrice);
			}
		}

		return AddResult;
	}

	return FItemAddResult::AddedNone(0, FText::GetEmpty());
}

FItemAddResult UNarrativeInventoryComponent::PerformStoreItem(class UNarrativeInventoryComponent* Storer, TSubclassOf <class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/)
{
	if (Storer)
	{
		//Store the item in our inventory
		const FItemAddResult AddResult = TryAddItemFromClass(ItemClass, Quantity);

		if (AddResult.AmountGiven > 0)
		{
			if (UNarrativeItem* Item = Storer->FindItemByClass(TSoftClassPtr<UNarrativeItem>(ItemClass)))
			{
				//However much of the item we managed to store, remove from the storers inventory
				Storer->ConsumeItem(Item, AddResult.AmountGiven);
			}

			if (bIsVendor && Storer)
			{
				const int32 TransactionPrice = GetBuyPrice(ItemClass, AddResult.AmountGiven);

				//We sold an item, need to remove cash from taker and store in our inventory 
				Storer->AddCurrency(TransactionPrice);
				AddCurrency(-TransactionPrice);
			}
		}



		return AddResult;
	}

	return FItemAddResult::AddedNone(0, FText::GetEmpty());
}

UNarrativeItem* UNarrativeInventoryComponent::FindItemByClass(TSoftClassPtr<class UNarrativeItem> ItemClass, const bool bCheckVisibility/*= false*/) const
{
	for (auto& InvItem : Items)
	{
		//Find item by class checks for an exact class match instead of child of
		if (InvItem && (!bCheckVisibility || InvItem->ShouldShowInInventory()) && InvItem->GetClass() == ItemClass)
		{
			return InvItem;
		}
	}
	return nullptr;
}

TArray<UNarrativeItem*> UNarrativeInventoryComponent::FindItemsOfClass(TSubclassOf<class UNarrativeItem> ItemClass, const bool bCheckVisibility/*= false*/) const
{
	TArray<UNarrativeItem*> ItemsOfClass;

	for (auto& InvItem : Items)
	{
		if (InvItem && (!bCheckVisibility || InvItem->ShouldShowInInventory()) && InvItem->GetClass()->IsChildOf(ItemClass))
		{
			ItemsOfClass.Add(InvItem);
		}
	}

	return ItemsOfClass;
}

int32 UNarrativeInventoryComponent::GetSpaceForItem(TSubclassOf<class UNarrativeItem> ItemClass, FText& NoSpaceReason) const 
{
	if (!IsValid(ItemClass))
	{
		return 0;
	}

	//Figure out how many of a given item we can add 
	if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(ItemClass))
	{

		if (Items.Num() >= GetCapacity())
		{
			NoSpaceReason = LOCTEXT("NoSpaceReason_CapacitySpace", "You don't have any inventory slots left for this item.");
			return 0;
		}

		const int32 MaxStackSize = ItemCDO->bStackable ? ItemCDO->MaxStackSize : 1;
		int32 ExistingStackSize = 0;

		//Check if we already have the item or not
		if (UNarrativeItem* ExistingItem = FindItemByClass(TSoftClassPtr<UNarrativeItem>(ItemClass)))
		{
			ExistingStackSize = ExistingItem->GetQuantity();
		}
		
		const int32 WeightSpace = FMath::IsNearlyZero(ItemCDO->Weight) ? INT_MAX : FMath::FloorToInt((WeightCapacity - GetCurrentWeight()) / ItemCDO->Weight);
		const int32 CapacitySpace = ((Capacity - Items.Num()) * MaxStackSize) + (MaxStackSize - ExistingStackSize);

		if (WeightSpace < CapacitySpace)
		{
			if (WeightSpace <= 0)
			{
				NoSpaceReason = LOCTEXT("NoSpaceReason_WeightFull", "You're carrying too much weight.");
			}

			return WeightSpace;
		}

		if (CapacitySpace <= 0)
		{
			NoSpaceReason = LOCTEXT("NoSpaceReason_CapacitySpace", "You don't have any inventory slots left for this item.");
		}

		return CapacitySpace;
	}

	return 0;
}

int32 UNarrativeInventoryComponent::GetCurrency() const
{
	return Currency;
}

void UNarrativeInventoryComponent::AddCurrency(const int32 Amount)
{
	if (GetOwnerRole() >= ROLE_Authority && Amount != 0)
	{
		SetCurrency(GetCurrency() + Amount);
	}
}

void UNarrativeInventoryComponent::SetCurrency(const int32 Amount)
{
	if (GetOwnerRole() >= ROLE_Authority && Amount >= 0)
	{
		int32 OldCurrency = Currency;
		Currency = Amount;
		OnRep_Currency(OldCurrency);
	}
}

float UNarrativeInventoryComponent::GetCurrentWeight() const
{
	float Weight = 0.f;

	for (auto& Item : Items)
	{
		if (Item)
		{
			Weight += Item->GetStackWeight();
		}
	}

	return Weight;
}

void UNarrativeInventoryComponent::SetWeightCapacity(const float NewWeightCapacity)
{
	WeightCapacity = NewWeightCapacity;
	OnInventoryUpdated.Broadcast();
}

void UNarrativeInventoryComponent::SetCapacity(const int32 NewCapacity)
{
	Capacity = NewCapacity;
	OnInventoryUpdated.Broadcast();
}

void UNarrativeInventoryComponent::SetInventoryFriendlyName(const FText& Name)
{
	InventoryFriendlyName = Name;
}

void UNarrativeInventoryComponent::SetIsVendor(const bool bNewIsVendor)
{
	bIsVendor = bNewIsVendor;
}

APawn* UNarrativeInventoryComponent::GetOwningPawn() const
{
	if (OwnerPC)
	{
		return OwnerPC->GetPawn();
	}
	
	if (APlayerState* OwningPS = Cast<APlayerState>(GetOwner()))
	{
		return OwningPS->GetPawn();
	}

	if (APawn* OwningPawn = Cast<APawn>(GetOwner()))
	{
		return OwningPawn;
	}

	if (APlayerController* OwningController = Cast<APlayerController>(GetOwner()))
	{
		return OwningController->GetPawn();
	}

	return nullptr;
}

APlayerController* UNarrativeInventoryComponent::GetOwningController() const
{
	//We cache this on beginplay as to not re-find it every time 
	if (OwnerPC)
	{
		return OwnerPC;
	}

	APlayerController* OwningController = Cast<APlayerController>(GetOwner());
	APawn* OwningPawn = Cast<APawn>(GetOwner());
	APlayerState* OwningPS = Cast<APlayerState>(GetOwner());

	if (OwningController)
	{
		return OwningController;
	}

	if (!OwningController && OwningPawn)
	{
		return Cast<APlayerController>(OwningPawn->GetController());
	}

	if (OwningPS)
	{
		return OwningPS->GetPlayerController();
	}

	return nullptr;
}

void UNarrativeInventoryComponent::ClientRefreshInventory_Implementation()
{
	OnInventoryUpdated.Broadcast();
}

void UNarrativeInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerPC = GetOwningController();
}

void UNarrativeInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UNarrativeInventoryComponent, Items);
	DOREPLIFETIME(UNarrativeInventoryComponent, Currency);

	//If your game requires players to know if other players are looting you can remove 
	DOREPLIFETIME_CONDITION(UNarrativeInventoryComponent, LootSource, COND_OwnerOnly);

	//If your game requires players to know if other players are looting you can uncomment this
	//DOREPLIFETIME_CONDITION(UNarrativeInventoryComponent, LootSource, COND_None);
}

bool UNarrativeInventoryComponent::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	//Check if the array of items needs to replicate
	if (Channel->KeyNeedsToReplicate(0, ReplicatedItemsKey))
	{
		for (auto& Item : Items)
		{
			if (Channel->KeyNeedsToReplicate(Item->GetUniqueID(), Item->RepKey))
			{
				bWroteSomething |= Channel->ReplicateSubobject(Item, *Bunch, *RepFlags);
			}
		}
	}

	return bWroteSomething;
}

UNarrativeItem* UNarrativeInventoryComponent::AddItem(TSubclassOf<class UNarrativeItem> ItemClass, const int32 Quantity)
{
	if (Quantity > 0 && GetOwner() && GetOwner()->HasAuthority())
	{
		//Construct the item, initialize its values, and call all the relevant functions for replication etc
		//UNarrativeItem* NewItem = NewObject<UNarrativeItem>(GetOwner(), Item->GetClass());
		UNarrativeItem* NewItem = NewObject<UNarrativeItem>(GetOwner(), ItemClass);
		NewItem->World = GetWorld();
		NewItem->OwningInventory = this;

		NewItem->SetQuantity(Quantity);

		Items.Add(NewItem);

		NewItem->AddedToInventory(this);
		NewItem->MarkDirtyForReplication();
		OnRep_Items(Items);

		return NewItem;
	}

	return nullptr;
}

void UNarrativeInventoryComponent::OnRep_Items(const TArray<class UNarrativeItem*>& OldItems)
{
	OnInventoryUpdated.Broadcast();

	for (auto& Item : Items)
	{
		if (Item)
		{
			//Any items without a world set have been added
			if (!Item->World)
			{
				Item->World = GetWorld();
				Item->OwningInventory = this;

				//New active items won't have had their OnRep called, we need to call it
				if (Item->bActive)
				{
					Item->OnRep_bActive(false);
				}
			}
		}
	}
}

void UNarrativeInventoryComponent::OnRep_Currency(const int32 OldCurrency)
{
	OnCurrencyChanged.Broadcast(OldCurrency, Currency);
}

void UNarrativeInventoryComponent::OnRep_LootSource(class UNarrativeInventoryComponent* OldLootSource)
{
	if (LootSource)
	{
		OnBeginLooting.Broadcast(LootSource);
	}
	else
	{
		OnEndLooting.Broadcast();
	}
}

FItemAddResult UNarrativeInventoryComponent::TryAddItem_Internal(TSubclassOf<class UNarrativeItem> ItemClass, const int32 Quantity /*= 1*/)
{
	if (GetOwner() && GetOwner()->HasAuthority() && IsValid(ItemClass))
	{
		if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(ItemClass))
		{
			FText ErrorText;
			const int32 NeedAddAmount = FMath::Min(Quantity, GetSpaceForItem(ItemClass, ErrorText));
			int32 LeftToAdd = NeedAddAmount;

			FItemAddResult AddResult;
			AddResult.ItemClass = ItemClass;
			AddResult.ErrorText = ErrorText;
			AddResult.AmountToGive = Quantity;
			AddResult.AmountGiven = NeedAddAmount; // GetSpaceForItem will ensure we add this amount 

			if (LeftToAdd <= 0)
			{
				return AddResult;
			}

			//Top up any existing stacks with the add amount, stopping if we ran out of items to give 
			for (auto& Stack : FindItemsOfClass(ItemClass))
			{
				const int32 StackSpace = Stack->GetStackSpace();

				if (StackSpace > 0)
				{
					const int32 OldQuantity = Stack->GetQuantity();
					Stack->SetQuantity(Stack->GetQuantity() + LeftToAdd);

					//subtract the amount we added
					const int32 AmountGiven = Stack->GetQuantity() - OldQuantity;
					//UE_LOG(LogTemp, Warning, TEXT("Adding %s adding %d to existing stack"), *ItemCDO->DisplayName.ToString(), AmountGiven);
					LeftToAdd -= AmountGiven;

					AddResult.Stacks.Add(Stack);
				}

				//Paranoia check - if LeftToAdd went negative we probably gave more items than we were supposed to 
				check(LeftToAdd >= 0);

				if (LeftToAdd <= 0)
				{
					return AddResult;
				}
			}

			//UE_LOG(LogTemp, Warning, TEXT("Initially needed %d, now we still have %d left to add. "), *ItemCDO->DisplayName.ToString(), NeedAddAmount, LeftToAdd);

			//We essentially figure out how many full stacks we need to add, and how many leftover we have 
			const int32 MaxStackSize = ItemCDO->GetMaxStackSize();
			const int32 FullStacksToAdd = FMath::FloorToInt((double)LeftToAdd / (double)MaxStackSize);
			int32 Remainder = LeftToAdd % MaxStackSize;

			//FString RoleString = HasAuthority() ? "Server" : "Client";
			//UE_LOG(LogTemp, Warning, TEXT("Adding %s, Max Size: %d, StacksToAdd: %d, Remainder: %d, Add amount: %d"), *ItemCDO->DisplayName.ToString(), MaxStackSize, FullStacksToAdd, Remainder, LeftToAdd);

			//Create any new required stacks 
			for(int32 i = 0; i < FullStacksToAdd; ++i)
			{
				if (UNarrativeItem* NewItem = AddItem(ItemClass, MaxStackSize))
				{
					AddResult.Stacks.Add(NewItem);
				}
			}

			//Add the remainder first
			if (Remainder > 0)
			{
				if (UNarrativeItem* NewItem = AddItem(ItemClass, Remainder))
				{
					AddResult.Stacks.Add(NewItem);
				}
			}

			return AddResult;
		}
	}

	//AddItem should never be called on a client
	return FItemAddResult::AddedNone(-1, LOCTEXT("ErrorMessage", ""));

}


void UNarrativeInventoryComponent::GiveDefaultItems()
{
	if (!bGaveDefaultItems && GetOwnerRole() >= ROLE_Authority)
	{
		TArray<FItemAddResult> Results;

		/**TODO. This will cause a pretty big hitch because we're using LoadSyncronous on the items. We instead are going to want 
		to modify TryAddFromLootTable to instead async load all the item soft refs and callback when they are ready to be added. */
		for (auto& DefaultItemTable : DefaultItemTables)
		{
			TryAddFromLootTable(DefaultItemTable, Results);
		}

		//This is marked SaveGame, ensuring inventories are granted their items only once ever, even across multiple sessions. 
		bGaveDefaultItems = true;
	}
}

void UNarrativeInventoryComponent::ServerRemoveItem_Implementation(class UNarrativeItem* Item)
{
	if (Item)
	{
		RemoveItem(Item);
	}
}

void UNarrativeInventoryComponent::ServerConsumeItem_Implementation(class UNarrativeItem* Item, const int32 Quantity)
{
	if (Item)
	{
		ConsumeItem(Item, Quantity);
	}
}

void UNarrativeInventoryComponent::ServerUseItem_Implementation(class UNarrativeItem* Item)
{
	UseItem(Item);
}

void UNarrativeInventoryComponent::ServerStopLooting_Implementation()
{
	StopLooting();
}

void UNarrativeInventoryComponent::StopLooting()
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerStopLooting();
	}

	SetLootSource(nullptr);
}

bool UNarrativeInventoryComponent::RequestLootItem(class UNarrativeItem* ItemToLoot, FText& ErrorText, const int32 Quantity /*= 1*/)
{
	if (LootSource && ItemToLoot && ItemToLoot->CanBeRemoved())
	{
		if (LootSource && LootSource->AllowLootItem(this, ItemToLoot->GetClass(), Quantity, ErrorText))
		{
			if (GetOwnerRole() < ROLE_Authority)
			{
				ServerRequestLootItem(ItemToLoot, Quantity);
				return true;
			}

 			LootSource->PerformLootItem(this, ItemToLoot->GetClass(), Quantity);
			return true;
		}

	}
	return false;
}

void UNarrativeInventoryComponent::ServerRequestLootItem_Implementation(class UNarrativeItem* ItemToLoot, const int32 Quantity)
{
	FText DummyText;
	RequestLootItem(ItemToLoot, DummyText, Quantity);
}

bool UNarrativeInventoryComponent::RequestStoreItem(class UNarrativeItem* ItemToStore, FText& ErrorText, const int32 Quantity /*= 1*/)
{
	if (ItemToStore && ItemToStore->CanBeRemoved())
	{
		if (LootSource && LootSource->AllowStoreItem(this, ItemToStore->GetClass(), Quantity, ErrorText))
		{
			if (GetOwnerRole() < ROLE_Authority)
			{
				ServerRequestStoreItem(ItemToStore, Quantity);
				return true;
			}

			LootSource->PerformStoreItem(this, ItemToStore->GetClass(), Quantity);
			return true;
		}
	}
	return false;
}

void UNarrativeInventoryComponent::ServerRequestStoreItem_Implementation(class UNarrativeItem* ItemToLoot, const int32 Quantity)
{
	FText DummyText;
	RequestStoreItem(ItemToLoot, DummyText, Quantity);
}

int32 UNarrativeInventoryComponent::GetBuyPrice_Implementation(TSubclassOf<class UNarrativeItem> Item, int32 Quantity /*= 1*/) const
{
	if (IsValid(Item))
	{
		if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(Item))
		{
			return FMath::CeilToInt((ItemCDO->BaseValue * BuyItemPct) * Quantity);
		}
	}
	return 0;
}

int32 UNarrativeInventoryComponent::GetSellPrice_Implementation(TSubclassOf<class UNarrativeItem> Item, int32 Quantity /*= 1*/) const
{
	if (IsValid(Item))
	{
		if (const UNarrativeItem* ItemCDO = GetDefault<UNarrativeItem>(Item))
		{
			return FMath::CeilToInt((ItemCDO->BaseValue * SellItemPct) * Quantity);
		}
	}

	return INT_MAX;
}

void UNarrativeInventoryComponent::SetLootSource(class UNarrativeInventoryComponent* NewLootSource)
{
	if (GetOwnerRole() >= ROLE_Authority)
	{
		if (LootSource != NewLootSource)
		{
			UNarrativeInventoryComponent* OldSource = LootSource;
			LootSource = NewLootSource;
			OnRep_LootSource(OldSource);
		}
	}
}

UItemCollection::UItemCollection(const FObjectInitializer& ObjectInitializer)
{

}


#undef LOCTEXT_NAMESPACE