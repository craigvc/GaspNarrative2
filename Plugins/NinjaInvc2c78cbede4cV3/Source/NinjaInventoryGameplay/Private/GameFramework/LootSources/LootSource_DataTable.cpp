// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/LootSources/LootSource_DataTable.h"

#include "Components/NinjaInventoryLootComponent.h"
#include "Engine/DataTable.h"
#include "GameFramework/NinjaInventoryLootSelector.h"

void ULootSource_DataTable::SelectLoot_Implementation(UNinjaInventoryLootComponent* LootComponent, UNinjaInventoryManagerComponent* Requester, const float CurrentBudget,
	const TArray<UNinjaInventoryLoot*>& CurrentLoot, float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot)
{
	ConsumedBudget = 0;
	SelectedLoot.Reset();
	
	if (CurrentBudget == 0)
	{
		return;
	}
	
	if (!IsValid(LootTable))
	{
		return;
	}

	const UNinjaInventoryLootSelector* LootSelector = LootComponent->GetDefaultLootSelector();
	if (!IsValid(LootSelector))
	{
		return;
	}

}
