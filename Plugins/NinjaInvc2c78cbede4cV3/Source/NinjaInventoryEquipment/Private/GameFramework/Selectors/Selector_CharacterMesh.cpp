// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/Selectors/Selector_CharacterMesh.h"

#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/Character.h"

USelector_CharacterMesh::USelector_CharacterMesh()
{
	ComponentTag = Tag_Equipment_Component;
}

USceneComponent* USelector_CharacterMesh::SelectComponent_Implementation(const UNinjaEquipment* Equipment) const
{
	const APawn* PawnOwner = Equipment->GetPawn();
	if (ComponentTag.IsValid() && ensureMsgf(IsValid(PawnOwner), TEXT("Provided instance does not have a Pawn Owner")))
	{
		const FName TagName = ComponentTag.GetTagName();
		USceneComponent* SceneComponent = PawnOwner->FindComponentByTag<USceneComponent>(TagName);
		if (IsValid(SceneComponent))
		{
			return SceneComponent;
		}
	}
		
	const ACharacter* CharacterOwner = Cast<ACharacter>(Equipment->GetPawn());
	if (ensureMsgf(IsValid(CharacterOwner), TEXT("Provided instance does not have a Character Owner")))
	{
		return CharacterOwner->GetMesh();
	}

	return nullptr;
}
