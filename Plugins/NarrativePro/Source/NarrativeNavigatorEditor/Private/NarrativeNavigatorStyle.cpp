// Copyright Narrative Tools 2022. 

#include "NarrativeNavigatorStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeNavigatorStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeNavigatorStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeNavigatorStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeNavigatorStyle::GetStyleSetName()
{
	static FName NarrativeNavigatorStyleName(TEXT("NarrativeNavigatorStyle"));
	return NarrativeNavigatorStyleName;
}

void FNarrativeNavigatorStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NavigationMarkerComponent")), new IMAGE_BRUSH("NavigationMarkerComponent", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NavigationMarkerComponent")), new IMAGE_BRUSH("NavigationMarkerComponent", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeNavigationComponent")), new IMAGE_BRUSH("NarrativeNavigatorComponent", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeNavigationComponent")), new IMAGE_BRUSH("NarrativeNavigatorComponent", FVector2D(16, 16)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeNavigatorStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

