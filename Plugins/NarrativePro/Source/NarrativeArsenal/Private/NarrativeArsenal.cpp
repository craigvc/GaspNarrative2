// Copyright Epic Games, Inc. All Rights Reserved.

#include "NarrativeArsenal.h"
#include "NarrativeGameplayTags.h"
#include "GameplayTagsManager.h"
#include "AI/Activities/NPCActivityComponent.h"

#if WITH_GAMEPLAY_DEBUGGER
#include <GameplayDebugger.h>
#endif 

#define LOCTEXT_NAMESPACE "FNarrativeArsenalModule"

void FNarrativeArsenalModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.RegisterCategory("ActivityComponent", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGameplayDebuggerCategory_ActivityComponent::MakeInstance), EGameplayDebuggerCategoryState::EnabledInGameAndSimulate, 1);
	GameplayDebuggerModule.RegisterCategory("InteractionSlots", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGameplayDebuggerCategory_Interactable::MakeInstance), EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
	GameplayDebuggerModule.NotifyCategoriesChanged();
#endif

	FNarrativeGameplayTags::Get().InitializeNativeTags();
	UGameplayTagsManager::Get().DoneAddingNativeTags(); 
	
}

void FNarrativeArsenalModule::ShutdownModule()
{
#if WITH_GAMEPLAY_DEBUGGER
	if (IGameplayDebugger::IsAvailable())
	{
		IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
		GameplayDebuggerModule.UnregisterCategory("ActivityComponent");
		GameplayDebuggerModule.NotifyCategoriesChanged();
	}
#endif
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeArsenalModule, NarrativeArsenal)