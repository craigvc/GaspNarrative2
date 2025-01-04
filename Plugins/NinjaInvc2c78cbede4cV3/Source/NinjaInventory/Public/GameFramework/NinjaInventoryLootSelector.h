// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NinjaInventoryLootSelector.generated.h"

class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;
class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UNinjaInventorySubsystem;

/**
 * Loot Selector that rolls using single probability.
 */
UCLASS(Blueprintable, BlueprintType, DisplayName = "Single Probability")
class NINJAINVENTORY_API UNinjaInventoryLootSelector : public UObject
{
	
	GENERATED_BODY()

public:

	/**
	 * Checks if an item has dropped, based on the drop chance.
	 *
	 * Usually the drop chance can be retrieved by the Loot Fragment or the related Lootable Item interface.
	 * Other means can be used instead, such as evaluating the need for a player to receive a health potion.
	 *
	 * You can also access the ongoing list of selected loot, in case that should influence the current
	 * roll (forcing it to be true or false), in case another item was already selected (or not).
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Selector")
	bool RollItem(const UNinjaInventoryManagerComponent* Requester, float DropChance,
		const TArray<UNinjaInventoryLoot*>& SelectedLoot) const;

	/**
	 * Checks how many items will be obtained.
	 *
	 * By default, it should consider the current stack against the drop range defined by the Loot Fragment.
	 * But once again, other checks might be used, such as a world modifier to determine more or less items.
	 *
	 * You can also access the ongoing list of selected loot, in case that should influence the current
	 * quantity selection process, for example, you can add fewer items if another item was already granted.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Loot Selector")
	int32 RollQuantity(const UNinjaInventoryManagerComponent* Requester, FVector2D QuantityRange,
		const TArray<UNinjaInventoryLoot*>& SelectedLoot) const;
	
protected:

	/**
	 * Provides the current stack for an item.
	 *
	 * If the item does not have a Stack Fragment, then a value of one is considered.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot Selector")
	virtual int32 GetStackSize(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Provides the Inventory Subsystem for this class.
	 *
	 * @param World				World reference to use. This is always checked.
	 * @param bChecked			If true, checks if the subsystem was found with an assertion.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Loot Selector")
	static UNinjaInventorySubsystem* GetInventorySubsystem(const UWorld* World, bool bChecked = false);

};
