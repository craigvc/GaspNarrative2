﻿// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AssetTypeActions/AssetTypeActions_DataAsset.h"

class FAssetTypeActions_NinjaInputSetup final : public FAssetTypeActions_DataAsset
{
public:
    
    virtual FText GetName() const override;
    virtual uint32 GetCategories() override;
    virtual FColor GetTypeColor() const override;
    virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
    virtual UClass* GetSupportedClass() const override;
	virtual const TArray<FText>& GetSubMenus() const override;
	
};