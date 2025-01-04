// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryItemDropRequest.h"

#include "Components/NinjaInventoryManagerComponent.h"

bool FInventoryItemDropRequest::HasValidData() const
{
	return IsValid(InventoryManager)
		&& !ItemInstances.IsEmpty();
}
