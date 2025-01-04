// Copyright Narrative Tools 2024. 

#include "NarrativeInteractionStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeInteractionStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeInteractionStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeInteractionStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeInteractionStyle::GetStyleSetName()
{
	static FName NarrativeInteractionStyleName(TEXT("NarrativeInteractionStyle"));
	return NarrativeInteractionStyleName;
}

void FNarrativeInteractionStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeInteractionComponent")), new IMAGE_BRUSH("Interaction", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeInteractionComponent")), new IMAGE_BRUSH("Interaction", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeInteractableComponent")), new IMAGE_BRUSH("Interactable", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeInteractableComponent")), new IMAGE_BRUSH("Interactable", FVector2D(16, 16)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeInteractionStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

