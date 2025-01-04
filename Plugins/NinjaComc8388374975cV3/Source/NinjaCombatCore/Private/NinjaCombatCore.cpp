// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatCore.h"

#include "NinjaCombatLog.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FNinjaCombatCoreModule"

void FNinjaCombatCoreModule::StartupModule()
{
	TryLoadNinjaInventoryIntegration();
	TryLoadNinjaFactionsIntegration();
}

void FNinjaCombatCoreModule::TryLoadNinjaInventoryIntegration()
{
	auto& ModuleManager = FModuleManager::Get();
	if (ModuleManager.IsModuleLoaded("NinjaInventory"))
	{
		DoLoadNinjaInventoryIntegration(ModuleManager);
	}
	else
	{
		ModuleManager.OnModulesChanged().AddLambda([&ModuleManager](const FName Name, const EModuleChangeReason Reason)
		{
			if (Name == "NinjaInventory" && Reason == EModuleChangeReason::ModuleLoaded)
			{
				DoLoadNinjaInventoryIntegration(ModuleManager);
			}
		});
	}
}

void FNinjaCombatCoreModule::DoLoadNinjaInventoryIntegration(FModuleManager& ModuleManager)
{
	ModuleManager.LoadModule("NinjaCombatInventory");
	UE_LOG(LogNinjaCombat, Log, TEXT("Enabled Ninja Inventory integration."));
}

void FNinjaCombatCoreModule::TryLoadNinjaFactionsIntegration()
{
	auto& ModuleManager = FModuleManager::Get();
	if (ModuleManager.IsModuleLoaded("NinjaFactions"))
	{
		DoLoadNinjaFactionsIntegration(ModuleManager);
	}
	else
	{
		ModuleManager.OnModulesChanged().AddLambda([&ModuleManager](const FName Name, const EModuleChangeReason Reason)
		{
			if (Name == "NinjaFactions" && Reason == EModuleChangeReason::ModuleLoaded)
			{
				DoLoadNinjaFactionsIntegration(ModuleManager);
			}
		});
	}
}

void FNinjaCombatCoreModule::DoLoadNinjaFactionsIntegration(FModuleManager& ModuleManager)
{
	ModuleManager.LoadModule("NinjaCombatFactions");
	UE_LOG(LogNinjaCombat, Log, TEXT("Enabled Ninja Factions integration."));
}

void FNinjaCombatCoreModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FNinjaCombatCoreModule, NinjaCombatCore)