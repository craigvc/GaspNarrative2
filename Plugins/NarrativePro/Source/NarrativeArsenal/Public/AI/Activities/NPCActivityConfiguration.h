// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NPCActivityConfiguration.generated.h"

/**
 * Defines what activities an NPC can do, and what goal generators they will have.
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UNPCActivityConfiguration : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UNPCActivityConfiguration();

	//The fallback activity to run if we don' have a valid activity in our activity groups to run 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TObjectPtr<class UNPCActivity> FallbackActivity; 

	//The activities the NPC can run
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TArray<TObjectPtr<class UActivityGroup>> ActivityGroups; 

	//The goal generators the NPC can use to generate goals - you can add your own goals manually, goals do not have to be added via generators if you dont want 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Activity Group")
	TArray<TObjectPtr<class UNPCGoalGenerator>> GoalGenerators; 

};
