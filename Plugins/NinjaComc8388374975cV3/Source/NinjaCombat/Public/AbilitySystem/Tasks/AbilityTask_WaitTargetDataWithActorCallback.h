// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
#include "AbilityTask_WaitTargetDataWithActorCallback.generated.h"

/**
 * Same as the Wait Target Data, but allowing the calling ability to do work on the Spawned Actor.
 * It also attempts to retrieve the actor form the owner's Actor Pool before spawning it.
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_WaitTargetDataWithActorCallback : public UAbilityTask_WaitTargetData
{
	
	GENERATED_BODY()

public:

	/**
	 * Spawns target actor and waits for it to return valid data or to be canceled.
	 * 
	 * Tries to retrieve the actor from the Avatar's Actor Pool, before spawning it.
	 * Once spawned, calls the customization interface in the Owning Ability.
	 */
	static UAbilityTask_WaitTargetData* WaitTargetDataWithCallback(UGameplayAbility* OwningAbility,
		TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType,
		const TSubclassOf<AGameplayAbilityTargetActor>& TargetActorClass);

	/**
	 * Uses specified target actor and waits for it to return valid data or to be canceled.
	 * Once Spawned, calls the customization interface in the Owning Ability.
	 */
	static UAbilityTask_WaitTargetData* WaitTargetDataWithCallbackUsingActor(UGameplayAbility* OwningAbility,
		TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType,
		AGameplayAbilityTargetActor* TargetActor);

	// -- Begin Wait Target Data implementation
	virtual void Activate() override;
	virtual void BeginDestroy() override;
	// -- End Wait Target Data implementation
	
protected:

	// -- Begin Wait Target Data implementation
	virtual void FinalizeTargetActor(AGameplayAbilityTargetActor* SpawnedActor) const override;
	// -- End Wait Target Data implementation

};
