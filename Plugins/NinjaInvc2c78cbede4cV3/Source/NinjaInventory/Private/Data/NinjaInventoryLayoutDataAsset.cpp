// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaInventoryLayoutDataAsset.h"

#include "GameplayTagContainer.h"
#include "NinjaInventoryTags.h"

UNinjaInventoryLayoutDataAsset::UNinjaInventoryLayoutDataAsset()
{
	DisplayName = NSLOCTEXT("LayoutData", "InventoryTitle", "Inventory");
	
	DefaultContainerQuery.Build(FGameplayTagQueryExpression()
		.AllTagsMatch()
			.AddTag(Tag_Inventory_Container_Default)
			, TEXT("Selects all default containers in the inventory."));	
}
