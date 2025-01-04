// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatCharacterMovementComponent.h"

#include "NinjaCombatDelegates.h"
#include "NinjaCombatFunctionLibrary.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

UNinjaCombatCharacterMovementComponent::UNinjaCombatCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bIsStrafing = false;
	bStrafeWhileLockedOnTarget = true;
	StrafingWalkSpeed = MaxWalkSpeed;
	StrafingAcceleration = MaxAcceleration;
	StrafingDeceleration = BrakingDecelerationWalking;
	
	bIsBlocking = false;
	bWalkWhileBlocking = true;
	BlockingWalkSpeed = 180.f;
	BlockingAcceleration = 1024.f;
	BlockingDeceleration = 1024.f;
	
	DefaultWalkSpeed = 0.f;
	DefaultAcceleration = 0.f;
	DefaultDeceleration = 0.f;	
}

void UNinjaCombatCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	BackupMovementValues();
	BindToCombatSystem();	
}

void UNinjaCombatCharacterMovementComponent::BackupMovementValues()
{
	DefaultWalkSpeed = MaxWalkSpeed;
	DefaultAcceleration = MaxAcceleration;
	DefaultDeceleration = BrakingDecelerationWalking;
}

void UNinjaCombatCharacterMovementComponent::BindToCombatSystem()
{
	UActorComponent* DefenseComponent = UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(GetOwner());
	if (IsValid(DefenseComponent))
	{
		FBlockingStateChangedDelegate BlockingStateChangedDelegate;
		BlockingStateChangedDelegate.BindDynamic(this, &ThisClass::HandleBlockingStateChanged);
		ICombatDefenseManagerInterface::Execute_BindToBlockingStateChangedDelegate(DefenseComponent, BlockingStateChangedDelegate);

		const bool bIsAlreadyBlocking = ICombatDefenseManagerInterface::Execute_IsBlocking(DefenseComponent);
		Execute_SetBlocking(this, bIsAlreadyBlocking);
	}
	
	UActorComponent* TargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(GetOwner());
	if (IsValid(TargetComponent))
	{
		FCombatTargetChangedDelegate TargetChangedDelegate;
		TargetChangedDelegate.BindDynamic(this, &ThisClass::HandleCombatTargetChanged);
		ICombatTargetManagerInterface::Execute_BindToCombatTargetChangedDelegate(TargetComponent, TargetChangedDelegate);
		
		const bool bIsAlreadyStrafing = ICombatTargetManagerInterface::Execute_HasCombatTarget(TargetComponent);
		Execute_SetStrafing(this, bIsAlreadyStrafing);
	}
}

void UNinjaCombatCharacterMovementComponent::HandleCombatTargetChanged_Implementation(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget)
{
	const bool bShouldStrafe = IsValid(CombatTarget) && bStrafeWhileLockedOnTarget;
	Execute_SetStrafing(this, bShouldStrafe);
}

void UNinjaCombatCharacterMovementComponent::HandleBlockingStateChanged_Implementation(UActorComponent* DefenseManager, const bool bNewIsBlocking)
{
	Execute_SetBlocking(this, bNewIsBlocking);
}

void UNinjaCombatCharacterMovementComponent::SetBlocking_Implementation(bool const bNewIsBlocking)
{
	bIsBlocking = bNewIsBlocking;
	
	if (bIsBlocking)
	{
		MaxWalkSpeed = BlockingWalkSpeed;
		MaxAcceleration = BlockingAcceleration;
		BrakingDecelerationWalking = BlockingDeceleration;
	}
	else
	{
		MaxWalkSpeed = bIsStrafing ? StrafingWalkSpeed : DefaultWalkSpeed;
		MaxAcceleration = bIsStrafing ? StrafingAcceleration : DefaultAcceleration;
		BrakingDecelerationWalking = bIsStrafing ? StrafingDeceleration : DefaultDeceleration;	
	}
}

void UNinjaCombatCharacterMovementComponent::SetStrafing_Implementation(const bool bNewIsStrafing)
{
	bIsStrafing = bNewIsStrafing;
	if (bIsStrafing)
	{
		bOrientRotationToMovement = false;
		bUseControllerDesiredRotation = true;

		MaxWalkSpeed = bIsBlocking ? BlockingWalkSpeed : StrafingWalkSpeed;
		MaxAcceleration = bIsBlocking ? BlockingAcceleration : StrafingAcceleration;
		BrakingDecelerationWalking = bIsBlocking ? BlockingDeceleration : StrafingDeceleration;
	}
	else
	{
		bOrientRotationToMovement = true;
		bUseControllerDesiredRotation = false;

		MaxWalkSpeed = bIsBlocking ? BlockingWalkSpeed : DefaultWalkSpeed;
		MaxAcceleration = bIsBlocking ? BlockingAcceleration : DefaultAcceleration;
		BrakingDecelerationWalking = bIsBlocking ? BlockingDeceleration : DefaultDeceleration;
	}
}