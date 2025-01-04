// Copyright Narrative Tools 2024. 


#include "SaveSystemStatics.h"

void USaveSystemStatics::CreateSaveGuid(FGuid& OutGuid)
{
	if (!OutGuid.IsValid())
	{
		OutGuid = FGuid::NewGuid();
	}
}
