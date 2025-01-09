// Copyright Narrative Tools 2024. 


#include "CharacterCreator/CreatorColorSwatch.h"

UCharacterCreatorColorSwatch::UCharacterCreatorColorSwatch()
{

}

FLinearColor UCharacterCreatorColorSwatch::GetColor(const uint32 ColorIndex) const
{
	return Colors.IsValidIndex(ColorIndex) ? Colors[ColorIndex] : FLinearColor();
}
