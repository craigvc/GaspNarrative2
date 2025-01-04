// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/NinjaInventoryContainerViewModel.h"

void UNinjaInventoryContainerViewModel::SetContainer(UNinjaInventoryContainer* NewContainer)
{
	Container = NewContainer;
	InitializeData();
}
