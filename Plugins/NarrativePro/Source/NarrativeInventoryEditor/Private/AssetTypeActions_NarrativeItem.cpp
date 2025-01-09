// Copyright Narrative Tools 2022. 

#include "AssetTypeActions_NarrativeItem.h"
#include "NarrativeItem.h"
#include <Factories/BlueprintFactory.h>
#include "NarrativeItemBlueprint.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_NarrativeItem"

FAssetTypeActions_NarrativeItem::FAssetTypeActions_NarrativeItem(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

UClass* FAssetTypeActions_NarrativeItem::GetSupportedClass() const
{
	return UNarrativeItemBlueprint::StaticClass();
}

uint32 FAssetTypeActions_NarrativeItem::GetCategories()
{
	return Category;
}

const TArray<FText>& FAssetTypeActions_NarrativeItem::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("NarrativeItemsSubMenu", "Narrative Items"),
	};

	return SubMenus;
}

#undef LOCTEXT_NAMESPACE 