﻿// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AssetTypeActions/AssetTypeActions_DataAsset.h"

class FAssetTypeAction_InventoryContainerDefinition final : public FAssetTypeActions_DataAsset
{
public:
    
	virtual FText GetName() const override;
	virtual uint32 GetCategories() override;
	virtual FColor GetTypeColor() const override;
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
	virtual UClass* GetSupportedClass() const override;
	virtual const TArray<FText>& GetSubMenus() const override;
	
};