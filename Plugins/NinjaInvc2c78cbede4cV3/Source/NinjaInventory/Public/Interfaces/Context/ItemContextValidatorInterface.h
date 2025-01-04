// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemContextValidatorInterface.generated.h"

struct FInventoryItemContext;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UItemContextValidatorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can be validated before being added to an Inventory.
 */
class NINJAINVENTORY_API IItemContextValidatorInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Checks if an Inventory Item can be added to an Inventory Manager.
	 *
	 * @param ItemContext
	 *		Context being tested. It must provide a valid Inventory Manager.
	 */
	virtual bool CanAddToInventory(const FInventoryItemContext& ItemContext) const = 0;
	
};

