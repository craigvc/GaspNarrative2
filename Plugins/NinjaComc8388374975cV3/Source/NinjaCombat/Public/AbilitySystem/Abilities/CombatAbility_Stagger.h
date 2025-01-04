// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "CombatAbility_Stagger.generated.h"

/**
 * Handles a Stagger state.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Stagger : public UNinjaCombatGameplayAbility
{
	
	GENERATED_BODY()

public:

	UCombatAbility_Stagger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	// -- End Gameplay Ability implementation	

protected:

	/**
	 * Handles a change in the Gameplay Tag being watched for the Staggered State.
	 */
	virtual void HandleTagChanged(FGameplayTag GameplayTag, int TagCount);	

	/**
	 * Handles the stagger in the ability.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Stagger Ability")
	void HandleStagger(bool bStaggered);
	
private:

	/** Delegate Handle for the Stagger Tag event listener. */
	FDelegateHandle StaggerTagHandle;	
	
};
