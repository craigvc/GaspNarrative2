// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Types/FInventoryDefaultItemMemory.h"
#include "Types/FInventoryFragmentMemory.h"

struct FInventoryFragmentMemoryUtils
{
	/**
	 * Creates an instance fragment memory from a given source.
	 */
	template<typename T>
	static TInstancedStruct<FInventoryFragmentMemory> MakeFragmentMemory(T Source)
	{
		return TInstancedStruct<FInventoryFragmentMemory>::Make<T>(Source);
	}	
	
	/**
	 * Creates a default memory for fragments.
	 */
	template<typename T>
	static FInventoryDefaultItemMemory MakeDefaultMemory(const TSubclassOf<UNinjaInventoryItemFragment>& FragmentClass, T Source)
	{
		FInventoryDefaultItemMemory DefaultMemory;
		DefaultMemory.FragmentClass = FragmentClass;
		DefaultMemory.Memory = MakeFragmentMemory(Source);
		return DefaultMemory;
	}
};
