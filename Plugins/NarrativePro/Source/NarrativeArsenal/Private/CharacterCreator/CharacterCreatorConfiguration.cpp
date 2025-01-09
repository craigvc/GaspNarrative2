// Copyright Narrative Tools 2024. 


#include "CharacterCreator/CharacterCreatorConfiguration.h"

#define LOCTEXT_NAMESPACE "CharacterCreator"

UCharacterCreatorConfiguration::UCharacterCreatorConfiguration()
{

}

UCharacterCreatorSection::UCharacterCreatorSection()
{
	SectionDisplayName = LOCTEXT("SectionDisplayName", "Section Title");
}

UCharacterCreatorPage::UCharacterCreatorPage()
{
	PageTitleText = LOCTEXT("PageTitleText", "Page Title");
}

UCharacterCreatorForm::UCharacterCreatorForm()
{

}


#undef LOCTEXT_NAMESPACE