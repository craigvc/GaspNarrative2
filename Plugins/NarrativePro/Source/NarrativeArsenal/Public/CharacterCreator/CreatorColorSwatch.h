// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreatorColorSwatch.generated.h"

/**
 * Holds a collection of colours, used by the character creator 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorColorSwatch : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterCreatorColorSwatch();

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Swatch Colors")
	TArray<FLinearColor> Colors; 

	FLinearColor GetColor(const uint32 Color) const;

};
