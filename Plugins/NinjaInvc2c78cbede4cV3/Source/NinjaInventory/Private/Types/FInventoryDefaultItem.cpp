// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryDefaultItem.h"

FInventoryDefaultItem::FInventoryDefaultItem()
{
	ItemData = nullptr;
}

bool FInventoryDefaultItem::operator==(const FInventoryDefaultItem& Other) const
{
	return ItemData == Other.ItemData;
}

bool FInventoryDefaultItem::operator!=(const FInventoryDefaultItem& Other) const
{
	return ItemData != Other.ItemData;
}
