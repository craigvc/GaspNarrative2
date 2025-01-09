// Copyright Narrative Tools 2022. 

#include "NarrativeInventoryStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeInventoryStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeInventoryStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeInventoryStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeInventoryStyle::GetStyleSetName()
{
	static FName NarrativeInventoryStyleName(TEXT("NarrativeInventoryStyle"));
	return NarrativeInventoryStyleName;
}

void FNarrativeInventoryStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeItemBlueprint")), new IMAGE_BRUSH("Item", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeItemBlueprint")), new IMAGE_BRUSH("Item", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeItem")), new IMAGE_BRUSH("Item", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeItem")), new IMAGE_BRUSH("Item", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeBookItem")), new IMAGE_BRUSH("BookItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeBookItem")), new IMAGE_BRUSH("BookItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeInventoryComponent")), new IMAGE_BRUSH("Item", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeInventoryComponent")), new IMAGE_BRUSH("Item", FVector2D(16, 16)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeInventoryStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

