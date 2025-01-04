// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/NinjaCombatAnimInstance.h"

#include "KismetAnimationLibrary.h"
#include "NinjaCombatDelegates.h"
#include "NinjaCombatFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "Kismet/KismetMathLibrary.h"

UNinjaCombatAnimInstance::UNinjaCombatAnimInstance()
{
	bInAir = false;
	bCrouching = false;
	bAccelerating = false;
	bMoving = false;
	bStrafing = false;
	bBlocking = false;
	bStartedMoving = false;
	bStaggered = false;
	bDead = false;
	Acceleration = 0.f;
	LastFrameAcceleration = 0.f;
	Speed = 0.f;
	DisplacementSpeed = 0.f;
	Direction = 0.f;
	FullBodyBlend = 1.f;
	UpperBodyBlend = 1.f;
	Velocity = FVector::ZeroVector;
	LastWorldLocation = FVector::ZeroVector;
}

void UNinjaCombatAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	CharacterOwnerPtr = Cast<ACharacter>(TryGetPawnOwner());
	CharacterMovementPtr = IsValid(TryGetCharacterOwner()) ? CharacterOwnerPtr->GetCharacterMovement() : nullptr;
	
	BindToCombatSystem();
}

void UNinjaCombatAnimInstance::NativeThreadSafeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	LastFrameAcceleration = Acceleration;
	
	CalculateLocomotionValues(DeltaSeconds);
	CalculateBlendValues(DeltaSeconds);
}

void UNinjaCombatAnimInstance::NativeUninitializeAnimation()
{
	Super::NativeUninitializeAnimation();
	UnbindFromCombatSystem();
}

ACharacter* UNinjaCombatAnimInstance::TryGetCharacterOwner() const
{
	if (CharacterOwnerPtr.IsValid() && CharacterOwnerPtr->IsValidLowLevelFast())
	{
		return CharacterOwnerPtr.Get();
	}

	return nullptr;	
}

UCharacterMovementComponent* UNinjaCombatAnimInstance::GetCharacterMovement() const
{
	if (CharacterMovementPtr.IsValid() && CharacterMovementPtr->IsValidLowLevelFast())
	{
		return CharacterMovementPtr.Get();
	}

	return nullptr;	
}

void UNinjaCombatAnimInstance::BindToCombatSystem()
{
	const ACharacter* CharacterOwner = TryGetCharacterOwner();
	if (IsValid(CharacterOwner))
	{
		UActorComponent* TargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetComponent))
		{
			FCombatTargetChangedDelegate Delegate;
			Delegate.BindDynamic(this, &ThisClass::HandleCombatTargetChanged);
			ICombatTargetManagerInterface::Execute_BindToCombatTargetChangedDelegate(TargetComponent, Delegate);
			bStrafing = ICombatTargetManagerInterface::Execute_HasCombatTarget(TargetComponent);
		}

		UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
		{
			FStaggeredStateChangedDelegate StaggeredDelegate;
			StaggeredDelegate.BindDynamic(this, &ThisClass::HandleStaggeredStateChanged);
			ICombatDamageManagerInterface::Execute_BindToStaggerStateChangedDelegate(DamageComponent, StaggeredDelegate);
			bStaggered = ICombatDamageManagerInterface::Execute_IsStaggered(DamageComponent);

			FOwnerDiedDelegate DyingDelegate;
			DyingDelegate.BindDynamic(this, &ThisClass::HandleDyingState);
			ICombatDamageManagerInterface::Execute_BindToOwnerDiedDelegate(DamageComponent, DyingDelegate);
			bDead = ICombatDamageManagerInterface::Execute_IsDead(DamageComponent);
		}

		UActorComponent* DefenseComponent = UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidDefenseManagerComponent(DefenseComponent))
		{
			FBlockingStateChangedDelegate Delegate;
			Delegate.BindDynamic(this, &ThisClass::HandleBlockingStateChanged);
			ICombatDefenseManagerInterface::Execute_BindToBlockingStateChangedDelegate(DefenseComponent, Delegate);
			bBlocking = ICombatDefenseManagerInterface::Execute_IsBlocking(DefenseComponent);		
		}
	}
}

void UNinjaCombatAnimInstance::UnbindFromCombatSystem() const
{
	const ACharacter* CharacterOwner = TryGetCharacterOwner();
	if (IsValid(CharacterOwner))
	{
		UActorComponent* TargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetComponent))
		{
			ICombatTargetManagerInterface::Execute_UnbindFromTargetChangedDelegate(TargetComponent, this);
		}

		UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
		{
			ICombatDamageManagerInterface::Execute_UnbindFromStaggerStateChangedDelegate(DamageComponent, this);
			ICombatDamageManagerInterface::Execute_UnbindFromOwnerDiedDelegate(DamageComponent, this);
		}
		
		UActorComponent* DefenseComponent = UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(CharacterOwner);
		if (UNinjaCombatFunctionLibrary::IsValidDefenseManagerComponent(DefenseComponent))
		{
			ICombatDefenseManagerInterface::Execute_UnbindFromBlockingStateChangedDelegate(DefenseComponent, this);
		}
	}
}

void UNinjaCombatAnimInstance::HandleCombatTargetChanged_Implementation(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor*)
{
	bStrafing = IsValid(CombatTarget);
}

void UNinjaCombatAnimInstance::HandleStaggeredStateChanged_Implementation(UActorComponent* DamageManager, const bool bIsStaggered)
{
	bStaggered = bIsStaggered; 
}

void UNinjaCombatAnimInstance::HandleDyingState_Implementation(AActor* Actor)
{
	bDead = true;
}

void UNinjaCombatAnimInstance::HandleBlockingStateChanged_Implementation(UActorComponent* DefenseManager, const bool bIsBlocking)
{
	bBlocking = bIsBlocking;
}

void UNinjaCombatAnimInstance::CalculateLocomotionValues_Implementation(const float DeltaSeconds)
{
	const ACharacter* CharacterOwner = TryGetCharacterOwner();
	const UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();
	
	if (IsValid(CharacterOwner) && IsValid(CharacterMovement))
	{
		const FVector CurrentWorldLocation = CharacterOwner->GetActorLocation(); 
		DisplacementSpeed = UKismetMathLibrary::SafeDivide((CurrentWorldLocation - LastWorldLocation).Size(), DeltaSeconds);
		LastWorldLocation = CurrentWorldLocation;
		
		Acceleration = CharacterMovement->GetCurrentAcceleration().Length();
		Velocity = CharacterOwner->GetVelocity(); 
		Speed = Velocity.Size2D();
		Direction = UKismetAnimationLibrary::CalculateDirection(Velocity, CharacterOwner->GetActorRotation());

		bAccelerating = Acceleration > 0.f;
		bStartedMoving = bAccelerating && LastFrameAcceleration <= 0.01f;
		bMoving = Speed > 0.f;
		bInAir = CharacterMovement->IsFalling();
		bCrouching = CharacterMovement->IsCrouching();
	}
}

void UNinjaCombatAnimInstance::CalculateBlendValues_Implementation(float DeltaSeconds)
{
	FullBodyBlend = bMoving ? 0.f : 1.f;
}
