// Copyright Narrative Tools 2024. 


#include "Widgets/NarrativeSpinBox.h"
#include "NarrativeUIDeveloperSettings.h"

TSharedRef<SWidget> UNarrativeSpinBox::RebuildWidget()
{

	if (UNarrativeUIDeveloperSettings* Settings = GetMutableDefault<UNarrativeUIDeveloperSettings>())
	{
		ForegroundColor = Settings->UIPrimaryColor;
		WidgetStyle.BackgroundBrush.TintColor = FSlateColor(Settings->UIInvertColor);
		WidgetStyle.ActiveBackgroundBrush.TintColor = FSlateColor(Settings->UIInvertAccentColor);
		WidgetStyle.HoveredBackgroundBrush.TintColor = FSlateColor(Settings->UIInvertColor);
		WidgetStyle.ActiveFillBrush.TintColor = FSlateColor(Settings->UIInvertAccentColor);
		WidgetStyle.HoveredFillBrush.TintColor = FSlateColor(Settings->UIInvertColor);
		WidgetStyle.InactiveFillBrush.TintColor = FSlateColor(Settings->UIInvertAccentColor);
	}

	return Super::RebuildWidget();

}
