// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNinjaCombatCoreModule : public IModuleInterface
{
	
public:
	
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

protected:

	static void TryLoadNinjaInventoryIntegration();
	static void TryLoadNinjaFactionsIntegration();

	static void DoLoadNinjaInventoryIntegration(FModuleManager& ModuleManager);
	static void DoLoadNinjaFactionsIntegration(FModuleManager& ModuleManager);
	
};
