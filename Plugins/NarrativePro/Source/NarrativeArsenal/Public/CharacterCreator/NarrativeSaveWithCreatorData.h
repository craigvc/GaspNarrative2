// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeSave.h"
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "CharacterCreatorConfiguration.h"
#include <Engine/SkeletalMesh.h>
#include <Materials/MaterialInterface.h>
#include "NarrativeSaveWithCreatorData.generated.h"

/**
 * A narrative save file, but we've added character creator data - the character creator level reads/writes to this.
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeSaveWithCreatorData : public UNarrativeSave
{
	GENERATED_BODY()
	
public: 

	/*Our character creator attributes*/
	UPROPERTY(BlueprintReadWrite, Category = "Creator Data")
	FCharacterCreatorAttributeSet CharacterCreatorAttributes;

	/**Our characters username we set in the character creator. If empty for some reason we'll use the default username. */
	UPROPERTY(BlueprintReadWrite, Category = "Creator Data")
	FString CharacterCreatorUsername; 

	//Clear our creator meshes and grooms - we do this usually when the form changes. 
	UFUNCTION(BlueprintCallable, Category = "Creator Data")
	virtual void ClearMeshesAndGrooms();

	///**Set a creator data mesh*/
	UFUNCTION(BlueprintCallable, Category = "Creator Data")
	virtual void SetCreatorDataMesh(class UCharacterCreatorItem_Mesh* MeshItem);

	///**Set a creator data groom*/
	UFUNCTION(BlueprintCallable, Category = "Creator Data")
	virtual void SetCreatorDataGroom(const FGameplayTag& Slot, class UGroomAsset* Groom, class UGroomBindingAsset* GroomBinding);

	/**Set a creator scalar value*/
	UFUNCTION(BlueprintCallable, Category = "Creator Data")
	virtual void SetCreatorScalarValue(const FGameplayTag& TagID, const float NewValue);

	/**Set a creator Vector value*/
	UFUNCTION(BlueprintCallable, Category = "Creator Data")
	virtual void SetCreatorVectorValue(const FGameplayTag& TagID, const FLinearColor NewValue);
};
