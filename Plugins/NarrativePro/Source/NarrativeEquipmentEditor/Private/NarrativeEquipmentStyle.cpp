// Copyright Narrative Tools 2022. 

#include "NarrativeEquipmentStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeEquipmentStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeEquipmentStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeEquipmentStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeEquipmentStyle::GetStyleSetName()
{
	static FName NarrativeEquipmentStyleName(TEXT("NarrativeEquipmentStyle"));
	return NarrativeEquipmentStyleName;
}

void FNarrativeEquipmentStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	StyleSet->Set(FName(TEXT("ClassThumbnail.EquippableItemBlueprint")), new IMAGE_BRUSH("EquippableItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.EquippableItemBlueprint")), new IMAGE_BRUSH("EquippableItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.ClothingItemBlueprint")), new IMAGE_BRUSH("ClothingItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.ClothingItemBlueprint")), new IMAGE_BRUSH("ClothingItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.EquippableItem")), new IMAGE_BRUSH("EquippableItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.EquippableItem")), new IMAGE_BRUSH("EquippableItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.EquippableItem_Clothing")), new IMAGE_BRUSH("ClothingItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.EquippableItem_Clothing")), new IMAGE_BRUSH("ClothingItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.EquipmentComponent")), new IMAGE_BRUSH("EquippableItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.EquipmentComponent")), new IMAGE_BRUSH("EquippableItem", FVector2D(16, 16)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeEquipmentStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

