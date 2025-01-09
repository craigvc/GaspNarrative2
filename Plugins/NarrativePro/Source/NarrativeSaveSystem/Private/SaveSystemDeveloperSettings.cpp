// Copyright Narrative Tools 2024. 


#include "SaveSystemDeveloperSettings.h"
#include "NarrativeSave.h"

USaveSystemDeveloperSettings::USaveSystemDeveloperSettings()
{
	bAutoLoadFirstSaveInEditor = true;
	SaveGameClass = UNarrativeSave::StaticClass();
}
