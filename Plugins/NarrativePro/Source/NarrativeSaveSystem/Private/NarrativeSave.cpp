// Copyright Narrative Tools 2024. 


#include "NarrativeSave.h"

void UNarrativeSave::OverrideLevelName(const FString& InLevelName)
{
	LevelName = InLevelName;
}

void UNarrativeSave::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	if (Ar.IsLoading() && SavedDataVersion != ENarrativeSaveGameVersion::LatestVersion)
	{
		//Do fixups in future if required
	}
}
