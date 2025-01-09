// Copyright Narrative Tools 2022. 

#include "AssetTypeActions_EquippableItem.h"
#include "EquippableItemBlueprint.h"
#include <Factories/BlueprintFactory.h>
#include "EquippableItemBlueprint.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_EquippableItem"

FAssetTypeActions_EquippableItem::FAssetTypeActions_EquippableItem(uint32 InAssetCategory) : Category(InAssetCategory)
{
	
}

UClass* FAssetTypeActions_EquippableItem::GetSupportedClass() const
{
	return UEquippableItemBlueprint::StaticClass();
}

uint32 FAssetTypeActions_EquippableItem::GetCategories()
{
	return Category;
}

const TArray<FText>& FAssetTypeActions_EquippableItem::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("NarrativeItemsSubMenu", "Narrative Items"),
	};

	return SubMenus;
}

FAssetTypeActions_ClothingItem::FAssetTypeActions_ClothingItem(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

UClass* FAssetTypeActions_ClothingItem::GetSupportedClass() const
{
	return UClothingItemBlueprint::StaticClass();
}

uint32 FAssetTypeActions_ClothingItem::GetCategories()
{
	return Category;
}

const TArray<FText>& FAssetTypeActions_ClothingItem::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("NarrativeItemsSubMenu", "Narrative Items"),
	};

	return SubMenus;
}


#undef LOCTEXT_NAMESPACE 