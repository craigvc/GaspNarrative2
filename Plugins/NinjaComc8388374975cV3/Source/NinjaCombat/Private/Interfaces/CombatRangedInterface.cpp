// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/CombatRangedInterface.h"

#include "NinjaCombatTags.h"
#include "Components/MeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"

UMeshComponent* ICombatRangedInterface::GetProjectileSourceMesh_Implementation(FName SocketName) const
{
	UMeshComponent* MeshComponent = nullptr;
	
	const AActor* ActorSelf = Cast<AActor>(this);
	if (ActorSelf != nullptr)
	{
		const FName Tag = Tag_Combat_Component_ProjectileSource.GetTag().GetTagName();
		MeshComponent = ActorSelf->FindComponentByTag<UMeshComponent>(Tag);
	}

	if (MeshComponent == nullptr)
	{
		const ACharacter* CharacterSelf = Cast<ACharacter>(this);
		if (CharacterSelf != nullptr)
        {
			MeshComponent = CharacterSelf->GetMesh();
        }
	}
	
	return MeshComponent;
}
