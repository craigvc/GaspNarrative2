// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h"

#include "GameFramework/NinjaCombatMeleeScan.h"

DEFINE_LOG_CATEGORY(LogWaitMeleeScanTask);

UAbilityTask_ScanMeleeTarget::UAbilityTask_ScanMeleeTarget()
{
	bTickingTask = true;
	bEnableDebug = false;
}

UAbilityTask_ScanMeleeTarget* UAbilityTask_ScanMeleeTarget::CreateTask(UGameplayAbility* OwningAbility, const bool bEnableDebug)
{
	UAbilityTask_ScanMeleeTarget* NewTask = NewAbilityTask<UAbilityTask_ScanMeleeTarget>(OwningAbility);
	
	NewTask->bEnableDebug = bEnableDebug;
	NewTask->StartLocation.SourceAbility = OwningAbility;
	NewTask->StartLocation.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	NewTask->StartLocation.SourceActor = OwningAbility->GetAvatarActorFromActorInfo();
	
	return NewTask;
}

void UAbilityTask_ScanMeleeTarget::Join(const UNinjaCombatMeleeScan* MeleeScan)
{
	if (!MeleeScans.Contains(MeleeScan))
	{
		UNinjaCombatMeleeScan* NonConstScan = const_cast<UNinjaCombatMeleeScan*>(MeleeScan);
		NonConstScan->bEnableDebug = bEnableDebug;
		MeleeScans.Add(NonConstScan);
	}
}

void UAbilityTask_ScanMeleeTarget::TickTask(const float DeltaTime)
{
	Super::TickTask(DeltaTime);

	for (auto It = MeleeScans.CreateIterator(); It; ++It)
	{
		UNinjaCombatMeleeScan* MeleeScan = *It;
		if (IsValid(MeleeScan) && MeleeScan->IsValidLowLevelFast())
		{
			TArray<FHitResult> Hits;
			MeleeScan->ScanForTargets(Hits);

			if (ShouldBroadcastAbilityTaskDelegates())
			{
				const FGameplayAbilityTargetDataHandle TargetData = StartLocation.MakeTargetDataHandleFromHitResults(Ability, Hits);
				OnMeleeTargetsFound.Broadcast(MeleeScan, TargetData);
			}	
		}
		else
		{
			It.RemoveCurrent();
		}
	}
}
