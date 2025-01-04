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

	///**If true, equipped weapons will be holstered upon equip. Otherwise, they will be out on equip. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Gameplay Functionality")
	bool bHolsterWeaponOnEquip;

	//** If empty we'll keep Unreal assigned username, but if set to a valid string, game mode will override your player to use this.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Gameplay Functionality")
	FString DefaultUsername;

	/** The map that the default main menu will load. */
	UPROPERTY(config, EditAnywhere, Category = "Narrative Pro|Maps", meta=(AllowedClasses="/Script/Engine.World"))
	FSoftObjectPath GameEntryMap;

	/** This is the default save game name */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	FString DefaultSaveName; 

	/** How many save slots the default menu should support */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	int32 NumSaveSlots;

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

	/** Primary color UI elements will set themselves to.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|User Interface")
	FLinearColor UIPrimaryColor;

	/** Primary color UI elements will set themselves to.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|User Interface")
	FLinearColor UIInvertColor;
};
