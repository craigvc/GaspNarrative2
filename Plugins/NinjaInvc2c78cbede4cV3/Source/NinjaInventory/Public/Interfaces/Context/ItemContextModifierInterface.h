// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemContextModifierInterface.generated.h"

struct FInventoryItemContext;
class UNinjaInventoryManagerComponent;

UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UItemContextModifierInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for items that can modified their initial context.
 */
class NINJAINVENTORY_API IItemContextModifierInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Modifies an item request as necessary, creating new instances and updating default memories.
	 *
	 * @param ItemContext
	 *		Context being modified. It must provide a valid Inventory Manager.
	 */
	virtual void ModifyItemRequest(FInventoryItemContext& ItemContext) const = 0;
	
};