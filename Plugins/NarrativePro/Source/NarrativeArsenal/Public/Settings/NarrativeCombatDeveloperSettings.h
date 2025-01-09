// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UnrealFramework/NarrativeGameUserSettings.h"
#include "NarrativeCombatDeveloperSettings.generated.h"

/**
 * Combat related developer settings 
 */
UCLASS(BlueprintType, config = Engine, defaultconfig, meta = (DisplayName="Narrative - Combat Settings"))
class NARRATIVEARSENAL_API UNarrativeCombatDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:

	UNarrativeCombatDeveloperSettings();

	//**If true, damage dealt popups will appear above enemies you deal damage to. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Combat")
	bool bEnableDamageNumbers;

	//** The amount of attack tokens to grant the player on each difficulty mode. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Attack Tokens")
	TMap<ENarrativeGameplayDifficulty, int32> AvailableAttackTokens;

	//** Token stealers must be this percent of the existing distance to steal a token. IE 0.2 = steal a token if we are 0.2x the distance from the target as an existing token. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Attack Tokens", meta = (ClampMin=0.01, ClampMax=1.0))
	float StealTokenProximity;

	/** Tokens more than this many seconds old can be stolen  - nice way of giving others a chance to attack for a bit. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Attack Tokens", meta = (ClampMin=0.01))
	float TokenStealableAgeSeconds;

	//** AI use this to decide how often they should fire at each difficulty. This is a multiplier of RateOfFire. IE 3.0 = attack at 3x the rate of fire */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "NPC Attack Behaviour")
	TMap<ENarrativeGameplayDifficulty, float> NPCAttackFrequencies;

	int32 GetAttackTokensForDifficulty(ENarrativeGameplayDifficulty Difficulty) const;

	UFUNCTION(BlueprintPure, Category = "Attack Frequency")
	float GetAttackFrequencyForDifficulty(ENarrativeGameplayDifficulty Difficulty) const;

};
