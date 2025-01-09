// Copyright Narrative Tools 2024. 


#include "ArsenalSettings.h"

UArsenalSettings::UArsenalSettings()
{
	DefaultSaveName = "NarrativeSave";
	NumSaveSlots = 5;
	MetadataSaveFileName = "NarrativeSaveMetadata";
	DefaultUsername = "Narrative Player";

	GameEntryMap = FSoftObjectPath(TEXT("/Script/Engine.World'/NarrativePro/Maps/DemoLevel/DemoMap.DemoMap'"));
	CharacterCreatorMap = FSoftObjectPath(TEXT("/Script/Engine.World'/NarrativePro/CharCreator/CharacterCreator.CharacterCreator'"));
	bLoadCharacterCreatorOnNewGame = false;

	BBKey_Delay = FName("Delay");
	BBKey_TargetLocation = FName("TargetLocation");
	BBKey_TargetRotation = FName("TargetRotation");
	BBKey_PlayerPawn = FName("PlayerPawn");
	BBKey_AttackTarget = FName("AttackTarget");
	BBKey_FollowTarget = FName("FollowTarget");

	MasterSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Narrative_Master.Narrative_Master'"));
	SFXSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Narrative_SFX.Narrative_SFX'"));
	UISoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Narrative_UI.Narrative_UI'"));
	DialogueSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Narrative_Dialogue.Narrative_Dialogue'"));
	MusicSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Narrative_Music.Narrative_Music'"));

}
