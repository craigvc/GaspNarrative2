// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NinjaInventoryLootSource.generated.h"

class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;

/**
 * A source of loot available to the Loot Manager.
 */
UCLASS(Abstract, Blueprintable, BlueprintType, DefaultToInstanced)
class NINJAINVENTORY_API UNinjaInventoryLootSource : public UObject
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Selects all lootable items from this inventory, applying their selectors.
	 *
	 * @param LootComponent		Component that is selecting loot for a requester.
	 * @param Requester			Inventory Manager requesting the loot.
	 * @param CurrentBudget		Current budget available for this operation.
	 * @param CurrentLoot		Current loot already selected for this operation.
	 * @param ConsumedBudget	Budget that has been consumed by this operation.
	 * @param SelectedLoot		Loot that was selected by this operation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Source")
	void SelectLoot(UNinjaInventoryLootComponent* LootComponent, UNinjaInventoryManagerComponent* Requester, float CurrentBudget,
		const TArray<UNinjaInventoryLoot*>& CurrentLoot, float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot);

};
