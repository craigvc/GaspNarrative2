// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Modules/ModuleManager.h"

#define TraceChannel_NarrativeInteraction ECC_GameTraceChannel1;
#define TraceChannel_NarrativeWeapon ECC_GameTraceChannel2;

class FNarrativeArsenalModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UENUM(BlueprintType)
enum class ENarrativeAbilityInputID : uint8
{
	// None - no input defined 
	None			UMETA(DisplayName = "None"),
	// Confirm action for abilities
	Confirm			UMETA(DisplayName = "Confirm"),
	// Cancel action for abilities 
	Cancel			UMETA(DisplayName = "Cancel"),
	// 3 LMB - Generic attack ability bound to attack slot 
	Attack		UMETA(DisplayName = "Attack"),
	// 4 RMB - Generic ability bound to alt attack slot (aim for firearms, block for melee, etc)
	AltAttack		UMETA(DisplayName = "AltAttack"),
	// 5 Q - Generic ability bound to ability1 slot
	Ability1		UMETA(DisplayName = "Ability1"),
	// 6 E - Generic ability bound to ability2 slot
	Ability2		UMETA(DisplayName = "Ability2"),
	// 7 F - Generic ability bound to Ability3 slot
	Ability3		UMETA(DisplayName = "Ability3"),
	// 8 R - reloads if our weapon supports 
	Reload		UMETA(DisplayName = "Reload"),
	// Space bar - Jumps
	Jump			UMETA(DisplayName = "Jump"),
	// L-Ctrl - Crouch
	Crouch			UMETA(DisplayName = "Crouch"),
	// Left shift - sprint
	Sprint			UMETA(DisplayName="Sprint")
};

/**A list of all affiliations in the game. Feel free to add more to this array as you require them. */
UENUM(BlueprintType)
enum class ENarrativeFactionID : uint8
{
	//This person doesn't have an affiliation. 
	None,
	//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. 
	Bandits,
	//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. 
	Heroes,
	//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. 
	Civilians,
	//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. 
	Soldiers
};