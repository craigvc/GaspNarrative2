// Copyright Narrative Tools 2022. 

#include "NarrativeArsenalStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FNarrativeArsenalStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FNarrativeArsenalStyle::Get() { return StyleSet; }

//Helper functions from UE4 forums to easily create box and image brushes
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FNarrativeArsenalStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	//Find quest plugin content directory
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("NarrativePro"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}
FName FNarrativeArsenalStyle::GetStyleSetName()
{
	static FName NarrativeArsenalStyleName(TEXT("NarrativeArsenalStyle"));
	return NarrativeArsenalStyleName;
}

void FNarrativeArsenalStyle::Initialize()
{
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	StyleSet->Set(FName(TEXT("ClassThumbnail.GameplayEffectItemBlueprint")), new IMAGE_BRUSH("GameplayEffectItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.GameplayEffectItemBlueprint")), new IMAGE_BRUSH("GameplayEffectItem", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.GameplayEffectItem")), new IMAGE_BRUSH("GameplayEffectItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.GameplayEffectItem")), new IMAGE_BRUSH("GameplayEffectItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.WeaponItem")), new IMAGE_BRUSH("WeaponItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.WeaponItem")), new IMAGE_BRUSH("WeaponItem", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.WeaponItemBlueprint")), new IMAGE_BRUSH("WeaponItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.WeaponItemBlueprint")), new IMAGE_BRUSH("WeaponItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NPCDataAsset")), new IMAGE_BRUSH("NPC", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NPCDataAsset")), new IMAGE_BRUSH("NPC", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.NPCDefinition")), new IMAGE_BRUSH("NPC", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NPCDefinition")), new IMAGE_BRUSH("NPC", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.Settlement")), new IMAGE_BRUSH("Settlement", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.Settlement")), new IMAGE_BRUSH("Settlement", FVector2D(16, 16)));
	
	StyleSet->Set(FName(TEXT("ClassThumbnail.SettlementLoader")), new IMAGE_BRUSH("SettlementLoader", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.SettlementLoader")), new IMAGE_BRUSH("SettlementLoader", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.ItemCollection")), new IMAGE_BRUSH("LootItems", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.ItemCollection")), new IMAGE_BRUSH("LootItems", FVector2D(16, 16)));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};


#undef BOX_BRUSH
#undef IMAGE_BRUSH

void FNarrativeArsenalStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

