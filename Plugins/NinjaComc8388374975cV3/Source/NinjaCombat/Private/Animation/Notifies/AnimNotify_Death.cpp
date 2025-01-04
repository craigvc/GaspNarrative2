// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_Death.h"

#include "NinjaCombatTags.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

UAnimNotify_Death::UAnimNotify_Death()
{
	bEnableRagdollPhysics = false;
}

void UAnimNotify_Death::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (IsValid(MeshComp))
	{
		UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(MeshComp->GetOwner());
		if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
		{
			EnableRagdollPhysics(DamageManager);
			ICombatDamageManagerInterface::Execute_FinishDying(DamageManager);
		}

		// This will probably lead to an event in the Death Ability that may also trigger "Finish Dying".
		//
		// But the above will probably get there first, especially in local clients, which is fine, since
		// the implementation will take care of avoiding conflicting calls.
		//
		FNinjaCombatAnimNotifyHelpers::BroadcastEvent(MeshComp->GetOwner(), Tag_Combat_Event_Death_Finished);	
	}
}

void UAnimNotify_Death::EnableRagdollPhysics(UActorComponent* DamageManager) const
{
	if (bEnableRagdollPhysics)
	{
		ICombatDamageManagerInterface::Execute_EnableRagdollPhysics(DamageManager);
	}
}

FString UAnimNotify_Death::GetNotifyName_Implementation() const
{
	return "Death";
}