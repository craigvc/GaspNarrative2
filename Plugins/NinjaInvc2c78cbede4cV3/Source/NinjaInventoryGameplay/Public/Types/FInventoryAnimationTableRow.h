// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FInventoryAnimationTableRow.generated.h"

/**
 * An animation that can be used by inventory/equipment events.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORYGAMEPLAY_API FInventoryAnimationTableRow : public FTableRowBase
{
	
	GENERATED_BODY()

	/** A query that represents the entry's compatibility. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Animation")
	FGameplayTagQuery MontageQuery = FGameplayTagQuery::EmptyQuery;

	/** Montage asset used for this event. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Animation")
	TSoftObjectPtr<UAnimMontage> MontageToPlay = nullptr;

	/** Montage section to use. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory Animation")
	FName MontageSection = NAME_None;
	
	FInventoryAnimationTableRow()
	{
	}

	/**
	 * Finds a row for a given Event and tags.
	 */
	static bool FindRow(FInventoryAnimationTableRow& OutRow, const UDataTable* Table, FGameplayTagContainer ReferenceTags)
	{
		if (Table != nullptr)
		{
			TArray<FInventoryAnimationTableRow*> Rows;
			Table->GetAllRows(TEXT("InventoryAnimationSearch"), Rows);

			const int32 Idx = Rows.IndexOfByPredicate([ReferenceTags](const FInventoryAnimationTableRow* Row)
				{ return Row->MontageQuery.Matches(ReferenceTags); });

			if (Idx != INDEX_NONE)
			{
				OutRow = *Rows[Idx];
				return true;
			}
		}

		return false;
	}	
};