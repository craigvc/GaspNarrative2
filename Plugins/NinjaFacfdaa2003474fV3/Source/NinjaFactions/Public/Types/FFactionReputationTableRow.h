// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataTable.h"
#include "FFactionReputationTableRow.generated.h"

/**
 * A reputation tier for a faction.
 */
USTRUCT(BlueprintType)
struct NINJAFACTIONS_API FFactionReputationTableRow : public FTableRowBase
{
    
    GENERATED_BODY()

	/** The unique row name in the Data Table. */
	FName UniqueName;
	
	/** Name displayed for this tier, using the Localization System. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction Reputation")
	FText DisplayName;	

    /** A color that represents this tier. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction Reputation")
    FColor Color;

    /** Minimum amount of reputation for this tier (inclusive). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction Reputation", DisplayName = "Minimum Reputation")
    int32 MinReputation;
    
    /** Maximum amount of reputation for this tier (inclusive). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction Reputation", DisplayName = "Maximum Reputation")
    int32 MaxReputation;

    /** Attitude towards members in this tier. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction Reputation")
    TEnumAsByte<ETeamAttitude::Type> Attitude;
    
    FFactionReputationTableRow();

	// -- Begin Table Row implementation
	virtual void OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems) override;
    virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
	// -- End Table Row implementation

    /**
     * Finds a row that is compatible with the provided amount of reputation.
     * 
     * @param OutRow		Row that is compatible with the provided reputation. 
     * @param Table			Datatable used as a source of entries.
     * @param Reputation	Reputation used as a search criteria.
     * @return				True, if a row was found.
     */
    static bool FindRow(FFactionReputationTableRow& OutRow, const UDataTable* Table, int32 Reputation)
	{
		if (IsValid(Table))
		{
			TArray<FFactionReputationTableRow*> Rows;
			Table->GetAllRows(TEXT("ReputationSearch"), Rows);

			const int32 Idx = Rows.IndexOfByPredicate([Reputation](const FFactionReputationTableRow* Row)
				{ return Reputation >= Row->MinReputation && Reputation <= Row->MaxReputation; });

			if (Idx != INDEX_NONE)
			{
				OutRow = *Rows[Idx];
				return true;
			}
		}

		return false;
	}
	
private:

	void SyncNames(const FName& InRowName);
	
};