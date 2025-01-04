// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <GroomAsset.h>
#include "CharacterAppearance.generated.h"

/**
 * Defines what a character should look like without any items on - ie their default skin. 
 */
UCLASS(BlueprintType)
class NARRATIVEARSENAL_API UCharacterAppearance : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCharacterAppearance();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif 

	/**Allows for changing the base character mesh, which defaults to manny. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Base")
	class USkeletalMesh* BaseMeshOverride;

	/**The head mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Head")
	class USkeletalMesh* HeadMesh;

	/**The materials to apply to the head mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Head")
	TArray<class UMaterialInterface*> HeadMeshMaterials;

	/**The Torso mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Torso")
	class USkeletalMesh* TorsoMesh;

	/**The materials to apply to the clothing mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Torso")
	TArray<class UMaterialInterface*> TorsoMeshMaterials;
	
	/**The Legs mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Legs")
	class USkeletalMesh* LegsMesh;

	/**The materials to apply to the clothing mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Legs")
	TArray<class UMaterialInterface*> LegsMeshMaterials;

	/**The Feet mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Feet")
	class USkeletalMesh* FeetMesh;

	/**The materials to apply to the clothing mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Feet")
	TArray<class UMaterialInterface*> FeetMeshMaterials;

	/**The Body mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Body")
	class USkeletalMesh* BodyMesh;

	/**The materials to apply to the body mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Body")
	TArray<class UMaterialInterface*> BodyMeshMaterials;

	/**The Helmet mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Helmet")
	class USkeletalMesh* HelmetMesh;

	/**The materials to apply to the helmet mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Meshes|Helmet")
	TArray<class UMaterialInterface*> HelmetMeshMaterials;



	//GROOMS - WE INCLUDE GROOMS IF REQUIRED 

	/**The groom asset to apply to the hair */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> HairGroom;

	/**The groom binding asset to apply to the hair */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> HairGroomBinding;

	/**The groom asset to apply to the Beard */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> BeardGroom;

	/**The groom binding asset to apply to the Beard */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> BeardGroomBinding;

		/**The groom asset to apply to the Fuzz */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> FuzzGroom;

	/**The groom binding asset to apply to the Fuzz */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> FuzzGroomBinding;

	/**The groom asset to apply to the Moustache */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> MoustacheGroom;

	/**The groom binding asset to apply to the Moustache */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> MoustacheGroomBinding;

	/**The groom asset to apply to the Eyebrow */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> EyebrowGroom;

	/**The groom binding asset to apply to the Eyebrow */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> EyebrowGroomBinding;

		/**The groom asset to apply to the Eyelash */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomAsset> EyelashGroom;

	/**The groom binding asset to apply to the Eyelash */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grooms")
	TObjectPtr<class UGroomBindingAsset> EyelashGroomBinding;
};
