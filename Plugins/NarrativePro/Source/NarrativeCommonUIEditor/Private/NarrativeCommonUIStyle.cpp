// Copyright Narrative Tools 2022. 

#include "NarrativeCommonUIStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeCommonUIStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeCommonUIStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeCommonUIStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeCommonUIStyle::GetStyleSetName()
{
	static FName NarrativeCommonUIStyleName(TEXT("NarrativeCommonUIStyle"));
	return NarrativeCommonUIStyleName;
}

void FNarrativeCommonUIStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));


	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeCommonUIStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

