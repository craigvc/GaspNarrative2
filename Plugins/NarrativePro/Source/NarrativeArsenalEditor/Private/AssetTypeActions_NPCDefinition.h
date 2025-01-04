// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions/AssetTypeActions_DataAsset.h"
#include "AI/NPCDefinition.h"

/**
 * Adds item collections to Narrative right click menu
 */
class FAssetTypeActions_NPCDefinition : public FAssetTypeActions_DataAsset
{

public:

	FAssetTypeActions_NPCDefinition(uint32 InAssetCategory);
	uint32 Category;

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeNPCDefinition", "NPC Definition"); };
	virtual uint32 GetCategories() override { return Category; }
	virtual FColor GetTypeColor() const override { return FColor(127, 127, 255); }
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_NarrativeNPCDefinitionDesc", "Represents a container of items. Useful for grouping armor pieces into sets, weapons with ammo, etc. "); }
	virtual UClass* GetSupportedClass() const override { return UNPCDefinition::StaticClass(); }

};
