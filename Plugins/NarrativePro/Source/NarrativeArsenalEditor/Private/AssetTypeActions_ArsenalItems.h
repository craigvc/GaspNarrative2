// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions/AssetTypeActions_Blueprint.h"


class FAssetTypeActions_WeaponItem : public FAssetTypeActions_Blueprint
{
public:

	FAssetTypeActions_WeaponItem(uint32 InAssetCategory);

	uint32 Category;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeWeaponItem", "Weapon Item"); };
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	const TArray<FText>& GetSubMenus() const;
};


class FAssetTypeActions_GameplayEffectItem : public FAssetTypeActions_Blueprint
{
public:

	FAssetTypeActions_GameplayEffectItem(uint32 InAssetCategory);

	uint32 Category;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_GameplayEffectItem", "Gameplay Effect Item"); };
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	const TArray<FText>& GetSubMenus() const;
};