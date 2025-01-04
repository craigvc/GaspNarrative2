// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h"

#include "Data/NinjaFactionDataAsset.h"
#include "Types/FFactionAlignmentTableRow.h"

ETeamAttitude::Type UFactionSolver_SimpleAttitudeCheck::SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const
{
    const TObjectPtr<const UNinjaFactionDataAsset> SourceFactionData = GetMainFaction(Source);
    const TObjectPtr<const UNinjaFactionDataAsset> TargetFactionData = GetMainFaction(Target);

    if (IsValid(SourceFactionData) && IsValid(TargetFactionData))
    {
        // Fastest path, same factions will have the faster response.
        if (IsSameFaction(SourceFactionData, TargetFactionData))
        {
            return SourceFactionData->DefaultAttitudeTowardsMyFaction;
        }

        // Check the exception matrix for specific attitudes.
        if (IsValid(SourceFactionData->AttitudeMatrix))
        {
        	const FGameplayTag TargetFactionTag = TargetFactionData->FactionTag;
        	
            FFactionAlignmentTableRow OutRow;
            if (FFactionAlignmentTableRow::FindRow(OutRow, SourceFactionData->AttitudeMatrix, TargetFactionTag))
            {
                return OutRow.Attitude;
            }
        }

        // Fallback to the default attitude towards a different faction.
        return SourceFactionData->DefaultAttitudeTowardsOtherFactions;
    }

    return Super::SolveAttitude_Implementation(Source, Target);
}

bool UFactionSolver_SimpleAttitudeCheck::IsSameFaction_Implementation(const UNinjaFactionDataAsset* SourceFactionData,
	const UNinjaFactionDataAsset* TargetFactionData) const
{
	check(IsValid(SourceFactionData) && IsValid(TargetFactionData));
	
	const FGameplayTag SourceFactionTag = SourceFactionData->FactionTag;
	const FGameplayTag TargetFactionTag = TargetFactionData->FactionTag;

	return SourceFactionTag == TargetFactionTag;
}
