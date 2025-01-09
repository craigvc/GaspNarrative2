// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeGameUserSettings.h"
#include "AudioDevice.h"
#include <Sound/AudioSettings.h>
#include "ArsenalSettings.h"
#include <Engine/Engine.h>

UNarrativeGameUserSettings::UNarrativeGameUserSettings()
{
	OverallAudioVolume = 1.f;
	SFXAudioVolume = 1.f;
	UIAudioVolume = 1.f;
	DialogueAudioVolume = 1.f;
	MusicAudioVolume = 0.3f;
	bCrouchToggles = true;
	bInventoryWantsTile = true; 
	GameplayDifficulty = ENarrativeGameplayDifficulty::Medium;
	FieldOfView = 90.f; 
}

void UNarrativeGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides)
{
	Super::ApplySettings(bCheckForCommandLineOverrides);

	ApplySoundSettings();
}

void UNarrativeGameUserSettings::ApplySoundSettings()
{
	if (GEngine)
	{
		if (const UWorld* World = GEngine->GetCurrentPlayWorld())
		{
			if (World->bAllowAudioPlayback)
			{
				if(const UAudioSettings* EngineAudioSettings = GetDefault<UAudioSettings>())
				{
					if(const UArsenalSettings* ArsenalSettings = GetDefault<UArsenalSettings>())
					{
						if (FAudioDeviceHandle AudioDevice = World->GetAudioDevice())
						{
							//Setup assumes we keep the default mix defined in .ini
							USoundMix* DefaultMix = AudioDevice->GetDefaultBaseSoundMixModifier();

							if (USoundClass* OverallClass = Cast<USoundClass>(ArsenalSettings->MasterSoundClass.TryLoad()))
							{
								AudioDevice->SetSoundMixClassOverride(DefaultMix, OverallClass, OverallAudioVolume, 1.f, 0.f, true);
							}

							if (USoundClass* SFXClass = Cast<USoundClass>(ArsenalSettings->SFXSoundClass.TryLoad()))
							{
								AudioDevice->SetSoundMixClassOverride(DefaultMix, SFXClass, SFXAudioVolume, 1.f, 0.f, true);
							}

							if (USoundClass* UIClass = Cast<USoundClass>(ArsenalSettings->UISoundClass.TryLoad()))
							{
								AudioDevice->SetSoundMixClassOverride(DefaultMix, UIClass, UIAudioVolume, 1.f, 0.f, true);
							}

							if (USoundClass* DialogueClass = Cast<USoundClass>(ArsenalSettings->DialogueSoundClass.TryLoad()))
							{
								AudioDevice->SetSoundMixClassOverride(DefaultMix, DialogueClass, DialogueAudioVolume, 1.f, 0.f, true);
							}

							if (USoundClass* MusicClass = Cast<USoundClass>(ArsenalSettings->MusicSoundClass.TryLoad()))
							{
								AudioDevice->SetSoundMixClassOverride(DefaultMix, MusicClass, MusicAudioVolume, 1.f, 0.f, true);
							}
						}
					}
				}
			}
		}
	}
}

void UNarrativeGameUserSettings::SetOverallAudioVolume(const float NewOverallAudioVolume)
{
	OverallAudioVolume = NewOverallAudioVolume;
}

float UNarrativeGameUserSettings::GetOverallAudioVolume() const
{
	return OverallAudioVolume;
}

void UNarrativeGameUserSettings::SetDialogueAudioVolume(const float NewDialogueAudioVolume)
{
	DialogueAudioVolume = NewDialogueAudioVolume;
}

float UNarrativeGameUserSettings::GetDialogueAudioVolume() const
{
	return DialogueAudioVolume;
}

void UNarrativeGameUserSettings::SetUIAudioVolume(const float NewUIAudioVolume)
{
	UIAudioVolume = NewUIAudioVolume;
}

float UNarrativeGameUserSettings::GetUIAudioVolume() const
{
	return UIAudioVolume;
}

void UNarrativeGameUserSettings::SetSFXAudioVolume(const float NewSFXAudioVolume)
{
	SFXAudioVolume = NewSFXAudioVolume;
}

float UNarrativeGameUserSettings::GetSFXAudioVolume() const
{
	return SFXAudioVolume;
}

void UNarrativeGameUserSettings::SetMusicAudioVolume(const float NewMusicAudioVolume)
{
	MusicAudioVolume = NewMusicAudioVolume;
}

float UNarrativeGameUserSettings::GetMusicAudioVolume() const
{
	return MusicAudioVolume;
}

void UNarrativeGameUserSettings::SetShouldCrouchToggle(const bool bNewCrouchToggles)
{
	bCrouchToggles =  bNewCrouchToggles;
}

bool UNarrativeGameUserSettings::ShouldCrouchToggle()
{
	return bCrouchToggles;
}

void UNarrativeGameUserSettings::SetInventoryWantsTile(const bool bNewInventoryWantsTile)
{
	bInventoryWantsTile = bNewInventoryWantsTile;
}

bool UNarrativeGameUserSettings::InventoryWantsTile()
{
	return bInventoryWantsTile;
}

void UNarrativeGameUserSettings::SetGameplayDifficulty(const ENarrativeGameplayDifficulty NewDifficulty)
{
	GameplayDifficulty = NewDifficulty;
}

ENarrativeGameplayDifficulty UNarrativeGameUserSettings::GetGameplayDifficulty()
{
	return GameplayDifficulty;
}

float UNarrativeGameUserSettings::GetFieldOfView()
{
	return FieldOfView;
}

void UNarrativeGameUserSettings::SetFieldOfView(const float NewFieldOfView)
{
	FieldOfView = NewFieldOfView;
}
