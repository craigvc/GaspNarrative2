// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemQuality.h"

#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/ItemFragments/ItemFragment_Quality.h"

UViewModel_ItemQuality::UViewModel_ItemQuality()
{
	QualityTag = FGameplayTag::EmptyTag;
	QualityText = FText::GetEmpty();
	QualityColor = FLinearColor::Transparent;	
}

void UViewModel_ItemQuality::InitializeData_Implementation()
{
	const UItemFragment_Quality* QualityFragment = FindFragment<UItemFragment_Quality>();
	if (IsValid(QualityFragment))
	{
		SetQualityTag(QualityFragment->GetQualityTag());
		SetQualityText(QualityFragment->GetQualityText());
		SetQualityColor(QualityFragment->GetQualityColor());
	}
	else
	{
		ClearData();
	}
}

void UViewModel_ItemQuality::ClearData_Implementation()
{
	SetQualityTag(FGameplayTag::EmptyTag);
	SetQualityText(FText::GetEmpty());
	SetQualityColor(FLinearColor::Transparent);
}

void UViewModel_ItemQuality::SetQualityTag(const FGameplayTag NewQualityTag)
{
	UE_MVVM_SET_PROPERTY_VALUE(QualityTag, NewQualityTag);
}

void UViewModel_ItemQuality::SetQualityText(const FText NewQualityText)
{
	UE_MVVM_SET_PROPERTY_VALUE(QualityText, NewQualityText);
}

void UViewModel_ItemQuality::SetQualityColor(const FLinearColor NewQualityColor)
{
	UE_MVVM_SET_PROPERTY_VALUE(QualityColor, NewQualityColor);
}
