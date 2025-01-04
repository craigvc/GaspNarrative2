// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NinjaCombatAnimInstance.generated.h"

class ACharacter;
class UCharacterMovementComponent;

/**
 * Animation Instance that can be assigned to the Main Mesh (i.e. the Mannequin).
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatAnimInstance : public UAnimInstance
{
	
	GENERATED_BODY()

public:
	
	UNinjaCombatAnimInstance();
	
	// -- Begin Anim Instance implementation
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	virtual void NativeUninitializeAnimation() override;
	// -- End Anim Instance implementation

	/**
	 * Provides the specialized character using this Animation Instance.
	 * Make sure to check before using it, as it may be null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation")
	ACharacter* TryGetCharacterOwner() const;

	/**
	 * Provides the Movement Component assigned to the owning character.
	 * Make sure to check before using it, as it may be null.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Animation", meta = (BlueprintThreadSafe))
	UCharacterMovementComponent* GetCharacterMovement() const;

protected:

	/** Checks if the character is in midair. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion", DisplayName = "Is In Air?")
	bool bInAir;

	/** Checks if the character is crouching. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion", DisplayName = "Is Crouching?")
	bool bCrouching;
	
	/** Informs if the character is accelerating. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion", DisplayName = "Is Accelerating?")
	bool bAccelerating;

	/** Informs if the character is actually moving (has any ground speed). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion", DisplayName = "Is Moving?")
	bool bMoving;

	/** Informs if the character started moving in this frame */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion", DisplayName = "Started Moving?")
	bool bStartedMoving;
	
	/** Current character acceleration. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float Acceleration;
	
	/** Current movement speed. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float Speed;

	/** The actual speed the capsule moved since last frame. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float DisplacementSpeed;
	
	/** Current movement direction, in degrees [-180, 180]. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	float Direction;
	
	/** Current character's velocity. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Locomotion")
	FVector Velocity;

	/** Informs if the character is currently strafing. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", DisplayName = "Is Strafing?")
	bool bStrafing;
	
	/** Is the character blocking? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", DisplayName = "Is Blocking?")
	bool bBlocking;

	/** Informs if the character is staggered */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", DisplayName = "Is Staggered?")
	bool bStaggered;

	/** Informs if the character started dying. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", DisplayName = "Is Dying?")
	bool bDead;
	
	/** How much the full body should be blended. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blends")
	float FullBodyBlend;

	/** How much the upper body should be blended. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blends")
	float UpperBodyBlend;

	/**
	 * Binds to delegates in the Combat System, when the Animation Instance initializes.
	 */
	virtual void BindToCombatSystem();

	/**
	 * Unbinds from delegates in the Combat System, when the Animation Instance un-initializes.
	 */
	virtual void UnbindFromCombatSystem() const;

	/**
	 * Reacts to a change in the Combat Target, which can enable or disable strafing.
	 * By default, strafing is determined by the presence of a current Combat Target.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void HandleCombatTargetChanged(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget);

	/**
	 * Reacts to a change in the Staggered state, which can trigger animation transitions.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void HandleStaggeredStateChanged(UActorComponent* DamageManager, bool bIsStaggered);

	/**
	 * Reacts to a change in the Dying state, which can trigger animation transitions.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void HandleDyingState(AActor* Actor);
	
	/**
	 * Reacts to a change in the Blocking state, which can modify the upper body instance.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void HandleBlockingStateChanged(UActorComponent* DefenseManager, bool bIsBlocking);
	
	/**
	 * Calculates locomotion values, based on the current stored character.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void CalculateLocomotionValues(float DeltaSeconds);

	/**
	 * Calculates blend values, based on the current locomotion state.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation Instance")
	void CalculateBlendValues(float DeltaSeconds);

private:

	/** Acceleration on last frame, used to determine movement starts. */
	float LastFrameAcceleration;

	/** World location for the owner in the last frame. */
	FVector LastWorldLocation;
	
	/** Stored reference to the owning character. */
	TWeakObjectPtr<ACharacter> CharacterOwnerPtr;

	/** Movement component related to the owning character. */
	TWeakObjectPtr<UCharacterMovementComponent> CharacterMovementPtr;	
	
};
