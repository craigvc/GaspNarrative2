﻿// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNinjaCombatAIModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
