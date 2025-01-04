// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatAnimationAbility.h"
#include "Interfaces/Animation/CombatAnimationContextProviderInterface.h"
#include "NinjaCombatContextAnimationAbility.generated.h"

/**
 * Adds context details to the Animation Ability.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatContextAnimationAbility : public UNinjaCombatAnimationAbility, public ICombatAnimationContextProviderInterface
{
	
	GENERATED_BODY()

public:

	UNinjaCombatContextAnimationAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Animation Provider Interface
	virtual bool GetAnimationContext_Implementation(FGameplayTagContainer& OutContextTags) const override;
	virtual bool GetEffectContext_Implementation(FGameplayEffectContextHandle& OutHandle) const override;
	// -- End Animation Provider Interface	
	
protected:

	/** Gameplay tags representing the animation context. */
	FGameplayTagContainer AnimationContext;

	/** Effect context from the trigger that activated this ability. */
	TSharedPtr<FGameplayEffectContextHandle> EffectContextHandlePtr;
	
	/**
	 * All filter tags used on the incoming instigator container.
	 * These are used to build the context for the Animation Provider.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation Context")
	FGameplayTagContainer InstigatorTagsFilter;

	/**
	 * All filter tags used on the incoming target container.
	 * These are used to build the context for the Animation Provider.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation Context")
	FGameplayTagContainer TargetTagsFilter;

	/**
	 * If incoming damage has any of these tags, then the hit reaction is ignored.
	 * Useful to ignore incoming damage from things like Damage Over Time.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation Context")
	FGameplayTagContainer IgnoredDamageFilter;

	// -- Begin Gameplay Ability implementation
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	// -- End Gameplay Ability implementation
	
	/**
	 * Collects and adds all relevant tags into the context.
	 */
	UFUNCTION(BlueprintCallable, Category = "Animation Context Ability")
	virtual void CollectContext(const FGameplayEventData& TriggerEventData);

};
