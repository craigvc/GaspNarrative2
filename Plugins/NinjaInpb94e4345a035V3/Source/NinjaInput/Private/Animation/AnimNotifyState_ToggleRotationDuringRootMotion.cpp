// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/AnimNotifyState_ToggleRotationDuringRootMotion.h"

#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UAnimNotifyState_ToggleRotationDuringRootMotion::UAnimNotifyState_ToggleRotationDuringRootMotion()
{
#if WITH_EDITORONLY_DATA
	bChangedProperty = false;
	NotifyColor = FColor(211, 221, 197);
#endif
}

void UAnimNotifyState_ToggleRotationDuringRootMotion::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	const ACharacter* Owner = Cast<ACharacter>(MeshComp->GetOwner());
	if (!IsValid(Owner))
	{
		return;
	}

	UCharacterMovementComponent* Movement = Owner->GetCharacterMovement();
	if (!IsValid(Movement) || Movement->bAllowPhysicsRotationDuringAnimRootMotion)
	{
		// No movement component or it already allows overriding rotation on Root Motion.
		return;
	}

	bChangedProperty = true;
	Movement->bAllowPhysicsRotationDuringAnimRootMotion = true;
}

void UAnimNotifyState_ToggleRotationDuringRootMotion::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (!bChangedProperty)
	{
		return;	
	}

	const ACharacter* Owner = Cast<ACharacter>(MeshComp->GetOwner());
	if (IsValid(Owner))
	{
		UCharacterMovementComponent* Movement = Owner->GetCharacterMovement();
		if (IsValid(Movement))
		{
			Movement->bAllowPhysicsRotationDuringAnimRootMotion = false;
		}
	}
}

FString UAnimNotifyState_ToggleRotationDuringRootMotion::GetNotifyName_Implementation() const
{
	return "Toggle Rotation During Root Motion";
}
