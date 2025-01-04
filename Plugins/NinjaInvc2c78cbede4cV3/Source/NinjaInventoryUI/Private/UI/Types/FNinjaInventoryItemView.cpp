// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Types/FNinjaInventoryItemView.h"

bool FNinjaInventoryItemView::IsValid() const
{
	return Item != nullptr
		&& Container != nullptr
		&& Position != INDEX_NONE;
}
