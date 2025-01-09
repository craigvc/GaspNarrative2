// Copyright Narrative Tools 2024. 

#include "NavigatorGameplayTags.h"
#include <GameplayTagsManager.h>

FNavigatorGameplayTags FNavigatorGameplayTags::GameplayTags;

void FNavigatorGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

	GameplayTags.AddAllTags(Manager);

	// Notify manager that we are done adding native tags.
	Manager.DoneAddingNativeTags();
}

void FNavigatorGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	AddTag(MapLayer_Default, "Navigator.MapLayer.Default", "Default map layer for Narrative Navigator.");
	AddTag(MapLayer_Default, "Navigator.MapLayer.Interior", "Use this layer for building interiors.");

	AddTag(NavigatorTypes_Compass, "Navigator.NavigatorTypes.Compass", "The compass Navigator.");
	AddTag(NavigatorTypes_Screenspace, "Navigator.NavigatorTypes.ScreenSpace", "The screen space Navigator.");
	AddTag(NavigatorTypes_Minimap, "Navigator.NavigatorTypes.Minimap", "The minimap Navigator.");
	AddTag(NavigatorTypes_Worldmap, "Navigator.NavigatorTypes.WorldMap", "The world map Navigator.");

	AddTag(PointOfInterestCategory, "Narrative.POIs", "Points of interest should be added as subtags to this.");
}

void FNavigatorGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}
