// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "NarrativeTimeOfDaySettings.generated.h"

/**
 * Settings for the Narrative time of day system in the game state. 
 */
UCLASS(config=Game, defaultconfig, meta=(DisplayName="Narrative Time Of Day Settings"))
class NARRATIVEARSENAL_API UNarrativeTimeOfDaySettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	UNarrativeTimeOfDaySettings();

	/** If true the time of day will be updated on tick using the Day/NightLengthMinutes values */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky")
	bool bDynamicTimeOfDay;

	/** Default time of day we'll start the time at when the game state is initialized.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky", meta = (ClampMin=0.00, ClampMax=2400.0))
	float DefaultTimeOfDay;

	/** Day length in minutes, if a BP_NarrativeSky is in the level. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky", meta = (EditCondition=bDynamicTimeOfDay, EditConditionHides, ClampMin=0.01))
	float DayLengthMinutes;

	/** Night length in minutes, if a BP_NarrativeSky is in the level. */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky", meta = (EditCondition=bDynamicTimeOfDay, EditConditionHides, ClampMin=0.01))
	float NightLengthMinutes;

	/** The time the sun should rise - if you have a Narrative sky in the level it will use this */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky", meta = (EditCondition=bDynamicTimeOfDay, EditConditionHides, ClampMin=400, ClampMax=1200))
	float SunriseTime;

	/** The time the sun should set - if you have a Narrative sky in the level it will use this */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|Narrative Sky", meta = (EditCondition=bDynamicTimeOfDay, EditConditionHides, ClampMin=1300, ClampMax=2400))
	float SunsetTime;
};
