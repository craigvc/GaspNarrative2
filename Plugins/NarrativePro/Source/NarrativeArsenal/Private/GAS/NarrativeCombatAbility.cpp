// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeCombatAbility.h"
#include "NarrativeCollisionChannels.h"
#include <AbilitySystemComponent.h>
#include "InventoryFunctionLibrary.h"
#include "Items/WeaponItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include <GameFramework/Controller.h>
#include <GameFramework/PlayerController.h>
#include <Engine/World.h>
#include <CollisionQueryParams.h>
#include "NarrativeGameplayTags.h"
#include "Items/RangedWeaponItem.h"

UNarrativeCombatAbility::UNarrativeCombatAbility()
{
	bRequiresAmmo = true;
}

void UNarrativeCombatAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);

	if (CharacterOwner)
	{
		if (UWeaponItem* Weapon = CharacterOwner->GetWeapon())
		{
			if (bRequiresAmmo)
			{
				Weapon->ConsumeAmmo();
			}
		}
	}

}

bool UNarrativeCombatAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags /*= nullptr*/, const FGameplayTagContainer* TargetTags /*= nullptr*/, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	//We now allow ability to activate as if we don't have ammo in clip ability handles reloading 
	//if (ANarrativeCharacter* OwnerCharacter = GetOwningNarrativeCharacter())
	//{
	//	if (UWeaponItem* Weapon = OwnerCharacter->GetWeapon())
	//	{	
	//		//Holster weapons should prevent firing 
	//		if (!Weapon->CanFire())
	//		{
	//			return false;
	//		}
	//	}
	//}
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UNarrativeCombatAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	// Bind target data callback
	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	//We use this method from lyra to avoid using targeting actors and just call the target datas ourselves 
	OnTargetDataReadyCallbackDelegateHandle = MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).AddUObject(this, &ThisClass::FinalizeTargetData);

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UNarrativeCombatAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (IsEndAbilityValid(Handle, ActorInfo))
	{
		if (ScopeLockCount > 0)
		{
			WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &ThisClass::EndAbility, Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
			return;
		}

		UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
		check(MyAbilityComponent);

		// When ability ends, consume target data and remove delegate
		MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).Remove(OnTargetDataReadyCallbackDelegateHandle);
		MyAbilityComponent->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());

		Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	}
}

bool UNarrativeCombatAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	return true; 
	//const bool bSuperCheck = Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags);
	//return bSuperCheck && HasAmmo();
}

bool UNarrativeCombatAbility::HasAmmo() const
{
	if (!bRequiresAmmo)
	{
		return true;
	}

	if (CharacterOwner)
	{
		if (UWeaponItem* Weapon = CharacterOwner->GetWeapon())
		{
			return Weapon->HasAmmo();
		}
	}

	return false;
}

void UNarrativeCombatAbility::GenerateTargetData()
{
	const FCombatTraceData TraceData = GetTraceData();

	GenerateTargetDataUsingTrace(TraceData);
}

void UNarrativeCombatAbility::GenerateTargetDataUsingTrace(const FCombatTraceData& TraceData)
{
	if (AController* OwnerController = GetOwningController())
	{
		if (OwnerController->IsLocalController())
		{	
			const FTransform TargetViewPoint = GetTargetingViewPoint();
			const FVector StartTrace = TargetViewPoint.GetTranslation();
			const float TraceLen  = TraceData.TraceDistance + FVector::Dist(GetAvatarActorFromActorInfo()->GetActorLocation(), TargetViewPoint.GetLocation());
			const FVector EndTrace = (TargetViewPoint.GetUnitAxis(EAxis::X) * TraceLen) + StartTrace;

			TArray<FHitResult> Hits;

			if (TraceData.bTraceMulti)
			{
				Hits.Append(PerformTraceMulti(StartTrace, EndTrace, TraceData.TraceRadius));
			}
			else
			{
				Hits.Add(PerformTrace(StartTrace, EndTrace, TraceData.TraceRadius));
			}

			FGameplayAbilityTargetDataHandle TargetData;

			for (auto& Hit : Hits)
			{
				FGameplayAbilityTargetData_SingleTargetHit* SingleTargetHit = new FGameplayAbilityTargetData_SingleTargetHit(Hit);
				TargetData.Add(SingleTargetHit);
			}

			FinalizeTargetData(TargetData, FGameplayTag());
		}
	}
}

