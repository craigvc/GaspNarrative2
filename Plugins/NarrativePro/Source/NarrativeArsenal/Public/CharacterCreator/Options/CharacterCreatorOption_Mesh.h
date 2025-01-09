// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Options/CharacterCreatorOption.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Mesh.h"
#include "CharacterCreatorOption_Mesh.generated.h"

/***/
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorOption_Mesh : public UCharacterCreatorOption
{
	GENERATED_BODY()

public:

	 UCharacterCreatorOption_Mesh();

	 //The meshes you can select for this option
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Attribute")
	TArray<TObjectPtr<UCharacterCreatorItem_Mesh>> Meshes;
};
