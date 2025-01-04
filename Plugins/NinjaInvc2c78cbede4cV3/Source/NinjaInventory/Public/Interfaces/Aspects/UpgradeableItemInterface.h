// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UpgradeableItemInterface.generated.h"

class UNinjaInventoryItem;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UUpgradeableItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be upgraded.
 */
class NINJAINVENTORY_API IUpgradeableItemInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Informs if this item can be upgraded.
	 */
	virtual bool CanUpgrade() const = 0;
	
	/**
	 * Provides the gear level for an item.
	 */
	virtual int32 GetLevel(const UNinjaInventoryItem* Item) const = 0;

	/**
	 * Overrides the level with an absolute value.
	 */
	virtual void SetLevel(UNinjaInventoryItem* Item, int32 NewLevel) = 0;

	/**
	 * Increments the level by a certain amount.
	 */
	virtual void Upgrade(UNinjaInventoryItem* Item, int32 Increment) = 0;
	
};

