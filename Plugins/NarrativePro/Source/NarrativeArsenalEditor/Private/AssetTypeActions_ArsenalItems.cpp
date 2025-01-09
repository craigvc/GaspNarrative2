// Copyright Narrative Tools 2022. 

#include "AssetTypeActions_ArsenalItems.h"
#include <Factories/BlueprintFactory.h>
#include "ArsenalBlueprints.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions_EquippableItem"

FAssetTypeActions_WeaponItem::FAssetTypeActions_WeaponItem(uint32 InAssetCategory) : Category(InAssetCategory)
{
	
}

UClass* FAssetTypeActions_WeaponItem::GetSupportedClass() const
{
	return UWeaponItemBlueprint::StaticClass();
}

uint32 FAssetTypeActions_WeaponItem::GetCategories()
{
	return Category;
}

const TArray<FText>& FAssetTypeActions_WeaponItem::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("NarrativeItemsSubMenu", "Narrative Items"),
	};

	return SubMenus;
}

FAssetTypeActions_GameplayEffectItem::FAssetTypeActions_GameplayEffectItem(uint32 InAssetCategory) : Category(InAssetCategory)
{

}

UClass* FAssetTypeActions_GameplayEffectItem::GetSupportedClass() const
{
	return UGameplayEffectItemBlueprint::StaticClass();
}

uint32 FAssetTypeActions_GameplayEffectItem::GetCategories()
{
	return Category;
}

const TArray<FText>& FAssetTypeActions_GameplayEffectItem::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("NarrativeItemsSubMenu", "Narrative Items"),
	};

	return SubMenus;
}


#undef LOCTEXT_NAMESPACE 