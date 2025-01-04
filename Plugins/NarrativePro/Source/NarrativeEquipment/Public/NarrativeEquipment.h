// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNarrativeEquipmentModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
