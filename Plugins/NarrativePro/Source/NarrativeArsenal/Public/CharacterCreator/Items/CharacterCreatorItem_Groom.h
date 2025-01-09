// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Items/CharacterCreatorItem.h"
#include <GameplayTagContainer.h>
#include "CharacterCreatorItem_Groom.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorItem_Groom : public UCharacterCreatorItem
{
	GENERATED_BODY()
	
public:

	UCharacterCreatorItem_Groom();

	//The slot this groom will apply itself to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Groom", meta = (Categories = "Narrative.Equipment.Slot.Groom"))
	FGameplayTag Slot;

	//The groom this item applies
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<class UGroomAsset> Groom;

	//The groom binding this item applies
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<class UGroomBindingAsset> GroomBinding;
};