void UNarrativeCombatAbility::FinalizeTargetData(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag)
{
	UAbilitySystemComponent* ASC = CurrentActorInfo->AbilitySystemComponent.Get();

	if (const FGameplayAbilitySpec* AbilitySpec = ASC->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		FScopedPredictionWindow	ScopedPrediction(ASC);

		//We use this method from lyra to avoid using targeting actors and just call the target datas ourselves 
		FGameplayAbilityTargetDataHandle LocalTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(TargetData)));

		//We call this function manually instead of using the target data node, which is inefficient and spawns a target data generating actor. We're basically just overriding that to just do a nice lightweight trace instead! 
		if (CurrentActorInfo->IsLocallyControlled() && !CurrentActorInfo->IsNetAuthority())
		{
			ASC->CallServerSetReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey(), LocalTargetDataHandle, FGameplayTag(), ASC->ScopedPredictionKey);
		}

		if (CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
		{
			K2_TargetDataReady(LocalTargetDataHandle);
		}
		else
		{
			K2_EndAbility();
		}

		//Another core GAS function, just cleans out the target data. 
		ASC->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());
	}
}

FHitResult UNarrativeCombatAbility::PerformTrace(const FVector& Start, const FVector& End, const float SweepRadius)
{
	FHitResult Hit;
	ECollisionChannel TraceChannel = Narrative_TraceChannel_Weapon;

	FCollisionQueryParams CQP;
	CQP.bTraceComplex = true;
	CQP.bReturnPhysicalMaterial = true; 
	CQP.AddIgnoredActor(GetAvatarActorFromActorInfo());
	CQP.TraceTag = FName("CombatTrace");

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	CQP.bDebugQuery = bDrawDebugTraces;
	GetWorld()->DebugDrawTraceTag = bDrawDebugTraces ? CQP.TraceTag : NAME_None;
#endif 
	
	if (FMath::IsNearlyZero(SweepRadius))
	{
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, CQP);
	}
	else
	{
		const FCollisionShape Sphere = FCollisionShape::MakeSphere(SweepRadius);
		GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, TraceChannel, Sphere, CQP);
	}

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	GetWorld()->DebugDrawTraceTag = NAME_None;
#endif 

	return Hit;
}

TArray<FHitResult> UNarrativeCombatAbility::PerformTraceMulti(const FVector& Start, const FVector& End, const float SweepRadius)
{
	TArray<FHitResult> Hits;
	ECollisionChannel TraceChannel = Narrative_TraceChannel_Weapon;

	FCollisionQueryParams CQP;
	CQP.bTraceComplex = true;
	CQP.bReturnPhysicalMaterial = true; 
	CQP.AddIgnoredActor(GetAvatarActorFromActorInfo());
	CQP.TraceTag = FName("CombatTrace");

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	CQP.bDebugQuery = bDrawDebugTraces;
	GetWorld()->DebugDrawTraceTag = bDrawDebugTraces ? CQP.TraceTag : NAME_None;
#endif

	if (FMath::IsNearlyZero(SweepRadius))
	{
		GetWorld()->LineTraceMultiByChannel(Hits, Start, End, TraceChannel, CQP);
	}
	else
	{
		const FCollisionShape Sphere = FCollisionShape::MakeSphere(SweepRadius);
		GetWorld()->SweepMultiByChannel(Hits, Start, End, FQuat::Identity, TraceChannel, Sphere, CQP);
	}

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	GetWorld()->DebugDrawTraceTag = NAME_None;
#endif 

	return Hits;
}

FCombatTraceData UNarrativeCombatAbility::GetTraceData_Implementation() const
{
	if (CharacterOwner)
	{
		//Ranged and melee weapons share the same base weapon item and combat ability. 
		if (UWeaponItem* Weapon  = CharacterOwner->GetWeapon())
		{
			return Weapon->GetTraceData();
		}
		else
		{
			return CharacterOwner->UnarmedCombatData;
		}
	}

	return FCombatTraceData();
}

FTransform UNarrativeCombatAbility::GetTargetingViewPoint_Implementation() const
{
	FVector EyesLoc;
	FRotator EyesRot;

	//For now, lets just rely on GetPlayerViewPoint. We'll probably want to heavily modify this as we move on
	if (AController* OwnerController = GetOwningController())
	{
		OwnerController->GetPlayerViewPoint(EyesLoc, EyesRot);
	}

	return FTransform(EyesRot, EyesLoc);
}

