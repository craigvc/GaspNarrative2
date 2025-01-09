// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions/AssetTypeActions_Blueprint.h"


class FAssetTypeActions_EquippableItem : public FAssetTypeActions_Blueprint
{
public:

	FAssetTypeActions_EquippableItem(uint32 InAssetCategory);

	uint32 Category;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeEquippable", "Equippable Item"); };
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	const TArray<FText>& GetSubMenus() const;
};


class FAssetTypeActions_ClothingItem : public FAssetTypeActions_Blueprint
{
public:

	FAssetTypeActions_ClothingItem(uint32 InAssetCategory);

	uint32 Category;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeClothing", "Clothing Item"); };
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	const TArray<FText>& GetSubMenus() const;
};