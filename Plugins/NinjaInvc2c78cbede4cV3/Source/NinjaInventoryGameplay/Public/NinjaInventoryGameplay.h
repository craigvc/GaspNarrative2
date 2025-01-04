// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNinjaInventoryGameplayModule : public IModuleInterface
{
public:
	
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:

	static void RegisterGameplayDebuggerCategories();
	static void UnregisterGameplayDebuggerCategories();
	
};
