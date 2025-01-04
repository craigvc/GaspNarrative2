// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "AbilitySystem/Interfaces/CombatAnimationTaskInterface.h"
#include "AbilityTask_PlayCombatAnimation.generated.h"

class UAnimInstance;

/**
 * Specialized version of the default Play Montage And Wait task.
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_PlayCombatAnimation : public UAbilityTask_PlayMontageAndWait,
	public ICombatAnimationTaskInterface
{
	
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FCombatAnimationEventMCDelegate OnCombatAnimationCompleted;

	UPROPERTY(BlueprintAssignable)
	FCombatAnimationEventMCDelegate OnCombatAnimationBlendOut;

	UPROPERTY(BlueprintAssignable)
	FCombatAnimationEventMCDelegate OnCombatAnimationCancelled;	
	
	UPROPERTY(BlueprintAssignable)
	FCombatAnimationEventMCDelegate OnCombatAnimationInterrupted;
	
	// -- Begin Combat Animation Task implementation
	virtual void BindToAnimationCompleted_Implementation(const FCombatAnimationEventDelegate& Delegate) override;
	virtual void BindToAnimationBlendOut_Implementation(const FCombatAnimationEventDelegate& Delegate) override;
	virtual void BindToAnimationCancelled_Implementation(const FCombatAnimationEventDelegate& Delegate) override;
	virtual void BindToAnimationInterrupted_Implementation(const FCombatAnimationEventDelegate& Delegate) override;
	// -- End Combat Animation Task implementation

	// -- Begin Ability Task implementation
	virtual void Activate() override;
	// -- End Ability Task implementation

	/**
	 * Initializes the combat-specific Animation Montage Task.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (DisplayName="PlayMontageAndWait", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_PlayCombatAnimation* CreatePlayCombatAnimationProxy(UGameplayAbility* InOwningAbility,
		FName InTaskInstanceName, UAnimMontage* InMontageToPlay, float InRate = 1.f, FName InStartSection = NAME_None,
		bool bInStopWhenAbilityEnds = true, float InAnimRootMotionTranslationScale = 1.f, float InStartTimeSeconds = 0.f,
		bool bInAllowInterruptAfterBlendOut = false);

	/**
	 * Checks if the animation has a section by name.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Tasks")
	virtual bool HasSection(FName SectionName) const;
	
	/**
	 * Moves the internal animation to a specific section, if applicable.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Tasks")
	virtual void MoveToSection(FName SectionName) const;
	
protected:

	/**
	 * Provides the Animation Instance for the Gameplay Ability.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Animation")
	UAnimInstance* GetAnimInstance(UGameplayAbility* GameplayAbility) const;

	virtual void PlayAnimation();
	
	/** Forwards the original "Completed" event to the combat one. */
	UFUNCTION()
	virtual void HandleOriginalAnimationCompleted();

	/** Forwards the original "Blend Out" event to the combat one. */
	UFUNCTION()
	virtual void HandleOriginalAnimationBlendOut();

	/** Forwards the original "Cancelled" event to the combat one. */
	UFUNCTION()
	virtual void HandleOriginalAnimationCancelled();	

	/** Forwards the original "Interrupted" event to the combat one. */
	UFUNCTION()
	virtual void HandleOriginalAnimationInterrupted();
	
};
