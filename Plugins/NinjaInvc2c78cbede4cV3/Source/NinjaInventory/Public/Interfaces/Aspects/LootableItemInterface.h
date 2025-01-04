// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootableItemInterface.generated.h"

struct FInventorySelectedLoot;

class UNinjaInventoryLootSelector;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class ULootableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be looted.
 */
class NINJAINVENTORY_API ILootableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the drop chance for this item.
	 */
	virtual float GetDropChance() const = 0;

	/**
	 * Provides the amount range for this item.
	 */
	virtual FVector2D GetQuantityRange() const = 0;

	/**
	 * Informs if this item should be always dropped as a full stack.
	 */
	virtual bool ShouldDropFullStack() const = 0;
	
	/**
	 * Provides the Loot Selector overriding the default one, if any.
	 */
	virtual TSubclassOf<UNinjaInventoryLootSelector> GetLootSelectorOverride() const = 0;

};

