// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include <GameFramework/PlayerController.h>
#include "Camera/NarrativeCameraComponent.h"

UNarrativeGameplayAbility::UNarrativeGameplayAbility()
{
	// Default to Instance Per Actor
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UNarrativeGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);

	if (bActivateAbilityOnGranted)
	{
		ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle, false);
	}
	
	CharacterOwner = Cast<ANarrativeCharacter>(ActorInfo->AvatarActor.Get());
}

void UNarrativeGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UNarrativeGameplayAbility::SetCameraMode(TSubclassOf<class UNarrativeCameraMode> CameraMode)
{
	if (ANarrativePlayerCharacter* PlayerCharacter = Cast<ANarrativePlayerCharacter>(GetOwningNarrativeCharacter()))
	{
		if (UNarrativeCameraComponent* Camera = PlayerCharacter->GetCameraComponent())
		{
			Camera->SetCameraMode(CameraMode);
		}
	}
}

class AController* UNarrativeGameplayAbility::GetOwningController() const
{
	if (CurrentActorInfo)
	{
		if (CurrentActorInfo->PlayerController.IsValid())
		{
			return CurrentActorInfo->PlayerController.Get();
		}

		// If we don't have a player controller, we're owned by AI, so try grab controller from AI pawn
		AActor* TestActor = CurrentActorInfo->OwnerActor.Get();
		while (TestActor)
		{
			if (AController* C = Cast<AController>(TestActor))
			{
				return C;
			}

			if (APawn* Pawn = Cast<APawn>(TestActor))
			{
				return Pawn->GetController();
			}

			TestActor = TestActor->GetOwner();
		}
	}

	return nullptr;
}

class ANarrativeCharacter* UNarrativeGameplayAbility::GetOwningNarrativeCharacter() const
{
	if (!CharacterOwner)
	{
		return Cast<ANarrativeCharacter>(GetAvatarActorFromActorInfo());
	}
	
	return CharacterOwner; 
}

class UWeaponItem* UNarrativeGameplayAbility::GetOwnerEquippedWeapon() const
{
	if (ANarrativeCharacter* Owner = GetOwningNarrativeCharacter())
	{
		return Owner->GetWeapon();
	}
	
	return nullptr; 
}

bool UNarrativeGameplayAbility::IsBot() const
{
	if (ANarrativeCharacter* OwnerChar = GetOwningNarrativeCharacter())
	{
		return !OwnerChar->IsA<ANarrativePlayerCharacter>();
	}

	return false; 
}
