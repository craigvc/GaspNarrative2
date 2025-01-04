// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Loot.h"

#include "NinjaInventoryGameplayTags.h"
#include "GameFramework/NinjaInventoryLootSelector.h"

UItemFragment_Loot::UItemFragment_Loot()
{
	bShouldDropFullStack = true;
	bOverridesLootSelector = false;
	DropChance = 0.5;
	QuantityRange = FVector2D::One();
	ItemTags.AddTag(Tag_Inventory_Item_Trait_Lootable);
	OverrideSelectorClass = UNinjaInventoryLootSelector::StaticClass();
}

bool UItemFragment_Loot::ShouldDropFullStack() const
{
	return bShouldDropFullStack;
}

float UItemFragment_Loot::GetDropChance() const
{
	return DropChance;
}

FVector2D UItemFragment_Loot::GetQuantityRange() const
{
	return QuantityRange;
}

TSubclassOf<UNinjaInventoryLootSelector> UItemFragment_Loot::GetLootSelectorOverride() const
{
	if (bOverridesLootSelector)
	{
		return OverrideSelectorClass;
	}

	return nullptr;
}
