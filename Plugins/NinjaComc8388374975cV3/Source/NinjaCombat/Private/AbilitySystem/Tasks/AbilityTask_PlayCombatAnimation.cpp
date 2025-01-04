// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemLog.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"

void UAbilityTask_PlayCombatAnimation::BindToAnimationCompleted_Implementation(
	const FCombatAnimationEventDelegate& Delegate)
{
	OnCombatAnimationCompleted.AddUnique(Delegate);
}

void UAbilityTask_PlayCombatAnimation::BindToAnimationBlendOut_Implementation(
	const FCombatAnimationEventDelegate& Delegate)
{
	OnCombatAnimationBlendOut.AddUnique(Delegate);
}

void UAbilityTask_PlayCombatAnimation::BindToAnimationCancelled_Implementation(
	const FCombatAnimationEventDelegate& Delegate)
{
	OnCombatAnimationCancelled.AddUnique(Delegate);
}

void UAbilityTask_PlayCombatAnimation::BindToAnimationInterrupted_Implementation(
	const FCombatAnimationEventDelegate& Delegate)
{
	OnCombatAnimationInterrupted.AddUnique(Delegate);
}

void UAbilityTask_PlayCombatAnimation::Activate()
{
	OnCompleted.AddUniqueDynamic(this, &ThisClass::HandleOriginalAnimationCompleted);
	OnBlendOut.AddUniqueDynamic(this, &ThisClass::HandleOriginalAnimationBlendOut);
	OnCancelled.AddUniqueDynamic(this, &ThisClass::HandleOriginalAnimationCancelled);
	OnInterrupted.AddUniqueDynamic(this, &ThisClass::HandleOriginalAnimationInterrupted);
	
	PlayAnimation();
}

UAbilityTask_PlayCombatAnimation* UAbilityTask_PlayCombatAnimation::CreatePlayCombatAnimationProxy(
	UGameplayAbility* InOwningAbility, const FName InTaskInstanceName, UAnimMontage* InMontageToPlay, float InRate,
	const FName InStartSection, const bool bInStopWhenAbilityEnds, const float InAnimRootMotionTranslationScale,
	const float InStartTimeSeconds, const bool bInAllowInterruptAfterBlendOut)
{
	UAbilitySystemGlobals::NonShipping_ApplyGlobalAbilityScaler_Rate(InRate);

	UAbilityTask_PlayCombatAnimation* Task = NewAbilityTask<UAbilityTask_PlayCombatAnimation>(InOwningAbility, InTaskInstanceName);
	Task->MontageToPlay = InMontageToPlay;
	Task->Rate = InRate;
	Task->StartSection = InStartSection;
	Task->AnimRootMotionTranslationScale = InAnimRootMotionTranslationScale;
	Task->bStopWhenAbilityEnds = bInStopWhenAbilityEnds;
	Task->bAllowInterruptAfterBlendOut = bInAllowInterruptAfterBlendOut;
	Task->StartTimeSeconds = InStartTimeSeconds;
	return Task;
}

bool UAbilityTask_PlayCombatAnimation::HasSection(const FName SectionName) const
{
	if (IsValid(MontageToPlay))
	{
		const int32 SectionIndex = MontageToPlay->GetSectionIndex(SectionName); 
		return SectionIndex != INDEX_NONE;
	}

	return false;
}

void UAbilityTask_PlayCombatAnimation::MoveToSection(const FName SectionName) const
{
	UAnimInstance* AnimInstance = GetAnimInstance(Ability);
	if (IsValid(MontageToPlay) && IsValid(AnimInstance))
	{
		AnimInstance->Montage_JumpToSection(SectionName, MontageToPlay);
	}
}

UAnimInstance* UAbilityTask_PlayCombatAnimation::GetAnimInstance_Implementation(UGameplayAbility* GameplayAbility) const
{
	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	if (ActorInfo->AnimInstance.IsValid() && ActorInfo->AnimInstance->IsValidLowLevelFast())
	{
		// Return the one that was deliberately set in the Actor Info.
		return ActorInfo->AnimInstance.Get();
	}

	// Otherwise, let the getter method try to figure out the animation instance.
	return GameplayAbility->GetActorInfo().GetAnimInstance();
}

void UAbilityTask_PlayCombatAnimation::PlayAnimation()
{
	if (Ability == nullptr)
	{
		return;
	}
	
	UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
	if (!IsValid(ASC))
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait called on invalid AbilitySystemComponent"));
		return;
	}
	
	UAnimInstance* AnimInstance = GetAnimInstance(Ability);
	if (!IsValid(AnimInstance))
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait call with an invalid Animation Instance!"));
		return;
	}

	bool bPlayedMontage = false;
	if (ASC->PlayMontage(Ability, Ability->GetCurrentActivationInfo(), MontageToPlay, Rate, StartSection, StartTimeSeconds) > 0.f)
	{
		// Playing a montage could potentially fire off a callback into game code which could kill this ability! Early out if we are  pending kill.
		if (ShouldBroadcastAbilityTaskDelegates() == false)
		{
			return;
		}

		InterruptedHandle = Ability->OnGameplayAbilityCancelled.AddUObject(this, &UAbilityTask_PlayMontageAndWait::OnGameplayAbilityCancelled);

		BlendingOutDelegate.BindUObject(this, &UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut);
		AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, MontageToPlay);

		MontageEndedDelegate.BindUObject(this, &UAbilityTask_PlayMontageAndWait::OnMontageEnded);
		AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, MontageToPlay);

		ACharacter* Character = Cast<ACharacter>(GetAvatarActor());
		if (Character && (Character->GetLocalRole() == ROLE_Authority || (Character->GetLocalRole() == ROLE_AutonomousProxy && Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted)))
		{
			Character->SetAnimRootMotionTranslationScale(AnimRootMotionTranslationScale);
		}

		bPlayedMontage = true;
	}

	if (!bPlayedMontage)
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_PlayMontageAndWait called in Ability %s failed to play montage %s; Task Instance Name %s."), *Ability->GetName(), *GetNameSafe(MontageToPlay),*InstanceName.ToString());
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			OnCancelled.Broadcast();
		}
	}

	SetWaitingOnAvatar();
}

void UAbilityTask_PlayCombatAnimation::HandleOriginalAnimationCompleted()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCombatAnimationCompleted.Broadcast();
	}
}

void UAbilityTask_PlayCombatAnimation::HandleOriginalAnimationBlendOut()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCombatAnimationBlendOut.Broadcast();
	}	
}

void UAbilityTask_PlayCombatAnimation::HandleOriginalAnimationCancelled()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCombatAnimationCancelled.Broadcast();
	}	
}

void UAbilityTask_PlayCombatAnimation::HandleOriginalAnimationInterrupted()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnCombatAnimationInterrupted.Broadcast();
	}	
}
