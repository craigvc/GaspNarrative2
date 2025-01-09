// Copyright Narrative Tools 2024. 


#include "Widgets/NarrativeCommonButtonBase.h"

UNarrativeCommonButtonBase::UNarrativeCommonButtonBase()
{
	TextJustification = ETextJustify::Left;
	ButtonText = NSLOCTEXT("NarrativeCommonButtonBase", "ButtonDefaultText", "Button Text");
}

void UNarrativeCommonButtonBase::ForceSetIsSelected(const bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	SetSelectedInternal(bInSelected, bAllowSound, bBroadcast);
}

void UNarrativeCommonButtonBase::SetButtonText(FText InText)
{
	ButtonText = InText;

	if (ButtonTextBlock)
	{
		ButtonTextBlock->SetText(ButtonText);
	}
}

void UNarrativeCommonButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	SetButtonText(ButtonText);

	if (ButtonTextBlock)
	{
		ButtonTextBlock->SetJustification(TextJustification);
	}
}

void UNarrativeCommonButtonBase::NativeOnCurrentTextStyleChanged()
{
	Super::NativeOnCurrentTextStyleChanged();

	if (ButtonTextBlock)
	{
		ButtonTextBlock->SetStyle(GetCurrentTextStyleClass());
	}
}
