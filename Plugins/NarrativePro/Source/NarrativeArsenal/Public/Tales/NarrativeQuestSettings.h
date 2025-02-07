// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NarrativeQuestSettings.generated.h"

/**
 * Runtime quest settings for narrative
 */
UCLASS(config = Engine, defaultconfig)
class NARRATIVEARSENAL_API UNarrativeQuestSettings : public UObject
{
	GENERATED_BODY()
	
public:

	UNarrativeQuestSettings();

	//When you complete a task, should its progress be reset after you complete it? This means you can design quests where you can come back to previously completed steps and re-complete them.
	UPROPERTY(EditAnywhere, config, Category = "Quest Settings")
	bool bResetTasksWhenCompleted;

};
