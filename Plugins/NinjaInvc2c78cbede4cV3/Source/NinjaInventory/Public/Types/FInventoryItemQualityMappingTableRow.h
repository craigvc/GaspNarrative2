// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "FInventoryItemQualityMappingTableRow.generated.h"

/**
 * Maps a quality tag to a proper color and name.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryItemQualityMappingTableRow : public FTableRowBase
{
	
	GENERATED_BODY()

	/** Gameplay Tag that represents the quality. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Quality Mapping", meta = (Categories = "Inventory.Item.Quality"))
	FGameplayTag QualityTag;

	/** A localized name for the quality. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Quality Mapping")
	FText QualityText;

	/** Color applied for this quality. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Quality Mapping")
	FLinearColor QualityColor;

	FInventoryItemQualityMappingTableRow()
	{
		QualityTag = FGameplayTag::EmptyTag;
		QualityText = NSLOCTEXT("ItemData", "SampleQuality", "Common");
		QualityColor = FLinearColor::White;
	}

	/**
	 * Finds a row that is compatible with the provided Quality.
	 * 
	 * @param OutRow		Row that is compatible with the provided quality tag. 
	 * @param Table			Datatable used as a source of entries.
	 * @param QualityTag	Quality tag used as a search criteria.
	 * @return				True if a row was found, False otherwise.
	 */	
	static bool FindRow(FInventoryItemQualityMappingTableRow& OutRow, const UDataTable* Table, const FGameplayTag& QualityTag)
	{
		if (IsValid(Table))
		{
			TArray<FInventoryItemQualityMappingTableRow*> Rows;
			Table->GetAllRows(TEXT("QualitySearch"), Rows);

			const int32 Idx = Rows.IndexOfByPredicate([QualityTag](const FInventoryItemQualityMappingTableRow* Row)
				{ return Row->QualityTag == QualityTag; });

			if (Idx != INDEX_NONE)
			{
				OutRow = *Rows[Idx];
				return true;
			}
		}

		return false;	
	}
};