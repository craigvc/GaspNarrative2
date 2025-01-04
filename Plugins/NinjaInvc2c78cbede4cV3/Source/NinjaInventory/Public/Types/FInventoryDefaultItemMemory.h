// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Templates/SubclassOf.h"

#if ENGINE_MINOR_VERSION < 5
#include "InstancedStruct.h"
#else
#include "StructUtils/InstancedStruct.h"
#endif

#include "FInventoryDefaultItemMemory.generated.h"

struct FInventoryFragmentMemory;
class UNinjaInventoryItemFragment;

/**
 * Default memory information for item fragments.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORY_API FInventoryDefaultItemMemory
{
	
	GENERATED_BODY()

	/** The fragment class that will use this memory. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Item Memory")
	TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;

	/** The generic struct used as memory. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Item Memory", meta=(ExcludeBaseStruct))
	TInstancedStruct<FInventoryFragmentMemory> Memory;
	
	/**
	 * Checks if this memory is compatible with a fragment.
	 */
	bool IsCompatibleWithFragment(const UNinjaInventoryItemFragment* Fragment) const;

	/**
	 * Checks if this memory is compatible with a fragment class.
	 */
	bool IsCompatibleWithFragmentClass(const TSubclassOf<UNinjaInventoryItemFragment>& OtherFragmentClass) const;	
	
};