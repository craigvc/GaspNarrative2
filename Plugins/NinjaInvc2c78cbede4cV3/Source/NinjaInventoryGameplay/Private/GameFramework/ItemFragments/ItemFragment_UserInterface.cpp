// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_UserInterface.h"

UItemFragment_UserInterface::UItemFragment_UserInterface()
{
	DisplayName = NSLOCTEXT("ItemData", "SampleName", "Item Name");
	DisplayType = NSLOCTEXT("ItemData", "SampleType", "Item Type");
	Description = NSLOCTEXT("ItemData", "SampleDescription", "Item Description");
}

FText UItemFragment_UserInterface::GetDisplayName() const
{
	return DisplayName;
}

FText UItemFragment_UserInterface::GetDisplayType() const
{
	return DisplayType;
}

FText UItemFragment_UserInterface::GetDescription() const
{
	return Description;
}

UTexture2D* UItemFragment_UserInterface::GetIcon() const
{
	return Icon;
}
