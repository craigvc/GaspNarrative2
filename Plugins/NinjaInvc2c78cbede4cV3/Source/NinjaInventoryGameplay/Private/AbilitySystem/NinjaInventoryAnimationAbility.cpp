// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaInventoryAnimationAbility.h"

#include "NinjaInventoryGameplayTags.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h"
#include "Engine/AssetManager.h"
#include "Types/FInventoryAnimationTableRow.h"

UNinjaInventoryAnimationAbility::UNinjaInventoryAnimationAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AnimationStrategy = EInventoryAnimationStrategy::AlwaysExecute;
	AnimationEventTag = FGameplayTag::EmptyTag;
}

void UNinjaInventoryAnimationAbility::LoadAnimationMontage(const FGameplayTagContainer& AnimationTags)
{
	FInventoryAnimationTableRow AnimationRow;
	if (FInventoryAnimationTableRow::FindRow(AnimationRow, MontageTable, AnimationTags))
	{
		TSoftObjectPtr<UAnimMontage> MontageToPlayPtr = AnimationRow.MontageToPlay;
		
		UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
		if (IsValid(AssetManager))
		{
			TArray<FSoftObjectPath> SoftPaths;
			SoftPaths.Add(MontageToPlayPtr.ToSoftObjectPath());

			TSharedPtr<FInventoryAnimationTableRow> Row = MakeShared<FInventoryAnimationTableRow>(AnimationRow);
			const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnAssetLoaded, Row);
			
			TSharedPtr<FStreamableHandle> Handle = AssetManager->LoadAssetList(SoftPaths, Delegate, FStreamableManager::AsyncLoadHighPriority);
			Handle.Reset();
		}
	}
	else
	{
		// This animation is not available. The requester should cancel the current flow.
		Execute_HandleAnimationNotFound(this);
	}	
}

void UNinjaInventoryAnimationAbility::OnAssetLoaded(TSharedPtr<FInventoryAnimationTableRow> AnimationData)
{
	if (AnimationData.IsValid())
	{
		UAnimMontage* MontageToPlay = AnimationData->MontageToPlay.Get();
		const FName MontageSection = AnimationData->MontageSection;
		
		Execute_HandleAnimationLoaded(this, MontageToPlay, MontageSection);
		AnimationData.Reset();
	}
}

bool UNinjaInventoryAnimationAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	// On top of the default Activation Check, make sure that this ability is not currently
	// playing an Animation Montage, since we don't want an overlap of montages and states.
	//
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& (PlayMontageTask == nullptr || PlayMontageTask->IsFinished()); 
}

void UNinjaInventoryAnimationAbility::HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, const FName MontageSection)
{
	InitializeAndActivateMontageTask(MontageToPlay, MontageSection);
	InitializeAndActivateEventTask();
}

void UNinjaInventoryAnimationAbility::InitializeAndActivateMontageTask(UAnimMontage* MontageToPlay, const FName MontageSection)
{
	if (IsValid(PlayMontageTask) && PlayMontageTask->IsActive())
	{
		return;
	}
	
	constexpr float Rate = 1.f;
	PlayMontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, TEXT("EquipmentMontage"), MontageToPlay, Rate, MontageSection);
	PlayMontageTask->OnCompleted.AddDynamic(this, &ThisClass::K2_EndAbility);
	PlayMontageTask->OnBlendOut.AddDynamic(this, &ThisClass::K2_EndAbility);
	PlayMontageTask->OnInterrupted.AddDynamic(this, &ThisClass::K2_CancelAbility);
	PlayMontageTask->OnCancelled.AddDynamic(this, &ThisClass::K2_CancelAbility);
	PlayMontageTask->ReadyForActivation();		
}

void UNinjaInventoryAnimationAbility::InitializeAndActivateEventTask()
{
	if (AnimationStrategy != EInventoryAnimationStrategy::WaitForGameplayEvent)
	{
		return;
	}

	if (IsValid(WaitEventTask) && WaitEventTask->IsActive())
	{
		return;
	}

	constexpr bool bOnlyTriggerOnce = false;
	constexpr bool bOnlyMatchExact = false;
	WaitEventTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, Tag_Inventory_Event_Animation, nullptr, bOnlyTriggerOnce, bOnlyMatchExact);
	WaitEventTask->EventReceived.AddDynamic(this, &ThisClass::HandleEventReceived);
	WaitEventTask->ReadyForActivation();
}

void UNinjaInventoryAnimationAbility::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
}

void UNinjaInventoryAnimationAbility::HandleAnimationNotFound_Implementation()
{
	K2_CancelAbility();
}

void UNinjaInventoryAnimationAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	if (IsValid(PlayMontageTask))
	{
		PlayMontageTask->EndTask();
		PlayMontageTask = nullptr;
	}

	if (IsValid(WaitEventTask))
	{
		WaitEventTask->EndTask();
		WaitEventTask = nullptr;
	}	
	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}