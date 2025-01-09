// Copyright Narrative Tools 2024. 


#include "Widgets/NarrativeComboBoxString.h"
#include "NarrativeUIDeveloperSettings.h"

UNarrativeComboBoxString::UNarrativeComboBoxString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

TSharedRef<SWidget> UNarrativeComboBoxString::RebuildWidget()
{
	//Pull foreground from settings instead of designer set value 
	if (UNarrativeUIDeveloperSettings* Settings = GetMutableDefault<UNarrativeUIDeveloperSettings>())
	{
		ForegroundColor = Settings->UIPrimaryColor;
	}

	return Super::RebuildWidget();
}
