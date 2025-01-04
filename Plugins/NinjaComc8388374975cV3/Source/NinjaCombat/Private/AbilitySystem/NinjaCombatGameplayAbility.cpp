// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatGameplayAbility.h"

#include "NinjaCombatSettings.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystem/Interfaces/CombatActorInfoProxyInterface.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "GameFramework/MovementComponent.h"
#include "Runtime/Launch/Resources/Version.h"

DEFINE_LOG_CATEGORY(LogNinjaCombatAbility);

UNinjaCombatGameplayAbility::UNinjaCombatGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bEnableBlueprintActivation = true;
	bEnableDebug = false;
	TimeToDisplayDebugInfo = 3.f;
}

UNinjaCombatManagerComponent* UNinjaCombatGameplayAbility::GetCombatManagerComponentFromActorInfo() const
{
	const ICombatActorInfoProxyInterface* Proxy = GetActorInfoProxy();
	const FGameplayAbilityActorInfo* ActorInfo = GetCurrentActorInfo();
	
	if (Proxy && ActorInfo)
	{
		return Proxy->GetCombatManagerComponent(ActorInfo);
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetComboManagerComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheComboManager();
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetDamageManagerComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheDamageManager();
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetDefenseManagerComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheDefenseManager();
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetMotionWarpingComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheMotionWarping();
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetTargetManagerComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheTargetManager();
	}

	return nullptr;
}

UActorComponent* UNinjaCombatGameplayAbility::GetWeaponManagerComponentFromActorInfo() const
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponentFromActorInfo();
	if (IsValid(CombatManager))
	{
		return CombatManager->GetAndCacheWeaponManager();
	}

	return nullptr;
}

UMovementComponent* UNinjaCombatGameplayAbility::GetMovementComponent() const
{
	const TWeakObjectPtr<UMovementComponent> Movement = GetActorInfo().MovementComponent;
	if (Movement.IsValid() && Movement->IsValidLowLevelFast())
	{
		return Movement.Get();
	}

	return nullptr;
}

const ICombatActorInfoProxyInterface* UNinjaCombatGameplayAbility::GetActorInfoProxy()
{
	const UNinjaCombatSettings* Settings = GetDefault<UNinjaCombatSettings>();
	check(IsValid(Settings));
	return Settings->GetDefaultActorInfoProxy();
}

void UNinjaCombatGameplayAbility::SetInitialTags(FGameplayTagContainer InitialTags)
{
	if (InitialTags.IsValid())
	{
#if ENGINE_MINOR_VERSION < 5
		AbilityTags.AppendTags(InitialTags);
#else
		SetAssetTags(InitialTags);
#endif
	}
}

FGameplayTagContainer UNinjaCombatGameplayAbility::GetAbilityTags() const
{
#if ENGINE_MINOR_VERSION < 5
	return AbilityTags;
#else
	return GetAssetTags();
#endif
}

void UNinjaCombatGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	// Modify the default activation flow so something we have better control of.
	//
	// We still want to execute all blueprint activation (if the appropriate flag is enabled), but
	// we want to determine ourselves when we are commiting the ability, as that might not necessarily
	// right after the activation.
	//
	ExecuteBlueprintActivation(TriggerEventData);
}

UAbilityTask_WaitGameplayEvent* UNinjaCombatGameplayAbility::InitializeEventTask(const FGameplayTag Event, const bool bOnlyMatchExact)
{
	UAbilityTask_WaitGameplayEvent* Task = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, Event, nullptr, false, bOnlyMatchExact);
	checkf(IsValid(Task), TEXT("Unexpected invalid Event Task instance."));

	Task->EventReceived.AddDynamic(this, &ThisClass::HandleEventReceived);
	return Task;	
}

void UNinjaCombatGameplayAbility::ExecuteBlueprintActivation(const FGameplayEventData* TriggerEventData)
{
	if (!bEnableBlueprintActivation)
	{
		return;
	}
	
	if (TriggerEventData && bHasBlueprintActivateFromEvent)
	{
		K2_ActivateAbilityFromEvent(*TriggerEventData);
	}
	else if (bHasBlueprintActivate)
	{
		K2_ActivateAbility();
	}
	else if (bHasBlueprintActivateFromEvent)
	{
		UE_LOG(LogNinjaCombatAbility, Warning, TEXT("Ability %s expects event data but none is being supplied. Use 'Activate Ability' instead of 'Activate Ability From Event' in the Blueprint."), *GetName());
		K2_CancelAbility();
	}
}

void UNinjaCombatGameplayAbility::FinishLatentTasks(const TArray<UAbilityTask*>& Tasks)
{
	for (TObjectPtr<UAbilityTask> Task : Tasks)
	{
		FinishLatentTask(Task);
	}	
}

void UNinjaCombatGameplayAbility::FinishLatentTask(UAbilityTask* Task)
{
	if (IsValid(Task))
	{
		Task->EndTask();
	}	
}

void UNinjaCombatGameplayAbility::AddDebugMessage(const FString& Message) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		UE_LOG(LogNinjaCombatAbility, Log, TEXT("%s"), *Message);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, TimeToDisplayDebugInfo, FColor::Emerald, Message);
		}
	}
#endif
}
