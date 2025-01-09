// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterCreatorOption.generated.h"



/**Creator sections consist of options - this is the base for a creator option. */
UCLASS(Abstract, Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorOption : public UDataAsset
{
	GENERATED_BODY()

public:

	 UCharacterCreatorOption();

	  //The display name for this option - it is up to the option widget whether it wants to show this or not
	 UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Creator Option")
	 FText OptionDisplayName;

};
