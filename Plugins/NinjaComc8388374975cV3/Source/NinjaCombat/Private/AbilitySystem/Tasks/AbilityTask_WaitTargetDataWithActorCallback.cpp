// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_WaitTargetDataWithActorCallback.h"

#include "NinjaCombatActorPoolFunctionLibrary.h"
#include "AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h"
#include "Interfaces/CombatPoolableActorInterface.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_WaitTargetDataWithActorCallback)

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetDataWithActorCallback::WaitTargetDataWithCallback(
	UGameplayAbility* OwningAbility, const TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType,
	const TSubclassOf<AGameplayAbilityTargetActor>& TargetActorClass)
{
	UAbilityTask_WaitTargetDataWithActorCallback* MyObj = NewAbilityTask<UAbilityTask_WaitTargetDataWithActorCallback>(OwningAbility, "TargetDataTask");
	MyObj->TargetClass = TargetActorClass;
	MyObj->TargetActor = nullptr;
	MyObj->ConfirmationType = ConfirmationType;
	return MyObj;	
}

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetDataWithActorCallback::WaitTargetDataWithCallbackUsingActor(
	UGameplayAbility* OwningAbility, const TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType,
	AGameplayAbilityTargetActor* TargetActor)
{
	UAbilityTask_WaitTargetDataWithActorCallback* MyObj = NewAbilityTask<UAbilityTask_WaitTargetDataWithActorCallback>(OwningAbility, "TargetDataTask");
	MyObj->TargetClass = nullptr;
	MyObj->TargetActor = TargetActor;
	MyObj->ConfirmationType = ConfirmationType;
	return MyObj;
}

void UAbilityTask_WaitTargetDataWithActorCallback::Activate()
{
	if (!IsValid(Ability))
	{
		EndTask();
	}

	if (IsValid(TargetClass))
	{
		const AActor* Avatar = GetAvatarActor();
		AActor* PoolableActor = UNinjaCombatActorPoolFunctionLibrary::TryGetActorFromPool(Avatar, TargetClass);
		if (IsValid(PoolableActor) && PoolableActor->IsA<AGameplayAbilityTargetActor>())
		{
			TargetActor = Cast<AGameplayAbilityTargetActor>(PoolableActor);
			RegisterTargetDataCallbacks();
		}
		else
		{
			AGameplayAbilityTargetActor* NewActor = nullptr;
			if (BeginSpawningActor(Ability, TargetClass, NewActor))
			{
				TargetActor = NewActor;
				FinishSpawningActor(Ability, TargetActor);
			}
		}
	}

	if (IsValid(TargetActor))
	{
		TargetClass = TargetActor->GetClass();
		InitializeTargetActor(TargetActor);
		FinalizeTargetActor(TargetActor);
		RegisterTargetDataCallbacks();
	}
	else
	{
		EndTask();
	}
}

void UAbilityTask_WaitTargetDataWithActorCallback::BeginDestroy()
{
	if (IsValid(TargetActor))
	{
		TargetActor->TargetDataReadyDelegate.RemoveAll(this);
		TargetActor->CanceledDelegate.RemoveAll(this);
		
		if (TargetActor->Implements<UCombatPoolableActorInterface>())
		{
			ICombatPoolableActorInterface::Execute_Deactivate(TargetActor);
			TargetActor = nullptr;
		}
		else
		{
			TargetActor->Destroy();
		}
	}

	Super::BeginDestroy();
}

void UAbilityTask_WaitTargetDataWithActorCallback::FinalizeTargetActor(AGameplayAbilityTargetActor* SpawnedActor) const
{
	Super::FinalizeTargetActor(SpawnedActor);

	ICombatTargetActorModifierInterface* Modifier = Cast<ICombatTargetActorModifierInterface>(Ability);
	if (Modifier != nullptr)
	{
		Modifier->ModifyActor(SpawnedActor);	
	}
}
