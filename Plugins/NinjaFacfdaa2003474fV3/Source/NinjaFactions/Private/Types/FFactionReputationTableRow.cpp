// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FFactionReputationTableRow.h"

FFactionReputationTableRow::FFactionReputationTableRow()
{
	UniqueName = NAME_None;
	DisplayName = NSLOCTEXT("FactionData", "SampleTier", "Tier Name");
	Color = FColor::Emerald;
	MinReputation = 0;
	MaxReputation = 0;
	Attitude = ETeamAttitude::Neutral;
}

void FFactionReputationTableRow::OnPostDataImport(const UDataTable* InDataTable, const FName InRowName,
	TArray<FString>& OutCollectedImportProblems)
{
	FTableRowBase::OnPostDataImport(InDataTable, InRowName, OutCollectedImportProblems);
	SyncNames(InRowName);
}

void FFactionReputationTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	FTableRowBase::OnDataTableChanged(InDataTable, InRowName);
	SyncNames(InRowName);
}

void FFactionReputationTableRow::SyncNames(const FName& InRowName)
{
	UniqueName = InRowName;
	if (DisplayName.IsEmpty())
	{
		DisplayName = FText::FromName(InRowName);
	}
}
