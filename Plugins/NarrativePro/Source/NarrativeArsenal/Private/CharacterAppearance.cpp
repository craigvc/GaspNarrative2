// Copyright Narrative Tools 2024. 


#include "CharacterAppearance.h"
#include <Engine/SkinnedAssetCommon.h>

UCharacterAppearance::UCharacterAppearance()
{

}

#if WITH_EDITOR
void UCharacterAppearance::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, HeadMesh))
	{
		if (HeadMesh)
		{
			HeadMeshMaterials.Empty();

			for (auto& MeshMat : HeadMesh->GetMaterials())
			{
				HeadMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, TorsoMesh))
	{
		if (TorsoMesh)
		{
			TorsoMeshMaterials.Empty();

			for (auto& MeshMat : TorsoMesh->GetMaterials())
			{
				TorsoMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, LegsMesh))
	{
		if (LegsMesh)
		{
			LegsMeshMaterials.Empty();

			for (auto& MeshMat : LegsMesh->GetMaterials())
			{
				LegsMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, FeetMesh))
	{
		if (FeetMesh)
		{
			FeetMeshMaterials.Empty();

			for (auto& MeshMat : FeetMesh->GetMaterials())
			{
				FeetMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, BodyMesh))
	{
		if (BodyMesh)
		{
			BodyMeshMaterials.Empty();

			for (auto& MeshMat : BodyMesh->GetMaterials())
			{
				BodyMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
	else if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UCharacterAppearance, HelmetMesh))
	{
		if (HelmetMesh)
		{
			HelmetMeshMaterials.Empty();

			for (auto& MeshMat : HelmetMesh->GetMaterials())
			{
				HelmetMeshMaterials.Add(MeshMat.MaterialInterface);
			}
		}
	}
}
#endif 
