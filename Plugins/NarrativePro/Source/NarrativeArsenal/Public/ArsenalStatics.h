// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime/AIModule/Classes/GenericTeamAgentInterface.h>
#include "UnrealFramework/NarrativeGameUserSettings.h"
#include "ArsenalStatics.generated.h"

/**
 * Useful BP exposed functions for Narrative Pro. 
 */
UCLASS()
class NARRATIVEARSENAL_API UArsenalStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	//Checks we're the same team, not just that we're friendly with each other.
	UFUNCTION(BlueprintPure, Category = "Teams")
	static bool IsSameTeam(const AActor* TestActor, const AActor* Target);

	UFUNCTION(BlueprintPure, Category = "Teams")
	static ETeamAttitude::Type GetAttitude(const AActor* TestActor, const AActor* Target);

	//Get the key the NPC needs to be at for the first frame of the cinematic. We use this to move NPCs into the right location before we start a sequence that moves them. 
	UFUNCTION(BlueprintPure, Category = "Cinematics")
	static FTransform GetNPCSequenceStartTransform(class ULevelSequence* Sequence, class UNPCDefinition* NPC);

	//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UArsenalSettings* GetNarrativeProSettings();

	//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  
	UFUNCTION(BlueprintPure, Category = "Settings")
	static FName GetGameEntryMapName();

	//Return the narrative game user settings
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UNarrativeGameUserSettings* GetNarrativeGameUserSettings(); 

	//Return the current gameplay difficulty level
	UFUNCTION(BlueprintPure, Category = "Settings")
	static ENarrativeGameplayDifficulty GetGameplayDifficultyLevel();

};
