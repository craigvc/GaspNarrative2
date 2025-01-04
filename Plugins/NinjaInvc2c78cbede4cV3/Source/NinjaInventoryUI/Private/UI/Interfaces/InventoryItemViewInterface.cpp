// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Interfaces/InventoryItemViewInterface.h"

bool IInventoryItemViewInterface::HasItem_Implementation() const
{
	const UObject* SelfObject = Cast<UObject>(this);
	return Execute_GetItem(SelfObject) != nullptr;
}

bool IInventoryItemViewInterface::CompareItem_Implementation(UNinjaInventoryItem* OtherItem) const
{
	const UObject* SelfObject = Cast<UObject>(this);
	const UNinjaInventoryItem* ItemInstance = Execute_GetItem(SelfObject);
	return ItemInstance == OtherItem;
}
