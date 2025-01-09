// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Options/CharacterCreatorOption.h"
#include <GameplayTagContainer.h>
#include "CharacterCreatorOption_Scalar.generated.h"

/**
 * A global scalar value option that can be changed in the character creator - could be anything, height, pupil size, any sort of scalar you require. 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorOption_Scalar : public UCharacterCreatorOption
{
	GENERATED_BODY()
	
public: 

	UCharacterCreatorOption_Scalar();

	//The ID you can use to reference this scalar value 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Scalar Value", meta = (Categories="Narrative.CharacterCreator.Scalars"))
	FGameplayTag ScalarTagID;

	//The min value this scalar can go to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Scalar Value")
	float MinValue;

	//The max value this scalar can go to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Scalar Value")
	float MaxValue;

	//The scalars UI slider will use this step size
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Scalar Value")
	float StepValue;

	//The default value the scalar will be set to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Scalar Value")
	float DefaultValue;
};
