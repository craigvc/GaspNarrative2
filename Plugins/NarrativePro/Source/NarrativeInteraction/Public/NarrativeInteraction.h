// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNarrativeInteractionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
