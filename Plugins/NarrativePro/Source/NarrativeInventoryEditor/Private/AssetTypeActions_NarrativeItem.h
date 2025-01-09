// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions/AssetTypeActions_Blueprint.h"

//Just put Items and events in here too 
class FAssetTypeActions_NarrativeItem : public FAssetTypeActions_Blueprint
{
public:

	FAssetTypeActions_NarrativeItem(uint32 InAssetCategory);

	uint32 Category;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeItem", "Narrative Item"); };
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	const TArray<FText>& GetSubMenus() const;

};