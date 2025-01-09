// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Options/CharacterCreatorOption.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Groom.h"
#include "CharacterCreatorOption_Groom.generated.h"

/**
 * A groom option, eyelashes, a moustache, beard etc. Probably not something you'll use in a shipped game as grooms are very expensive but nice to have the option there! 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorOption_Groom : public UCharacterCreatorOption
{
	GENERATED_BODY()
	
public: 

	UCharacterCreatorOption_Groom();

	 //The grooms you can select for this option
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Attribute")
	TArray<TObjectPtr<UCharacterCreatorItem_Groom>> Grooms;

};
