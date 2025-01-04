// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Quality.h"

#include "GameplayEffect.h"
#include "NinjaInventorySettings.h"
#include "NinjaInventoryGameplayTags.h"

UItemFragment_Quality::UItemFragment_Quality()
{
	QualityTag = Tag_Inventory_Item_Quality_Common;
	RefreshQualityMapping();
}

FGameplayTag UItemFragment_Quality::GetQualityTag() const
{
	return QualityTag;
}

FText UItemFragment_Quality::GetQualityText() const
{
	return QualityText;
}

FLinearColor UItemFragment_Quality::GetQualityColor() const
{
	return QualityColor;
}

void UItemFragment_Quality::RefreshQualityMapping()
{
	ItemTags.Reset();

	FInventoryItemQualityMappingTableRow QualityMapping;
	bFoundQualityMapping = FindQualityMapping(QualityTag, QualityMapping);

	if (bFoundQualityMapping)
	{
		QualityText = QualityMapping.QualityText;
		QualityColor = QualityMapping.QualityColor;
		ItemTags.AddTagFast(QualityTag);
	}
	else
	{
		QualityText = NSLOCTEXT("ItemData", "UndefinedQuality", "Undefined");
		QualityColor = FColor::Transparent;
	}	
}

bool UItemFragment_Quality::FindQualityMapping(const FGameplayTag& Tag, FInventoryItemQualityMappingTableRow& OutRow)
{
	if (Tag.IsValid())
	{
		const UDataTable* MappingTable = nullptr;
		
		const TSoftObjectPtr<UDataTable> MappingTablePtr = GetDefault<UNinjaInventorySettings>()->QualityMappingTable;
		if (MappingTablePtr.IsValid())
		{
			MappingTable = MappingTablePtr.Get();
		}
		else if (MappingTablePtr.IsPending())
		{
			MappingTable = MappingTablePtr.LoadSynchronous();
		}

		if (IsValid(MappingTable))
		{
			return FInventoryItemQualityMappingTableRow::FindRow(OutRow, MappingTable, Tag);	
		}
	}

	return false;
}

#if WITH_EDITOR
void UItemFragment_Quality::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, QualityTag))
	{
		RefreshQualityMapping();
	}
}

bool UItemFragment_Quality::CanEditChange(const FProperty* InProperty) const
{
	const FName PropertyName = InProperty->GetFName();
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UItemFragment_Quality, QualityText) || PropertyName == GET_MEMBER_NAME_CHECKED(UItemFragment_Quality, QualityColor))
	{
		return !bFoundQualityMapping;
	}
	
	return Super::CanEditChange(InProperty);
}
#endif
