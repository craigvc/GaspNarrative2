// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatGameplayAbility.h"
#include "Interfaces/CombatTargetReceiverInterface.h"
#include "NinjaCombatAnimationAbility.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UNinjaCombatAnimationProvider;
class UNinjaCombatMotionWarpingComponent;
class UNinjaCombatMotionWarpingTargetProvider;

/**
 * A combat ability that plays an Animation.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatAnimationAbility : public UNinjaCombatGameplayAbility, public ICombatTargetReceiverInterface
{
	
	GENERATED_BODY()

public:

	static FName AnimationProviderName;
	static FName WarpTargetProviderName;
	
	UNinjaCombatAnimationAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Combat Target Receiver implementation
	virtual void ReceiveCombatTarget_Implementation(AActor* CombatTarget) override;
	// -- End Combat Target Receiver implementation
	
	/**
	 * Plays the Animation Montage at the current Section.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void PlayAnimationMontage();
	
	/**
	 * Moves the current animation montage to a given section.
	 *
	 * Before jumping to a section, it will first check if the section is actually valid in the montage,
	 * which is the equivalent of calling "HasSection", so you do not need to check that beforehand.
	 * 
	 * The default implementation assumes that the current Animation Task is valid and a subtype of the
	 * version provided by the combat system and used by default, "UAbilityTask_PlayCombatAnimation".
	 *
	 * @param SectionName
	 *		Name of the Montage Section to jump to. Must be different from NAME_None.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void MoveToSection(FName SectionName) const;

	/**
	 * Checks if the current animation montage has a given section.
	 * 
	 * The default implementation assumes that the current Animation Task is valid and a subtype of the
	 * version provided by the combat system and used by default, "UAbilityTask_PlayCombatAnimation".
	 *
	 * @param SectionName
	 *		Name of the Montage Section to check. Must be different from NAME_None.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	virtual bool HasSection(FName SectionName) const;
	
protected:

	/** Determines if the cost is checked or commited right away. */
	bool bCommitAbilityBeforePlayingAnimation;
	
	/** Provider used to retrieve an appropriate animation for this montage. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation", Instanced, NoClear, meta = (ShowInnerProperties))
	TObjectPtr<UNinjaCombatAnimationProvider> AnimationProvider;
	
	/**
	 * Determines if the montage will be played as soon as the ability activates.
	 *
	 * You may choose not to do that if you want to have some additional condition to execute
	 * before actually triggering the animation, therefore overriding the default behavior.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation")
	bool bPlayMontageWhenActivated;

	/**
	 * Determines if the ability should end/cancel with the Animation Montage.
	 *
	 * Montage events for Completing and Blending Out will result in the Ability being
	 * properly finished and Interruptions or Cancellations will also cancel the ability.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Animation")
	bool bMatchAnimationEnd;
	
	/** Determines if this Ability will use Motion Warping. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Motion Warping")
	bool bEnableMotionWarping;

	/**
	 * If set to true, disables the collision between the avatar and the target.
	 * Once the ability ends, the collision will be re-established.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Motion Warping", meta = (EditCondition = "bEnableMotionWarping"))
	bool bDisableCollisionWithTarget;
	
	/**
	 * Name of the warp used for this ability.
	 *
	 * The default Motion Warping component implementation will also use this name to find Scene Components
	 * on the target with a matching Component Tag. These Scene Components can be used to better control
	 * the positioning (location and rotation) of the avatar, when a certain warp is triggered.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Motion Warping", meta = (EditCondition = "bEnableMotionWarping"))
	FName WarpName;

	/** An offset added from the Target towards the Source. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Motion Warping", meta = (EditCondition = "bEnableMotionWarping"))
	float WarpOffset;
	
	/** Provides the Warp Target for this ability */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Motion Warping", meta = (EditCondition = "bEnableMotionWarping"), Instanced, NoClear)
	TObjectPtr<UNinjaCombatMotionWarpingTargetProvider> WarpTargetProvider;
	
	// -- Begin Gameplay Ability implementation
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	// -- End Gameplay Ability implementation

	/** The Ability Task used to play the animation. */
	UPROPERTY()
	TObjectPtr<UAbilityTask> AnimationTask;
	
	/**
	 * Handles the initialization of the animation task. It won't be active yet.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	UAbilityTask* InitializeAnimationTask();

	/**
	 * Flexible method to initialize the Montage Task using the provided function and once
	 * initialized, mark as ready to activate so the framework will activate the task.
	 *
	 * Override this if you want to treat scenarios where the task must be reused, such as
	 * a Combo System or an ongoing animation that can reuse the task.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	void SetupAndPlayAnimation();

	/**
	 * Notifies when the animation starts playing.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	void OnAnimationStarted();
	virtual void OnAnimationStarted_Implementation() { }
	
	/**
	 * Handles a Montage that has been completed.
	 */	
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	void OnAnimationFinished();
	virtual void OnAnimationFinished_Implementation();

	/**
	 * Handles a Montage that has been cancelled or interrupted.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	void OnAnimationCancelled();
	virtual void OnAnimationCancelled_Implementation();

	virtual void IgnoreActorWhenMoving(AActor* CombatTarget, bool bShouldIgnore);
	virtual void RevertCollisionForCurrentTarget();
	
private:

	TWeakObjectPtr<AActor> CurrentWarpTargetPtr;
	
};
