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
	StyleSet->Set(FName(TEXT("ClassThumbnail.PlayerDefinition")), new IMAGE_BRUSH("Player", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.PlayerDefinition")), new IMAGE_BRUSH("Player", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.Settlement")), new IMAGE_BRUSH("Settlement", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.Settlement")), new IMAGE_BRUSH("Settlement", FVector2D(16, 16)));
	
	StyleSet->Set(FName(TEXT("ClassThumbnail.SettlementLoader")), new IMAGE_BRUSH("SettlementLoader", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.SettlementLoader")), new IMAGE_BRUSH("SettlementLoader", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.ItemCollection")), new IMAGE_BRUSH("LootItems", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.ItemCollection")), new IMAGE_BRUSH("LootItems", FVector2D(16, 16)));

	
	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterAppearance")), new IMAGE_BRUSH("EquippableItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterAppearance")), new IMAGE_BRUSH("EquippableItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorItem_Groom")), new IMAGE_BRUSH("Groom", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorItem_Groom")), new IMAGE_BRUSH("Groom", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorItem_Mesh")), new IMAGE_BRUSH("ClothingItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorItem_Mesh")), new IMAGE_BRUSH("ClothingItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorConfiguration")), new IMAGE_BRUSH("EquippableItem", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorConfiguration")), new IMAGE_BRUSH("EquippableItem", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorOption")), new IMAGE_BRUSH("Interaction", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorOption")), new IMAGE_BRUSH("Interaction", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorColorSwatch")), new IMAGE_BRUSH("ColorPalette", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorColorSwatch")), new IMAGE_BRUSH("ColorPalette", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorPage")), new IMAGE_BRUSH("Page", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorPage")), new IMAGE_BRUSH("Page", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorForm")), new IMAGE_BRUSH("Form", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorForm")), new IMAGE_BRUSH("Form", FVector2D(16, 16)));
	StyleSet->Set(FName(TEXT("ClassThumbnail.CharacterCreatorSection")), new IMAGE_BRUSH("Section", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.CharacterCreatorSection")), new IMAGE_BRUSH("Section", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeAnimSet")), new IMAGE_BRUSH("ComboAttack", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeAnimSet")), new IMAGE_BRUSH("ComboAttack", FVector2D(16, 16)));

	
	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeInteractionComponent")), new IMAGE_BRUSH("Interaction", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeInteractionComponent")), new IMAGE_BRUSH("Interaction", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeInteractableComponent")), new IMAGE_BRUSH("Interactable", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeInteractableComponent")), new IMAGE_BRUSH("Interactable", FVector2D(16, 16)));

	
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

	
	StyleSet->Set(FName(TEXT("ClassThumbnail.NavigationMarkerComponent")), new IMAGE_BRUSH("NavigationMarkerComponent", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NavigationMarkerComponent")), new IMAGE_BRUSH("NavigationMarkerComponent", FVector2D(16, 16)));

	StyleSet->Set(FName(TEXT("ClassThumbnail.NarrativeNavigationComponent")), new IMAGE_BRUSH("NarrativeNavigatorComponent", FVector2D(64, 64)));
	StyleSet->Set(FName(TEXT("ClassIcon.NarrativeNavigationComponent")), new IMAGE_BRUSH("NarrativeNavigatorComponent", FVector2D(16, 16)));

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

