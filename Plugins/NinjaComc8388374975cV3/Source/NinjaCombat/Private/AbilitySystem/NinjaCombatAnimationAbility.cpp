// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatAnimationAbility.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatSettings.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "AbilitySystem/Providers/NinjaCombatAnimationProvider.h"
#include "AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h"
#include "AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h"
#include "Animation/AnimMontage.h"
#include "Components/NinjaCombatMotionWarpingComponent.h"
#include "Components/PrimitiveComponent.h"

FName UNinjaCombatAnimationAbility::AnimationProviderName = TEXT("AnimationProvider");
FName UNinjaCombatAnimationAbility::WarpTargetProviderName = TEXT("WarpTargetProvider");

UNinjaCombatAnimationAbility::UNinjaCombatAnimationAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bPlayMontageWhenActivated = true;
	bMatchAnimationEnd = true;
	bCommitAbilityBeforePlayingAnimation = true;
	
	bEnableMotionWarping = GetDefault<UNinjaCombatSettings>()->bEnableMotionWarpingByDefault;
	bDisableCollisionWithTarget = true;
	WarpName = TEXT("CombatWarp");
	WarpOffset = 100.f;

	AnimationProvider = CreateDefaultSubobject<UNinjaCombatAnimationProvider>(AnimationProviderName);
	WarpTargetProvider = CreateOptionalDefaultSubobject<UNinjaCombatMotionWarpingTargetProvider>(WarpTargetProviderName);
}

void UNinjaCombatAnimationAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (bCommitAbilityBeforePlayingAnimation && !CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		K2_CancelAbility();
	}
	else if (!bCommitAbilityBeforePlayingAnimation && (!K2_CheckAbilityCost() || !K2_CheckAbilityCooldown()))
	{
		K2_CancelAbility();
	}

	if (bPlayMontageWhenActivated)
	{
		PlayAnimationMontage();	
	}
}

void UNinjaCombatAnimationAbility::PlayAnimationMontage()
{
	if (bEnableMotionWarping && IsValid(WarpTargetProvider))
	{
		WarpTargetProvider->RequestWarpTarget(this);
	}
	else
	{
		SetupAndPlayAnimation();
	}
}

void UNinjaCombatAnimationAbility::MoveToSection(const FName SectionName) const
{
	if (SectionName != NAME_None)
	{
		return;
	}
	
	if (IsValid(AnimationTask) && AnimationTask->IsA<UAbilityTask_PlayCombatAnimation>())
	{
		const UAbilityTask_PlayCombatAnimation* MontageAnimationTask = Cast<UAbilityTask_PlayCombatAnimation>(AnimationTask);
		if (HasSection(SectionName))
		{
			MontageAnimationTask->MoveToSection(SectionName);	
		}
	}
}

bool UNinjaCombatAnimationAbility::HasSection(const FName SectionName) const
{
	if (SectionName != NAME_None)
	{
		return false;
	}
	
	if (!IsValid(AnimationTask) || !AnimationTask->IsA<UAbilityTask_PlayCombatAnimation>())
	{
		return false;
	}

	const UAbilityTask_PlayCombatAnimation* MontageAnimationTask = Cast<UAbilityTask_PlayCombatAnimation>(AnimationTask);
	return MontageAnimationTask->HasSection(SectionName);
}

void UNinjaCombatAnimationAbility::SetupAndPlayAnimation_Implementation()
{
	AnimationTask = InitializeAnimationTask();
	if (IsValid(AnimationTask) && AnimationTask->Implements<UCombatAnimationTaskInterface>())
	{
		FCombatAnimationEventDelegate CompletedDelegate;
		CompletedDelegate.BindDynamic(this, &ThisClass::OnAnimationFinished);
		
		FCombatAnimationEventDelegate CancelledDelegate;
		CancelledDelegate.BindDynamic(this, &ThisClass::OnAnimationCancelled);

		ICombatAnimationTaskInterface::Execute_BindToAnimationCompleted(AnimationTask, CompletedDelegate);
		ICombatAnimationTaskInterface::Execute_BindToAnimationBlendOut(AnimationTask, CompletedDelegate);
		ICombatAnimationTaskInterface::Execute_BindToAnimationCancelled(AnimationTask, CancelledDelegate);
		ICombatAnimationTaskInterface::Execute_BindToAnimationInterrupted(AnimationTask, CancelledDelegate);
		
		AnimationTask->ReadyForActivation();
		OnAnimationStarted();
	}
	else
	{
		K2_CancelAbility();
	}
}

