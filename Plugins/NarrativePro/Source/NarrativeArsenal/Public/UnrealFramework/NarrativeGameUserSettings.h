// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "NarrativeGameUserSettings.generated.h"

UENUM(BlueprintType)
enum class ENarrativeGameplayDifficulty : uint8
{
	Easy,
	Medium,
	Hard,
	Insane
};

/**
 * Since GameUserSettings doesnt support sound class overrides, in Narrative pro we've extended it to do so.
 */
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UNarrativeGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
public:

	UNarrativeGameUserSettings();

	virtual void ApplySettings(bool bCheckForCommandLineOverrides);

	virtual void ApplySoundSettings();

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetOverallAudioVolume(const float NewOverallAudioVolume);

	UFUNCTION(BlueprintCallable, Category = Settings)
	float GetOverallAudioVolume() const;

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetDialogueAudioVolume(const float NewDialogueAudioVolume);

	UFUNCTION(BlueprintCallable, Category = Settings)
	float GetDialogueAudioVolume() const;

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetUIAudioVolume(const float NewUIAudioVolume);

	UFUNCTION(BlueprintCallable, Category = Settings)
	float GetUIAudioVolume() const;

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetSFXAudioVolume(const float NewSFXAudioVolume);

	UFUNCTION(BlueprintCallable, Category = Settings)
	float GetSFXAudioVolume() const;

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetMusicAudioVolume(const float NewMusicAudioVolume);

	UFUNCTION(BlueprintCallable, Category = Settings)
	float GetMusicAudioVolume() const;

	//Set whether or not crouching is a toggle or whether crouch key requires held. 
	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetShouldCrouchToggle(const bool bNewCrouchToggles);

	UFUNCTION(BlueprintCallable, Category = Settings)
	bool ShouldCrouchToggle();

	//Set whether or not inventory menu is set to tile. 
	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetInventoryWantsTile(const bool bNewInventoryWantsTile);

	UFUNCTION(BlueprintCallable, Category = Settings)
	bool InventoryWantsTile();

	//Set the current gameplay difficulty
	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetGameplayDifficulty(const ENarrativeGameplayDifficulty NewDifficulty);

	UFUNCTION(BlueprintCallable, Category = Settings)
	ENarrativeGameplayDifficulty GetGameplayDifficulty();

	UFUNCTION(BlueprintPure, Category = Settings)
	float GetFieldOfView();

	UFUNCTION(BlueprintCallable, Category = Settings)
	void SetFieldOfView(const float NewFieldOfView);

protected:

	UPROPERTY(config)
	float OverallAudioVolume;

	UPROPERTY(config)
	float DialogueAudioVolume;

	UPROPERTY(config)
	float UIAudioVolume;

	UPROPERTY(config)
	float SFXAudioVolume;

	UPROPERTY(config)
	float MusicAudioVolume;

	///**If true, crouch button toggles crouch, otherwise it needs to be held for as long as you require the crouch. */
	UPROPERTY(config)
	bool bCrouchToggles;

	///** Whether the inventory menu wants to display using grid or tile mode */
	UPROPERTY(config)
	bool bInventoryWantsTile;

	//The gameplay difficulty, can be read from the user settings by any gameplay elements that need it. 
	UPROPERTY(config)
	ENarrativeGameplayDifficulty GameplayDifficulty;

	///** The FOV the default camera mode will use. */
	UPROPERTY(config)
	float FieldOfView;
};
