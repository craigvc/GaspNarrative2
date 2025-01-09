// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CharacterCreator/Items/CharacterCreatorItem.h"
#include <GameplayTagContainer.h>
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include <CharacterCreator/CreatorColorSwatch.h>
#include <Engine/SkeletalMesh.h>
#include <Materials/MaterialInterface.h>
#include "CharacterCreatorItem_Mesh.generated.h"


USTRUCT(BlueprintType)
struct FCharacterCreatorMeshMaterialParam
{
	GENERATED_BODY()

	FCharacterCreatorMeshMaterialParam();

	
	////The ID of this param
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//FName ParameterID;

	////The display name we'll give this in the creator
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//FText ParameterDisplayName;

	//The parameters to effect - this is an array so you can effect multiple parameters with the one value if needed. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	TArray<FName> ParameterNames;
};

USTRUCT(BlueprintType)
struct FCharacterCreatorMeshMaterialParam_Scalar : public FCharacterCreatorMeshMaterialParam
{
	GENERATED_BODY()

	FCharacterCreatorMeshMaterialParam_Scalar(){};

	////The default value of the param
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//float DefaultValue;
	//
	////The min value we can slide the scalar to 
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//float MinValue;

	////The max value we can slide the scalar to 
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//float MaxValue;

	//If a scalar tagID is set instead of showing an option to the player we'll drive this param via this tag
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame, Category = "Mesh Material", meta = (Categories="Narrative.CharacterCreator.Scalars"))
	FGameplayTag ScalarTagID;
};

USTRUCT(BlueprintType)
struct FCharacterCreatorMeshMaterialParam_Vector : public FCharacterCreatorMeshMaterialParam
{
	GENERATED_BODY()

	 FCharacterCreatorMeshMaterialParam_Vector(){};

	//The available options this param can be set to - default will be set to Options[0]
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	//TObjectPtr<class UCharacterCreatorColorSwatch> AvailableOptions;

	//If a vector tagID is set instead of showing an option to the player we'll drive this param via this tag
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame, Category = "Mesh Material", meta = (Categories="Narrative.CharacterCreator.Vectors"))
	FGameplayTag VectorTagID;

};

USTRUCT(BlueprintType)
struct FCreatorMeshMorphOption
{
	GENERATED_BODY()

	FCreatorMeshMorphOption(){};

	//The scalar value we'll drive the morph with 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Morph Option", meta = (Categories="Narrative.CharacterCreator.Scalars"))
	FGameplayTag ScalarTag;

	//The morph names 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Morph Option")
	TArray<FName> MorphNames;

};

USTRUCT(BlueprintType)
struct FCreatorMeshMaterialOption
{
	GENERATED_BODY()

	FCreatorMeshMaterialOption(){};

	//The material to apply
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	TSoftObjectPtr<class UMaterialInterface> Material;

	//The index of the material on the mesh
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	int32 MaterialIdx;

	//Any scalar values we can change on the material
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	TArray<FCharacterCreatorMeshMaterialParam_Scalar> ScalarMaterialParams;

	//Any vector params we can change on the material
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh Material")
	TArray<FCharacterCreatorMeshMaterialParam_Vector> VectorMaterialParams;

	FCreatorMeshMaterial GetDefaultMaterial() const 
	{
		FCreatorMeshMaterial NewMeshMat;
		NewMeshMat.Material = Material.LoadSynchronous(); // todo do we want load here... 
		
		for (auto& OptionVParam : VectorMaterialParams)
		{
			FCreatorMeshMaterialParam_Vector VParam;
			//VParam.ParameterID = OptionVParam.ParameterID;
			VParam.ParameterNames = OptionVParam.ParameterNames;
			VParam.VectorTagID = OptionVParam.VectorTagID;

			NewMeshMat.VectorParams.Add(VParam);
		}

		for (auto& OptionSParam : ScalarMaterialParams)
		{
			FCreatorMeshMaterialParam_Scalar SParam;
			SParam.ParameterNames = OptionSParam.ParameterNames;
			SParam.ScalarTagID = OptionSParam.ScalarTagID;

			NewMeshMat.ScalarParams.Add(SParam);
		}

		return NewMeshMat;
	};

};

/**
 *	The base class for a mesh item we can select to apply to the player. A mesh item consists of the slot we'll apply that mesh to,
 * the mesh itself, the materials to go on the mesh, and what parameters can be tweaked on those materials. 
 */
UCLASS()
class NARRATIVEARSENAL_API UCharacterCreatorItem_Mesh : public UCharacterCreatorItem
{
	GENERATED_BODY()
		
public:

	UCharacterCreatorItem_Mesh();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif 

	//The slot this mesh will apply itself to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh", meta = (Categories = "Narrative.Equipment.Slot.Mesh"))
	FGameplayTag Slot;

	//The mesh this option will set the slot mesh to 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<class USkeletalMesh> Mesh;

	//Should this mesh use the leader pose component or just do its own thing instead 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	bool bUseLeaderPose;

	//The materials that can be selected for this mesh. Also contains parameters we can change on the material 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TArray<FCreatorMeshMaterialOption> MaterialOptions;

	//The morphs to apply to the material 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TArray<FCreatorMeshMorphOption> Morphs;

	//Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TArray<TObjectPtr<class UCharacterCreatorOption_Scalar>> ScalarOptions;

	//Meshes can optionally nest scalar and vector options within themselves - ie hoodie has Hoodie Color A vector option in it, etc. 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	TArray<TObjectPtr<class UCharacterCreatorOption_Vector>> VectorOptions;

	//Other mesh options that must be applied if this one is - we use this for metahumans, if we change the 
	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Mesh")
	//TArray<TObjectPtr<UCharacterCreatorMesh>> AdditionalOptions;
};
