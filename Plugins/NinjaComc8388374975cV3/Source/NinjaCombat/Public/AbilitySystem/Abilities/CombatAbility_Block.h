// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "CombatAbility_Block.generated.h"

/**
 * Implements the Block Mechanic, adding and removing the Blocking Effect. 
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Block : public UNinjaCombatGameplayAbility
{
	
	GENERATED_BODY()

public:
	
	UCombatAbility_Block(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Checks if the avatar is already blocking.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	bool IsBlocking() const;
	
protected:

	/** Gameplay Effect applied for the Blocking. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Block")
	TSubclassOf<UGameplayEffect> BlockingEffectClass;

	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

private:

	/** Handle for the applied Blocking Effect. */
	FActiveGameplayEffectHandle BlockingEffectHandle;

	/** Task to track an external event informing that a breaker hit was received. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> BreakerHitEventTag;
	
};
