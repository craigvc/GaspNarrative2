// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FEquipmentMeshTypes.h"

#include "Animation/AnimInstance.h"
#include "Components/MeshComponent.h"
#include "Components/SkeletalMeshComponent.h"	
#include "GameFramework/NinjaEquipmentSceneComponentSelector.h"
#include "GameFramework/Selectors/Selector_CharacterMesh.h"

UMeshComponent* FStoredEquipmentMeshComponent::GetMeshComponent() const
{
	if (MeshComponent.IsValid() && MeshComponent->IsValidLowLevelFast())
	{
		return MeshComponent.Get();
	}

	return nullptr;
}

USkeletalMeshComponent* FStoredEquipmentAnimLayer::GetSkeletalMeshComponent() const
{
	if (MeshComponent.IsValid() && MeshComponent->IsValidLowLevelFast())
	{
		return MeshComponent.Get();
	}

	return nullptr;	
}

FEquipmentAnimLayer::FEquipmentAnimLayer()
{
	AnimInstanceLayerClass = nullptr;
	SkeletalMeshComponentSelectorClass = USelector_CharacterMesh::StaticClass();
}

bool FEquipmentAnimLayer::IsValid() const
{
	return AnimInstanceLayerClass.IsValid() && SkeletalMeshComponentSelectorClass.IsValid();
}

