// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaInventoryLootComponent.h"

#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "NinjaInventorySettings.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryLoot.h"
#include "GameFramework/LootCaches/LootCache_None.h"
#include "Interfaces/Aspects/LootableItemInterface.h"

UNinjaInventoryLootComponent::UNinjaInventoryLootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bShouldRemoveLootFromInventory = true;
	LootCacheClass = ULootCache_None::StaticClass();
}

void UNinjaInventoryLootComponent::BeginPlay()
{
	Super::BeginPlay();
	InitializeLootCache();
}

void UNinjaInventoryLootComponent::InitializeLootCache()
{
	if (!IsValid(LootCacheClass))
	{
		// Make sure we have a loot cache, even if it's "none".
		LootCacheClass = ULootCache_None::StaticClass();
	}

	check(LootCacheClass->ImplementsInterface(UInventoryLootCacheInterface::StaticClass()));
	LootCache = NewObject<UObject>(GetOuter(), LootCacheClass);
}

void UNinjaInventoryLootComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	LootCache = nullptr;
	Super::EndPlay(EndPlayReason);
}

TScriptInterface<IInventoryLootCacheInterface> UNinjaInventoryLootComponent::GetLootCache() const
{
	TScriptInterface<IInventoryLootCacheInterface> LootScript;
	LootScript.SetInterface(Cast<IInventoryLootCacheInterface>(LootCache));
	LootScript.SetObject(LootCache);
	return LootScript;
}

void UNinjaInventoryLootComponent::PerformLootRolls(UNinjaInventoryManagerComponent* Requester,
	UNinjaInventoryItem* Item, const UNinjaInventoryLootSelector* DefaultSelector,
	const TArray<UNinjaInventoryLoot*>& SelectedLoot, bool& bOutDropped, int32& OutQuantity)
{
	const UNinjaInventoryLootSelector* Selector = DefaultSelector;
	FVector2D QuantityRange = FVector2D::ZeroVector;
	
	const TScriptInterface<ILootableItemInterface> Lootable = UNinjaInventoryFunctionLibrary::GetLootableItemAspect(Item->GetData());
	if (Lootable.GetObject() != nullptr)
	{
		const TSubclassOf<UNinjaInventoryLootSelector> LootSelectorClass = Lootable->GetLootSelectorOverride();
		if (IsValid(LootSelectorClass))
		{
			Selector = GetDefault<UNinjaInventoryLootSelector>(LootSelectorClass);
			QuantityRange = Lootable->GetQuantityRange();
		}
	}

	if (IsValid(Selector))
	{
		INVENTORY_LOG_ARGS(Verbose, "Using Loot Selector %s for Item %s.", *GetNameSafe(Selector), *GetNameSafe(Item));
		bOutDropped = Selector->RollItem(Requester, Lootable->GetDropChance(), SelectedLoot);
		OutQuantity = Selector->RollQuantity(Requester, QuantityRange, SelectedLoot);
	}
	else
	{
		INVENTORY_LOG_ARGS(Verbose, "No Loot Selector found for %s.", *GetNameSafe(Item));
		bOutDropped = false;
		OutQuantity = 0;
	}
}

void UNinjaInventoryLootComponent::SelectLoot(UNinjaInventoryManagerComponent* Requester)
{
	if (!IsValid(Requester))
	{
		INVENTORY_LOG(Warning, "Invalid Inventory Manager requesting loot.");
		return;
	}
	
	if (OwnerHasAuthority())
	{
		Internal_SelectLootFromInventory(Requester);
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_SelectLoot(Requester);
	}
}

const UNinjaInventoryLootSelector* UNinjaInventoryLootComponent::GetDefaultLootSelector()
{
	const TSubclassOf<UNinjaInventoryLootSelector> LootSelectorClass = GetDefault<UNinjaInventorySettings>()->DefaultLootSelector;
	return GetDefault<UNinjaInventoryLootSelector>(LootSelectorClass);
}

void UNinjaInventoryLootComponent::Internal_SelectLootFromInventory(UNinjaInventoryManagerComponent* Requester)
{
	if (!IsValid(Requester))
	{
		return;
	}

	UNinjaInventoryManagerComponent* Inventory = UNinjaInventoryFunctionLibrary::GetInventoryManager(GetOwner());
	if (!IsValid(Inventory))
	{
		return;
	}

	const TScriptInterface<IInventoryLootCacheInterface> LootCacheAPI = GetLootCache();
	if (LootCacheAPI.GetObject() == nullptr)
	{
		return;
	}
	
	TArray<UNinjaInventoryLoot*> SelectedLoot;
	if (!LootCacheAPI->GetLootForRequester(Requester, SelectedLoot))
	{
		TArray<UNinjaInventoryItem*> Items = Inventory->GetLootableItems();
		const UNinjaInventoryLootSelector* LootSelector = GetDefaultLootSelector();
	
		SelectedLoot.Reserve(Items.Num());
		for (UNinjaInventoryItem* Item : Items)
		{
			bool bHasDropped; int32 Quantity;
			PerformLootRolls(Requester, Item, LootSelector, SelectedLoot, bHasDropped, Quantity);

			if (bHasDropped && Quantity > 0)
			{
				UNinjaInventoryLoot* NewLoot = NewObject<UNinjaInventoryLoot>(GetOuter());
				if (const UNinjaInventoryContainer* Container = Inventory->GetPrimaryContainerForItem(Item))
				{
					NewLoot->SetContainerData(Container->GetData());
				}
				
				NewLoot->SetSource(this);
				SelectedLoot.Add(NewLoot);

				if (bShouldRemoveLootFromInventory)
				{
					Inventory->RemoveItem(Item, Quantity);
				}
			}
		}

		SelectedLoot.Shrink();
		LootCacheAPI->CacheLootForRequester(Requester, SelectedLoot);
	}
	
	Requester->ReceiveLoot(this, SelectedLoot);
}

void UNinjaInventoryLootComponent::Server_SelectLoot_Implementation(UNinjaInventoryManagerComponent* Requester)
{
	SelectLoot(Requester);
}

bool UNinjaInventoryLootComponent::Server_SelectLoot_Validate(UNinjaInventoryManagerComponent* Requester)
{
	return true;
}