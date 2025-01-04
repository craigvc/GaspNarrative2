// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h"

#include "NinjaCombatLog.h"
#include "Components/SceneComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/CombatSystemInterface.h"

UAnimationProvider_DirectionalEvade::UAnimationProvider_DirectionalEvade()
{
	Offset = 0.f;
}

bool UAnimationProvider_DirectionalEvade::CalculateAnimationAngle_Implementation(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const
{
	const FGameplayAbilityActorInfo* MyActorInfo = CombatAbility->GetCurrentActorInfo();
	if (MyActorInfo == nullptr) return false;

	const UCharacterMovementComponent* Movement = Cast<UCharacterMovementComponent>(MyActorInfo->MovementComponent);
	if (Movement == nullptr) return false;

	FVector Acceleration = Movement->GetCurrentAcceleration();
	Acceleration.Normalize();

	if (Acceleration.IsZero())
	{
		OutAngle = 0.f;
		COMBAT_LOG_ARGS(Verbose, "Evade Direction is 0 for Acceleration %s.", *Acceleration.ToCompactString());
		return false;
	}
	
	// First, determine the angle between the forward reference and the current actor rotation.
	//
	const USceneComponent* ForwardReference = ICombatSystemInterface::Execute_GetCombatForwardReference(CombatAbility->GetAvatarActorFromActorInfo());
	const float Angle = ForwardReference->GetComponentRotation().Yaw - Movement->GetOwner()->GetActorRotation().Yaw + Offset;

	// Now Rotate the Acceleration Vector to the angle, on the Yaw Axis. This gives us an ABSOLUTE
	// angle for the CURRENT character rotation. That's what we need for our Direction Mapping.
	//
	const FVector YawAxis = FVector(0, 0, 1);
	const FVector RotatedInput = Acceleration.RotateAngleAxis(Angle, YawAxis);
	const FRotator InputOrientation = RotatedInput.ToOrientationRotator();

	// Since the evade action happens horizontally, we only care about the yaw. This is our Evade Direction.
	//
	const float EvadeDirection = InputOrientation.Yaw;

	OutAngle = EvadeDirection;
	COMBAT_LOG_ARGS(Verbose, "Evade Direction is %f for Acceleration %s.", EvadeDirection, *Acceleration.ToCompactString());
	return true;
}
