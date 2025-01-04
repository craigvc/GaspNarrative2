// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryDefaultItemMemory.h"

#include "GameFramework/NinjaInventoryItemFragment.h"

bool FInventoryDefaultItemMemory::IsCompatibleWithFragment(const UNinjaInventoryItemFragment* Fragment) const
{
	if (!Fragment)
	{
		return false;
	}
	
	const TSubclassOf<UNinjaInventoryItemFragment> OtherFragmentClass = Fragment->GetClass();
	return IsCompatibleWithFragmentClass(OtherFragmentClass);
}

bool FInventoryDefaultItemMemory::IsCompatibleWithFragmentClass(const TSubclassOf<UNinjaInventoryItemFragment>& OtherFragmentClass) const
{
	return OtherFragmentClass && FragmentClass == OtherFragmentClass;
}
