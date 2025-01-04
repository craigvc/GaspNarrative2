// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventorySettings.h"

#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryLootSelector.h"

UNinjaInventorySettings::UNinjaInventorySettings()
{
	bAutomaticallyMergeNewItems = true;
	bPerformStrictStackChecks = false;
	bGroupDroppedItemInstances = true;
	DefaultContainerInstance = UNinjaInventoryContainer::StaticClass();
	DefaultItemInstance = UNinjaInventoryItem::StaticClass();
	DefaultLootSelector = UNinjaInventoryLootSelector::StaticClass();
}
