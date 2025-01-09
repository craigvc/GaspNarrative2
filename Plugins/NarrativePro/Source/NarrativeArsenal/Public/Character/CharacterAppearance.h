// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <GroomAsset.h>
#include <GameplayTagContainer.h>
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "CharacterAppearance.generated.h"

/**
 * Defines what a character should look like without any items on - ie their default skin. 
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UCharacterAppearanceBase : public UDataAsset
{
	GENERATED_BODY()

public:


};

/**
 * Defines what a character should look like without any items on - ie their default skin.
 * This is the standard appearance asset, useful for metahumans. For more custom character types, simply subclass UCharacterAppearanceBase. 
 * You can do this in blueprint if required. 
 */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API UCharacterAppearance : public UCharacterAppearanceBase
{
	GENERATED_BODY()
	
public:

	UCharacterAppearance();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif 

	/** The attribute set for the character */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Appearance|Attributes")
	FCharacterCreatorAttributeSet CharacterAttributes;

};
