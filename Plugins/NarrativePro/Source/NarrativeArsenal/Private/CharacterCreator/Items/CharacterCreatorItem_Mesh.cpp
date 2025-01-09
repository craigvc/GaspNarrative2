// Copyright Narrative Tools 2024. 


#include "CharacterCreator/Items/CharacterCreatorItem_Mesh.h"
#include "Engine/SkinnedAssetCommon.h"


#define LOCTEXT_NAMESPACE "CharacterCreatorItem_Mesh"

UCharacterCreatorItem_Mesh::UCharacterCreatorItem_Mesh()
{
	ItemDisplayName = LOCTEXT("MeshDisplayName", "Mesh Item");
	bUseLeaderPose = true; 
}

FCharacterCreatorMeshMaterialParam::FCharacterCreatorMeshMaterialParam()
{

}

#if WITH_EDITOR

void UCharacterCreatorItem_Mesh::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterCreatorItem_Mesh, Mesh))
	{
		if (USkeletalMesh* LoadedMesh = Mesh.LoadSynchronous())
		{
			MaterialOptions.Empty();

			int32 Idx = 0;
			for (auto& MeshMat : LoadedMesh->GetMaterials())
			{
				FCreatorMeshMaterialOption MeshMaterial;
				MeshMaterial.Material = MeshMat.MaterialInterface;
				MeshMaterial.MaterialIdx = Idx;

				MaterialOptions.Add(MeshMaterial);

				++Idx;
			}
		}
	}
}
#endif

#undef LOCTEXT_NAMESPACE