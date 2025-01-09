// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "GameplayTagContainer.h"
#include "HAL/Platform.h"

class UGameplayTagsManager;

/**
 * Navigator tags
 */
struct FNavigatorGameplayTags
{
public:

	static const FNavigatorGameplayTags& Get() { return GameplayTags; }

	static void InitializeNativeTags();

	static FGameplayTag FindTagByString(FString TagString, bool bMatchPartialString = false);

public:

	FGameplayTag MapLayer_Default;

	FGameplayTag NavigatorTypes_Compass;
	FGameplayTag NavigatorTypes_Screenspace;
	FGameplayTag NavigatorTypes_Minimap;
	FGameplayTag NavigatorTypes_Worldmap;

	FGameplayTag PointOfInterestCategory;

protected:

	void AddAllTags(UGameplayTagsManager& Manager);
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);

private:

	static NARRATIVENAVIGATOR_API FNavigatorGameplayTags GameplayTags;
};
