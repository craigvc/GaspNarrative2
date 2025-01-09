// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "NarrativeUIDeveloperSettings.generated.h"

/**
 * Base class for Narrative UI settings, like global styling, etc. 
 */
UCLASS(BlueprintType, config = Engine, defaultconfig, meta = (DisplayName="Narrative - CommonUI Settings"))
class NARRATIVECOMMONUI_API UNarrativeUIDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:

	UNarrativeUIDeveloperSettings();

	/** Primary color UI elements will set themselves to.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|User Interface")
	FLinearColor UIPrimaryColor;

	/** Invert color UI elements will set themselves to.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|User Interface")
	FLinearColor UIInvertColor;

	/** Invert Accent color UI elements will set themselves to.  */
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Narrative Pro|User Interface")
	FLinearColor UIInvertAccentColor;
};
