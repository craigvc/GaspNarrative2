// Copyright Narrative Tools 2024. 


#include "Character/CharacterAppearance.h"
#include <Engine/SkinnedAssetCommon.h>

UCharacterAppearance::UCharacterAppearance()
{

}

#if WITH_EDITOR
void UCharacterAppearance::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	//Make sure all our meshes have materials set on them automatically 
	for (auto& MeshKVP : CharacterAttributes.Meshes)
	{
		if (MeshKVP.Value.Mesh)
		{
			if (!MeshKVP.Value.MeshMaterials.Num())
			{
				for (auto& MeshMat : MeshKVP.Value.Mesh->GetMaterials())
				{
					FCreatorMeshMaterial NewMeshMat;
					NewMeshMat.Material = MeshMat.MaterialInterface;

					MeshKVP.Value.MeshMaterials.Add(NewMeshMat);
				}
			}
		}
	}
}
#endif 
