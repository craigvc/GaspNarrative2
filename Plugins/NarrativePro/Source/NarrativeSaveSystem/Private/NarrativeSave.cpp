// Copyright Narrative Tools 2024. 


#include "NarrativeSave.h"

void UNarrativeSave::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	if (Ar.IsLoading() && SavedDataVersion != ENarrativeSaveGameVersion::LatestVersion)
	{
		//Do fixups in future if required
	}
}
