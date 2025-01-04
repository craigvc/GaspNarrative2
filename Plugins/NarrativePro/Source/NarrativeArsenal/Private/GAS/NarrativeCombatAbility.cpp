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

	if (ANarrativeCharacter* OwnerCharacter = GetOwningNarrativeCharacter())
	{
		if (UWeaponItem* Weapon = OwnerCharacter->GetWeapon())
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

	if (ANarrativeCharacter* OwnerCharacter = GetOwningNarrativeCharacter())
	{
		if (UWeaponItem* Weapon = OwnerCharacter->GetWeapon())
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

			FHitResult Hit = PerformTrace(StartTrace, EndTrace, TraceData.TraceRadius);

			FGameplayAbilityTargetDataHandle TargetData;
			FGameplayAbilityTargetData_SingleTargetHit* SingleTargetHit = new FGameplayAbilityTargetData_SingleTargetHit(Hit);
			
			TargetData.Add(SingleTargetHit);

			FinalizeTargetData(TargetData);
		}
	}
}

void UNarrativeCombatAbility::FinalizeTargetData(const FGameplayAbilityTargetDataHandle& TargetData)
{
	UAbilitySystemComponent* ASC = CurrentActorInfo->AbilitySystemComponent.Get();

	if (const FGameplayAbilitySpec* AbilitySpec = ASC->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		FScopedPredictionWindow	ScopedPrediction(ASC);

		//Lyra does this and seems to make sense - we don't want the data be invalidated by anything else (In testing that did seem to happen)
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

	
	if (FMath::IsNearlyZero(SweepRadius))
	{
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, CQP);
	}
	else
	{
		const FCollisionShape Sphere = FCollisionShape::MakeSphere(SweepRadius);

		GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, TraceChannel, Sphere, CQP);
	}

	return Hit;
}

FCombatTraceData UNarrativeCombatAbility::GetTraceData_Implementation() const
{
	if (ANarrativeCharacter* OwnerCharacter = GetOwningNarrativeCharacter())
	{
		//Ranged and melee weapons share the same base weapon item and combat ability. 
		if (UWeaponItem* Weapon = OwnerCharacter->GetWeapon())
		{
			return Weapon->TraceData;
		}
		else
		{
			return OwnerCharacter->UnarmedCombatData.TraceData;
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
