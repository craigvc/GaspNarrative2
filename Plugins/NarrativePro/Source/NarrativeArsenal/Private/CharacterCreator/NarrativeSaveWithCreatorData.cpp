// Copyright Narrative Tools 2024. 


#include "CharacterCreator/NarrativeSaveWithCreatorData.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Mesh.h"


void UNarrativeSaveWithCreatorData::ClearMeshesAndGrooms()
{
	CharacterCreatorAttributes.Meshes.Empty();
	CharacterCreatorAttributes.Grooms.Empty();
}

void UNarrativeSaveWithCreatorData::SetCreatorDataMesh(class UCharacterCreatorItem_Mesh* MeshItem)
{
	if (MeshItem)
	{
		FCharacterCreatorAttribute_Mesh MeshAttribute;

		MeshAttribute.Mesh = MeshItem->Mesh.LoadSynchronous();
		MeshAttribute.bUseLeaderPose = MeshItem->bUseLeaderPose;

		//Convert the editor mesh materials options into materials  
		TArray<FCreatorMeshMaterial> NewMeshMaterials;

		for (auto& MeshMat : MeshItem->MaterialOptions)
		{
			NewMeshMaterials.Add(MeshMat.GetDefaultMaterial());
		}

		for (auto& MeshMorph : MeshItem->Morphs)
		{
			FCreatorMeshMorph NewMorph;
			NewMorph.MorphNames = MeshMorph.MorphNames;
			NewMorph.ScalarTag = MeshMorph.ScalarTag;
			MeshAttribute.Morphs.Add(NewMorph);
		}

		MeshAttribute.MeshMaterials = NewMeshMaterials;

		CharacterCreatorAttributes.Meshes.Add(MeshItem->Slot, MeshAttribute);
	}
}

void UNarrativeSaveWithCreatorData::SetCreatorDataGroom(const FGameplayTag& Slot, class UGroomAsset* Groom, class UGroomBindingAsset* GroomBinding)
{
	FCharacterCreatorAttribute_Groom GroomAttribute;

	GroomAttribute.GroomAsset = Groom;
	GroomAttribute.GroomBindingAsset = GroomBinding;

	CharacterCreatorAttributes.Grooms.Add(Slot, GroomAttribute);
}

void UNarrativeSaveWithCreatorData::SetCreatorScalarValue(const FGameplayTag& TagID, const float NewValue)
{
	float& FloatValue = CharacterCreatorAttributes.ScalarValues.FindOrAdd(TagID);

	FloatValue = NewValue;
}

void UNarrativeSaveWithCreatorData::SetCreatorVectorValue(const FGameplayTag& TagID, const FLinearColor NewValue)
{
	FLinearColor& VectorValue = CharacterCreatorAttributes.VectorValues.FindOrAdd(TagID);

	VectorValue = NewValue;
}
