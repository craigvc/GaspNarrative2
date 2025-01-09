// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SaveSystemDeveloperSettings.generated.h"

/**
 * Settings for configuring the Narrative Save System. 
 */
UCLASS(BlueprintType, config = Engine, defaultconfig, meta = (DisplayName="Narrative - Save System"))
class NARRATIVESAVESYSTEM_API USaveSystemDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:

	USaveSystemDeveloperSettings();

	/** If true, Narrative will automatically load the save in slot 1, provided you have a game saved in that slot.
	This is great for QA testing - it saves you having to open the pause menu and load your game every time you load in. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	bool bAutoLoadFirstSaveInEditor;

		/** The save class we'll use to save our world to disk. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Save System")
	TSubclassOf<class UNarrativeSave> SaveGameClass;

};
