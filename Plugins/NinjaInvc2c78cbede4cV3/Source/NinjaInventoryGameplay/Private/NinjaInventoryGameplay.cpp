// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventoryGameplay.h"

#include "GameplayDebugger.h"
#include "GameplayDebugger/FGameplayDebuggerCategory_Inventory.h"

#define LOCTEXT_NAMESPACE "FNinjaInventoryGameplayModule"

void FNinjaInventoryGameplayModule::StartupModule()
{
	RegisterGameplayDebuggerCategories();
}

void FNinjaInventoryGameplayModule::ShutdownModule()
{
	UnregisterGameplayDebuggerCategories();
}

void FNinjaInventoryGameplayModule::RegisterGameplayDebuggerCategories()
{
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.RegisterCategory("Inventory", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGameplayDebuggerCategory_Inventory::MakeInstance), EGameplayDebuggerCategoryState::Disabled);
	GameplayDebuggerModule.NotifyCategoriesChanged();
#endif	
}

void FNinjaInventoryGameplayModule::UnregisterGameplayDebuggerCategories()
{
#if WITH_GAMEPLAY_DEBUGGER
	if (IGameplayDebugger::IsAvailable())
	{
		IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
		GameplayDebuggerModule.UnregisterCategory("Inventory");
		GameplayDebuggerModule.NotifyCategoriesChanged();
	}
#endif
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FNinjaInventoryGameplayModule, NinjaInventoryGameplay)