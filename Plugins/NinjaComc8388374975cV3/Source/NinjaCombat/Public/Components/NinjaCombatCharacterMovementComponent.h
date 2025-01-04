// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/Components/CombatMovementManagerInterface.h"
#include "NinjaCombatCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=(NinjaCombat), meta=(BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatCharacterMovementComponent : public UCharacterMovementComponent, public ICombatMovementManagerInterface
{
	
	GENERATED_BODY()

public:

	UNinjaCombatCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

	// -- Begin Actor Component implementation
	virtual void BeginPlay() override;
	// -- End Actor Component implementation

	// -- Begin Combat Movement Interface
	virtual void HandleCombatTargetChanged_Implementation(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget) override;
	virtual void HandleBlockingStateChanged_Implementation(UActorComponent* DefenseManager, bool bNewIsBlocking) override;
	virtual void SetBlocking_Implementation(bool bNewIsBlocking) override;
	virtual void SetStrafing_Implementation(bool bNewIsStrafing) override;
	// -- End Combat Movement Interface
	
protected:
	
	/**
	 * Defines if the owner will strafe while locked on a target.
	 *
	 * By default, this leads to an adjustment in the owner's Character Movement Component's flags
	 * expected for such behavior: "bOrientRotationToMovement" and "bUseControllerDesiredRotation".
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Strafing")
	bool bStrafeWhileLockedOnTarget;

    /** Strafing walk speed, set to the Movement Component. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Strafing", meta = (EditCondition = "bStrafeWhileLockedOnTarget"))
    float StrafingWalkSpeed;

    /** Strafing acceleration, set to the Movement Component. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Strafing", meta = (EditCondition = "bStrafeWhileLockedOnTarget"))
    float StrafingAcceleration;

    /** Strafing deceleration, set to the Movement Component. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Strafing", meta = (EditCondition = "bStrafeWhileLockedOnTarget"))
    float StrafingDeceleration;
    
	/**
	 * Defines if the owner will walk while blocking.
	 *
	 * By default, this leads to a change in the owner's Character Movement Component's walk speed,
	 * walk acceleration and walk deceleration. All these values are restored to their original
	 * values when the block state stops.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Blocking")
	bool bWalkWhileBlocking;

	/** Blocking walk speed, set to the Movement Component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Blocking", meta = (EditCondition = "bWalkWhileBlocking"))
	float BlockingWalkSpeed;

	/** Blocking acceleration, set to the Movement Component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Blocking", meta = (EditCondition = "bWalkWhileBlocking"))
	float BlockingAcceleration;

	/** Blocking deceleration, set to the Movement Component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Blocking", meta = (EditCondition = "bWalkWhileBlocking"))
	float BlockingDeceleration;

	/**
	 * Binds to any relevant delegates in the Combat System.
	 */
	virtual void BindToCombatSystem();
	
	/**
	 * Opportunity to back up any values from the Owner Character Movement, as it's retrieved.
	 */
	virtual void BackupMovementValues();
	
	/**
	 * Provides the default walk speed, before any changes (like "blocking"). 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Movement Manager")
	FORCEINLINE float GetDefaultWalkSpeed() const { return DefaultWalkSpeed; }

	/**
	 * Provides the default acceleration, before any changes (like "blocking"). 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Movement Manager")
	FORCEINLINE float GetDefaultAcceleration() const { return DefaultAcceleration; }

	/**
	 * Provides the default deceleration, before any changes (like "blocking"). 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Movement Manager")
	FORCEINLINE float GetDefaultDeceleration() const { return DefaultDeceleration; }
	
	
private:

	/** Internal flag to inform a blocking state. */
	bool bIsBlocking;

	/** Internal flag to inform a strafing state. */
	bool bIsStrafing;
	
	/** Original walk speed, before any changes. */
	float DefaultWalkSpeed;

	/** Original acceleration, before any changes. */
	float DefaultAcceleration;

	/** Original deceleration, before any changes. */
	float DefaultDeceleration;	
	
};
