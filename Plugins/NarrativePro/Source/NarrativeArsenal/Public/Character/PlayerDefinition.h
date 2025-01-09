// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterDefinition.h"
#include "PlayerDefinition.generated.h"

/**
 * Defines a player character that will be player controlled 
 */
UCLASS()
class NARRATIVEARSENAL_API UPlayerDefinition : public UCharacterDefinition
{
	GENERATED_BODY()

public:

	UPlayerDefinition();

};
