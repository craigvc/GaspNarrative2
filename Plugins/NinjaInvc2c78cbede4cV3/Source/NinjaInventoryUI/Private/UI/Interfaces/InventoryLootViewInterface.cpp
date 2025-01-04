// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Interfaces/InventoryLootViewInterface.h"

bool IInventoryLootViewInterface::HasLoot_Implementation() const
{
	const UObject* SelfObject = Cast<UObject>(this);
	return Execute_GetLoot(SelfObject) != nullptr;
}