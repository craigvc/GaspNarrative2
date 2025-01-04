// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatAnimationAbility.h"
#include "AbilitySystem/NinjaCombatContextAnimationAbility.h"
#include "CombatAbility_Death.generated.h"

/**
 * Concrete implementation of an ability that handles the death event.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Death : public UNinjaCombatContextAnimationAbility
{
	
	GENERATED_BODY()

public:

	UCombatAbility_Death(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	/**
	 * Finishes the death event with the ability.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Death Ability")
	void FinishDying();

private:

	/** Callback timer in case the animation is looping. */
	FTimerHandle DeathTimerHandle;

};
