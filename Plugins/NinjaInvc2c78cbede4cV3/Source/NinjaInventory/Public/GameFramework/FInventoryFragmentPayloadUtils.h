// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "Interfaces/Aspects/OperableItemInterface.h"

struct FInventoryFragmentPayloadUtils
{
	/**
	 * Creates an instance fragment payload from a given source.
	 */
	template<typename T>
	static TInstancedStruct<FInventoryFragmentPayload> MakeFragmentPayload(T Source)
	{
		return TInstancedStruct<FInventoryFragmentPayload>::Make<T>(Source);
	}	
};
