// Copyright Narrative Tools 2024. 


#include "Settings/NarrativeTimeOfDaySettings.h"

UNarrativeTimeOfDaySettings::UNarrativeTimeOfDaySettings()
{

	bDynamicTimeOfDay = true;
	DefaultTimeOfDay = 1650.f;
	DayLengthMinutes = 20.f;
	NightLengthMinutes = 2.f;
	SunriseTime = 800.f;
	SunsetTime = 1900.f;
}
