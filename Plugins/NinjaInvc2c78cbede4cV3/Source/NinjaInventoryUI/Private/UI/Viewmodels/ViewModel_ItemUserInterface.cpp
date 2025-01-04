// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ItemUserInterface.h"

#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/ItemFragments/ItemFragment_UserInterface.h"

UViewModel_ItemUserInterface::UViewModel_ItemUserInterface()
{
}

void UViewModel_ItemUserInterface::InitializeData_Implementation()
{
	const UItemFragment_UserInterface* UserInterfaceFragment = FindFragment<UItemFragment_UserInterface>();
	if (IsValid(UserInterfaceFragment))
	{
		SetDisplayName(UserInterfaceFragment->GetDisplayName());
		SetDisplayType(UserInterfaceFragment->GetDisplayType());
		SetDescription(UserInterfaceFragment->GetDescription());
		SetIcon(UserInterfaceFragment->GetIcon());
	}
	else
	{
		ClearData();
	}
}

void UViewModel_ItemUserInterface::ClearData_Implementation()
{
	SetDisplayName(FText::GetEmpty());
	SetDisplayType(FText::GetEmpty());
	SetDescription(FText::GetEmpty());
	SetIcon(DefaultIcon);
}

void UViewModel_ItemUserInterface::SetDisplayName(const FText& NewDisplayName)
{
	UE_MVVM_SET_PROPERTY_VALUE(DisplayName, NewDisplayName);
}

void UViewModel_ItemUserInterface::SetDisplayType(const FText& NewDisplayType)
{
	UE_MVVM_SET_PROPERTY_VALUE(DisplayType, NewDisplayType);
}

void UViewModel_ItemUserInterface::SetDescription(const FText& NewDescription)
{
	UE_MVVM_SET_PROPERTY_VALUE(Description, NewDescription);
}

void UViewModel_ItemUserInterface::SetIcon(UTexture2D* NewIcon)
{
	UE_MVVM_SET_PROPERTY_VALUE(Icon, NewIcon);
}

void UViewModel_ItemUserInterface::SetDefaultIcon(UTexture2D* NewDefaultIcon)
{
	DefaultIcon = NewDefaultIcon;
	if (Icon == nullptr)
	{
		SetIcon(DefaultIcon);
	}
}