UAbilityTask* UNinjaCombatAnimationAbility::InitializeAnimationTask_Implementation()
{
	if (IsValid(AnimationProvider))
	{
		UAnimMontage* Montage = AnimationProvider->GetMontageToPlay(this);
		const FName SectionName = AnimationProvider->GetSectionName(this);
	
		if (IsValid(Montage))
		{
			static const FName TaskInstanceName = TEXT("PlayMontage");
			UAbilityTask* Task = UAbilityTask_PlayCombatAnimation::CreatePlayCombatAnimationProxy(this, TaskInstanceName, Montage, 1.f, SectionName);
			return Task;
		}
	}

	return nullptr;
}

void UNinjaCombatAnimationAbility::ReceiveCombatTarget_Implementation(AActor* CombatTarget)
{
	UActorComponent* MotionWarpingComponent = GetMotionWarpingComponentFromActorInfo();
	if (UNinjaCombatFunctionLibrary::IsValidMotionWarpingComponent(MotionWarpingComponent))
	{
		if (IsValid(CombatTarget))
		{
			static constexpr bool bShouldIgnore = true;
			IgnoreActorWhenMoving(CombatTarget, bShouldIgnore);
			ICombatMotionWarpingInterface::Execute_SetCombatWarpTarget(MotionWarpingComponent, WarpName, CombatTarget, WarpOffset);
		}
		else
		{
			RevertCollisionForCurrentTarget();
			ICombatMotionWarpingInterface::Execute_ClearCombatWarpTarget(MotionWarpingComponent, WarpName);
		}
	}
	
	SetupAndPlayAnimation();
}

void UNinjaCombatAnimationAbility::IgnoreActorWhenMoving(AActor* CombatTarget, const bool bShouldIgnore)
{
	if (!bDisableCollisionWithTarget)
	{
		return;
	}
	
	UPrimitiveComponent* RootCollision = Cast<UPrimitiveComponent>(GetAvatarActorFromActorInfo()->GetRootComponent());
	if (!IsValid(RootCollision))
	{
		COMBAT_LOG_ARGS(Warning, "Unable to disable collision with %s.", *GetNameSafe(CombatTarget));
		return;
	}
	
	if (IsValid(CombatTarget))
	{
		RootCollision->IgnoreActorWhenMoving(CombatTarget, bShouldIgnore);
		CurrentWarpTargetPtr = CombatTarget;
	}
	else
	{
		RevertCollisionForCurrentTarget();
	}
}

void UNinjaCombatAnimationAbility::RevertCollisionForCurrentTarget()
{
	if (CurrentWarpTargetPtr.IsValid() && CurrentWarpTargetPtr->IsValidLowLevelFast())
	{
		const AActor* CurrentAvatar = GetAvatarActorFromActorInfo();
		if (IsValid(CurrentAvatar))
		{
			UPrimitiveComponent* RootCollision = Cast<UPrimitiveComponent>(CurrentAvatar->GetRootComponent());
			if (IsValid(RootCollision))
			{
				static constexpr bool bShouldIgnore = false;
				RootCollision->IgnoreActorWhenMoving(CurrentWarpTargetPtr.Get(), bShouldIgnore);
				CurrentWarpTargetPtr.Reset();		
			}
		}
	}
}

void UNinjaCombatAnimationAbility::OnAnimationFinished_Implementation()
{
	if (bMatchAnimationEnd)
	{
		K2_EndAbility();	
	}
}

void UNinjaCombatAnimationAbility::OnAnimationCancelled_Implementation()
{
	if (bMatchAnimationEnd)
	{
		K2_CancelAbility();	
	}
}

void UNinjaCombatAnimationAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	
	FinishLatentTask(AnimationTask);
	RevertCollisionForCurrentTarget();
}
