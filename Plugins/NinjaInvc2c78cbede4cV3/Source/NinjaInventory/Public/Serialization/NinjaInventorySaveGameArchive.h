// Ninja Bear Studio Inc., all rights reserved.
#pragma once
 
#include "CoreMinimal.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
 
class NINJAINVENTORY_API FNinjaInventorySaveGameArchive final : public FObjectAndNameAsStringProxyArchive
{
public:
	
	FNinjaInventorySaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		ArIsSaveGame = true;
	}
};