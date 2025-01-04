// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_Ragdoll.h"

#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

UAnimNotify_Ragdoll::UAnimNotify_Ragdoll()
{
}

void UAnimNotify_Ragdoll::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (IsValid(MeshComp))
	{
		UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(MeshComp->GetOwner());
		if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
		{
			ICombatDamageManagerInterface::Execute_EnableRagdollPhysics(DamageManager);
		}
	}
}

FString UAnimNotify_Ragdoll::GetNotifyName_Implementation() const
{
	return "Ragdoll";
}
