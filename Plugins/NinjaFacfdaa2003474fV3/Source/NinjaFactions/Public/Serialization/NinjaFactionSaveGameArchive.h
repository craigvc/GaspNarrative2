// Ninja Bear Studio Inc., all rights reserved.
#pragma once
 
#include "CoreMinimal.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
 
class NINJAFACTIONS_API FNinjaFactionSaveGameArchive final : public FObjectAndNameAsStringProxyArchive
{
public:
	
	FNinjaFactionSaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		ArIsSaveGame = true;
	}
};