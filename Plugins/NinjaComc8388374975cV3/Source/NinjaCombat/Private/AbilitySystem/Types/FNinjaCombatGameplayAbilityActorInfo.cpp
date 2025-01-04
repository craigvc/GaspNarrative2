// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Types/FNinjaCombatGameplayAbilityActorInfo.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Animation/AnimInstance.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"

void FNinjaCombatGameplayAbilityActorInfo::InitFromActor(AActor* InOwnerActor, AActor* InAvatarActor, UAbilitySystemComponent* InAbilitySystemComponent)
{
    // Using typedef Super from header.
    Super::InitFromActor(InOwnerActor, InAvatarActor, InAbilitySystemComponent);

    if (InAvatarActor != nullptr)
    {
    	SkeletalMeshComponent = UNinjaCombatFunctionLibrary::GetCombatMesh(InAvatarActor);
    	AnimInstance = UNinjaCombatFunctionLibrary::GetAnimationInstance(InAvatarActor);
    	CombatManagerComponent = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(InAvatarActor);
    }
}

void FNinjaCombatGameplayAbilityActorInfo::ClearActorInfo()
{
    // Using typedef Super from header.
    Super::ClearActorInfo();

	SkeletalMeshComponent.Reset();
	AnimInstance.Reset();
	CombatManagerComponent.Reset();
}
