// Copyright Narrative Tools 2024. 


#include "ArsenalSettings.h"

UArsenalSettings::UArsenalSettings()
{
	bHolsterWeaponOnEquip = true; 
	DefaultSaveName = "NarrativeSave";
	NumSaveSlots = 5;
	DefaultUsername = "Narrative Player";
	GameEntryMap = FSoftObjectPath(TEXT("/Script/Engine.World'/NarrativePro/Maps/DemoLevel/DemoMap.DemoMap'"));
	BBKey_Delay = FName("Delay");
	BBKey_TargetLocation = FName("TargetLocation");
	BBKey_TargetRotation = FName("TargetRotation");
	BBKey_PlayerPawn = FName("PlayerPawn");
	BBKey_AttackTarget = FName("AttackTarget");

	UIPrimaryColor = FLinearColor(0.000607, 0.672443, 0.168269, 1.000000);
	UIInvertColor = FLinearColor(0.000000, 0.009721, 0.059511, 1.000000);
	
	MasterSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Master.Master'"));
	SFXSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/SFX.SFX'"));
	UISoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/UI.UI'"));
	DialogueSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Dialogue.Dialogue'"));
	MusicSoundClass = FSoftObjectPath(TEXT("/Script/Engine.SoundClass'/NarrativePro/Assets/Audio/Classes/Music.Music'"));
}
