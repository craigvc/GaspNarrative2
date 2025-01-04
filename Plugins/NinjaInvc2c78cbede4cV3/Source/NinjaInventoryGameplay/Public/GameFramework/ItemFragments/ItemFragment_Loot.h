// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/LootableItemInterface.h"
#include "Templates/SubclassOf.h"
#include "ItemFragment_Loot.generated.h"

class UNinjaInventoryLootSelector;
class UNinjaInventoryManagerComponent;

/**
 * A fragment that specifies an item that can be looted.
 */
UCLASS(DisplayName = "Loot")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Loot : public UNinjaInventoryItemFragment, public ILootableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Cost to select this item in a loot table.
	 *
	 * Loot is collected until an Inventory Manager's Loot Budget is exhausted, which is a process
	 * that happens every time loot is requested (disregarding cached loot).
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	float LootCost;
	
	/** chance for this item to drop, in the [0, 1] range. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0, UIMax = 1, ClampMax = 1))
	float DropChance;

	/** If true, ignores a quantity range and always drops the full stack. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bShouldDropFullStack;
	
	/** A range of quantities to drop. The system limits these quantities considering the item's stack. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (EditCondition = "!bShouldDropFullStack"))
	FVector2D QuantityRange;

	/** Informs if there's a dedicated loot selector for this loot. */
	UPROPERTY(EditDefaultsOnly, Category = "Fragment", meta = (InlineEditConditionToggle))
	bool bOverridesLootSelector;
	
	/**
	 * Overrides the Selector used to decide if an item drops and the amount.
	 *
	 * This is an override to the default selector used by all classes, and it should be
	 * set only if this item has a special condition for when to drop. It can always extend
	 * the original conditions and add any specific ones needed.
	 *
	 * Some examples of when special selectors might be needed:
	 * 
	 * - Quest Items: requires a check on a Quest Manager
	 * - Class Specific: Loot that should only drop for certain classes.
	 * - Seasonal Items: requires a certain date range
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (EditCondition = "bOverridesLootSelector"))
	TSubclassOf<UNinjaInventoryLootSelector> OverrideSelectorClass;
	
	UItemFragment_Loot();

	// -- Begin Lootable implementation
	virtual bool ShouldDropFullStack() const override;
	virtual float GetDropChance() const override;
	virtual FVector2D GetQuantityRange() const override; 
	virtual TSubclassOf<UNinjaInventoryLootSelector> GetLootSelectorOverride() const override;
	// -- End Lootable implementation

};
