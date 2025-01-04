// Copyright Narrative Tools 2024. 

#include "NarrativeInteraction.h"
#include <UObject/CoreRedirects.h>

#define LOCTEXT_NAMESPACE "FNarrativeInteractionModule"

void FNarrativeInteractionModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FNarrativeInteractionModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNarrativeInteractionModule, NarrativeInteraction)