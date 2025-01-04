// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataTable.h"
#include "FFactionAlignmentTableRow.generated.h"

/**
 * Alignment matrix for a faction.
 */
USTRUCT(BlueprintType)
struct NINJAFACTIONS_API FFactionAlignmentTableRow : public FTableRowBase
{
    
    GENERATED_BODY()

    /** List of factions that will have an exception case. */
    UPROPERTY(EditAnywhere, Category = "Faction Alignment", meta = (Categories = "Factions.ID"))
    FGameplayTagContainer FactionTags;

    /** Attitude towards the provided factions. */
    UPROPERTY(EditAnywhere, Category = "Faction Alignment")
    TEnumAsByte<ETeamAttitude::Type> Attitude;

    FFactionAlignmentTableRow()
    {
        FactionTags = FGameplayTagContainer::EmptyContainer;
        Attitude = ETeamAttitude::Neutral;
    }
    
    static bool FindRow(FFactionAlignmentTableRow& OutRow, const UDataTable* Table, const FGameplayTag FactionTag)
    {
        const bool bHasValidFaction = ensureMsgf(FactionTag.IsValid(), TEXT("Invalid Faction Tag provided!"));
        const bool bHasValidTable = ensureMsgf(IsValid(Table), TEXT("The Faction Alignment table is null!"));

        if (bHasValidFaction && bHasValidTable)
        {
            TArray<FFactionAlignmentTableRow*> Rows;
            Table->GetAllRows(TEXT("FactionSearch"), Rows);

            const int32 Idx = Rows.IndexOfByPredicate([FactionTag](const FFactionAlignmentTableRow* Row)
            {
                return Row->FactionTags.HasTagExact(FactionTag);
            });

            if (Idx != INDEX_NONE)
            {
                OutRow = *Rows[Idx];
                return true;
            }
        }

        return false;
    }
};