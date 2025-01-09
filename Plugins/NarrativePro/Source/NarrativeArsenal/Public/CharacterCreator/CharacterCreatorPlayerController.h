// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterCreatorPlayerController.generated.h"

/**
 * Base class for character creator PC, decided to use a cpp base for this as updating save file in BP was annoying with regards to refs etc. 
 */
UCLASS()
class NARRATIVEARSENAL_API ACharacterCreatorPlayerController : public APlayerController
{
	GENERATED_BODY()
	
};
