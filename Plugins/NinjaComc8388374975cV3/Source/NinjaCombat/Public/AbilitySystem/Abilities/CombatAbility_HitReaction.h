// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatAnimationAbility.h"
#include "AbilitySystem/NinjaCombatContextAnimationAbility.h"
#include "CombatAbility_HitReaction.generated.h"

/**
 * Handles Hit Reactions on the Avatar.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_HitReaction : public UNinjaCombatContextAnimationAbility
{
	
	GENERATED_BODY()

public:

	UCombatAbility_HitReaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	/** Is set to true, makes the avatar rotate to the damage source. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Hit Reaction")
	bool bRotateToSource;

	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	// -- End Gameplay Ability implementation	

	/**
	 * Handles the hit.
	 *
	 * You may build any custom behavior for your Hit Reactions in this method, without the
	 * need to worry about keeping the original behavior when the ability activates.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Hit Reaction Ability")
	void ExecuteHitReaction(const FGameplayEventData& TriggerEventData);
	
	/**
	 * Rotates the avatar to the event's instigator.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Hit Reaction Ability")
	void RotateToInstigator(const FGameplayEventData& TriggerEventData);
	
	/**
	 * Provides the Hit Result from the Trigger Event Data.
	 *
	 * @param TriggerEventData		Information about the event that triggered the activation.
	 * @param OutHitResult			Output for the hit result in the event data.
	 * @return						True if a Hit Result was obtained.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	static bool GetHitResult(const FGameplayEventData& TriggerEventData, UPARAM(DisplayName = "Hit Result") FHitResult& OutHitResult);
	
};
