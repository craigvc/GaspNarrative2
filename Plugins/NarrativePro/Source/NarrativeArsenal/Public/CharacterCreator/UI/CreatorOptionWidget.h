// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterCreator/Options/CharacterCreatorOption.h"
#include "CreatorOptionWidget.generated.h"

/**
 * Base class for an option widget that allows us to edit a character creator option.
 */
UCLASS()
class NARRATIVEARSENAL_API UCreatorOptionWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UCreatorOptionWidget(const FObjectInitializer& ObjectInitializer);

public:

	//The creator option that was passed in to this widget. 
	UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category = "Narrative Character Creator")
	TObjectPtr<UCharacterCreatorOption> CreatorOption;
	 
};
