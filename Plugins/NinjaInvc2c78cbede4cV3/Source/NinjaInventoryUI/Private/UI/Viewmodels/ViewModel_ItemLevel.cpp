// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemLevel.h"

#include "GameFramework/ItemFragments/ItemFragment_Level.h"

UViewModel_ItemLevel::UViewModel_ItemLevel()
{
	Level = 0;
}

void UViewModel_ItemLevel::SetLevel(const float NewLevel)
{
	UE_MVVM_SET_PROPERTY_VALUE(Level, NewLevel);
}

void UViewModel_ItemLevel::InitializeData_Implementation()
{
	Super::InitializeData_Implementation();

	const UNinjaInventoryItem* Item = GetItem();
	const UItemFragment_Level* LevelFragment = FindFragment<UItemFragment_Level>();
	
	if (IsValid(Item) && IsValid(LevelFragment))
	{
		const int32 CurrentLevel = LevelFragment->GetLevel(Item);  
		SetLevel(CurrentLevel);
	}
	else
	{
		ClearData();
	}
}

void UViewModel_ItemLevel::ClearData_Implementation()
{
	Super::ClearData_Implementation();
	SetLevel(0.f);
}

void UViewModel_ItemLevel::BindToItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::BindToItem_Implementation(Item);

	UItemFragment_Level* LevelFragment = Item->FindFragment<UItemFragment_Level>();
	if (IsValid(LevelFragment))
	{
		LevelFragment->OnLevelChanged.AddUniqueDynamic(this, &ThisClass::HandleLevelChanged);
	}	
}

void UViewModel_ItemLevel::UnbindFromItem_Implementation(UNinjaInventoryItem* Item)
{
	Super::UnbindFromItem_Implementation(Item);

	UItemFragment_Level* LevelFragment = Item->FindFragment<UItemFragment_Level>();
	if (IsValid(LevelFragment))
	{
		LevelFragment->OnLevelChanged.RemoveAll(this);
	}		
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UViewModel_ItemLevel::HandleLevelChanged(UNinjaInventoryItem* Item, const int32 NewLevel)
{
	if (IsSameItem(Item))
	{
		SetLevel(NewLevel);	
	}
}
