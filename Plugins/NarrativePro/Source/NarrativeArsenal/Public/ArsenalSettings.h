// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Sound/SoundWave.h>
#include "ArsenalSettings.generated.h"

/**
 * Configurable settings for Narrative Pro. 
 */
UCLASS(BlueprintType, config = Engine, defaultconfig)
class NARRATIVEARSENAL_API UArsenalSettings : public UObject
{
	GENERATED_BODY()


public: 

	UArsenalSettings();

	/** This is the default save game name */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	FString DefaultSaveName; 

	//** If empty we'll keep Unreal assigned username, but if set to a valid string, game mode will override your player to use this.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Gameplay")
	FString DefaultUsername;

	/** The map that the default main menu will load. */
	UPROPERTY(config, EditAnywhere, BlueprintReadOnly,Category = "Narrative Pro|Maps", meta=(AllowedClasses="/Script/Engine.World"))
	FSoftObjectPath GameEntryMap;

	/** The map that we'll open when the player wants to open the character creator */
	UPROPERTY(config, EditAnywhere, BlueprintReadOnly,Category = "Narrative Pro|Maps", meta=(AllowedClasses="/Script/Engine.World"))
	FSoftObjectPath CharacterCreatorMap;

	/** If true, starting a new game will load the character creator, instead of loading the entry map. (The default character creator will then throw you into the entry map when you finish creation.) */
	UPROPERTY(config, EditAnywhere, BlueprintReadOnly,Category = "Narrative Pro|Maps")
	bool bLoadCharacterCreatorOnNewGame;

	/** How many save slots the default menu should support */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	int32 NumSaveSlots;

	/** The save file name we'll use to store metadata about our main saves. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	FString MetadataSaveFileName;

	/** TargetLocation BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_TargetLocation;

	/** TargetRotation BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_TargetRotation;

	/** Delay BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_Delay;

	/** PlayerPawn BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_PlayerPawn;

	/** FollowTarget BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_FollowTarget;

	/** Attack target BB key name  */
	UPROPERTY(VisibleAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Blackboard Keys")
	FName BBKey_AttackTarget;

	/** Overall sound class */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds", meta = (AllowedClasses = "/Script/Engine.SoundClass"))
	FSoftObjectPath MasterSoundClass;

	/** SFX sound class */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds", meta = (AllowedClasses = "/Script/Engine.SoundClass"))
	FSoftObjectPath SFXSoundClass;

	/** UI sound class */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds", meta = (AllowedClasses = "/Script/Engine.SoundClass"))
	FSoftObjectPath UISoundClass;

	/** Dialogue sound class */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds", meta = (AllowedClasses = "/Script/Engine.SoundClass"))
	FSoftObjectPath DialogueSoundClass;

	/** Music sound class */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds", meta = (AllowedClasses = "/Script/Engine.SoundClass"))
	FSoftObjectPath MusicSoundClass;

	/** Default ambient gameplay music. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds")
	TSoftObjectPtr<USoundWave> GameplayMusicSoundWave;

	/** Default combat gameplay music. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds")
	TSoftObjectPtr<USoundWave> CombatMusicSoundWave;

	/** Default main menu gameplay music. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds")
	TSoftObjectPtr<USoundWave> MainMenuSoundWave;

	/** Default pause menu gameplay music. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds")
	TSoftObjectPtr<USoundWave> PauseSoundWave;

	/** Default character menu gameplay music. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Sounds")
	TSoftObjectPtr<USoundWave> CharacterCreatorSoundWave;
};
