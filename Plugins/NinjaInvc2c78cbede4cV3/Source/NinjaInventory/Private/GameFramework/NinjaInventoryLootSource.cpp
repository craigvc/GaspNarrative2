// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryLootSource.h"

void UNinjaInventoryLootSource::SelectLoot_Implementation(UNinjaInventoryLootComponent* LootComponent,
	UNinjaInventoryManagerComponent* Requester, float CurrentBudget, const TArray<UNinjaInventoryLoot*>& CurrentLoot,
	float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot)
{
	ConsumedBudget = 0;
	SelectedLoot.Empty();
}
