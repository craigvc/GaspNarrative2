// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Options/CharacterCreatorOption.h"
#include <GameplayTagContainer.h>
#include "CharacterCreatorOption_Vector.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorOption_Vector : public UCharacterCreatorOption
{
	GENERATED_BODY()
public: 

	UCharacterCreatorOption_Vector();

	//The ID you can use to reference this Vector value 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Vector Value", meta = (Categories="Narrative.CharacterCreator.Vectors"))
	FGameplayTag VectorTagID;

	//The values that can be selected for this option - value will default to first color in the swatch. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Vector Value")
	TObjectPtr<class UCharacterCreatorColorSwatch> AvailableOptions;

};
