// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterCreatorItem.generated.h"


/**
 * Some options like grooms and meshes show a box of items you can select for the option. This is the base class for one of those items. 
 */
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UCharacterCreatorItem : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterCreatorItem();

	//The items display name 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	FText ItemDisplayName;

	//The items thumbnail 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TObjectPtr<class UTexture2D> ItemThumbnail;

};