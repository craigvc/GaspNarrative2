// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeAssetManager.h"
#include "AbilitySystemGlobals.h"
#include "NarrativeGameplayTags.h"
#include <Engine/Engine.h>

UNarrativeAssetManager& UNarrativeAssetManager::Get()
{
	UNarrativeAssetManager* Singleton = Cast<UNarrativeAssetManager>(GEngine->AssetManager);

	if (Singleton)
	{
		return *Singleton;
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be NarrativeAssetManager!"));
		return *NewObject<UNarrativeAssetManager>();	 // never calls this
	}
}

void UNarrativeAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	InitializeGAS();
}

void UNarrativeAssetManager::InitializeGAS()
{
	UAbilitySystemGlobals::Get().InitGlobalData();

	//Initialize our tag manager - we now do this in the module
	
}
