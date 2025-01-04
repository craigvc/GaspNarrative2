// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_ScanMeleeTarget.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogWaitMeleeScanTask, Log, All);

class UNinjaCombatMeleeScan;

/**
 * Performs a scan for melee attacks. 
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_ScanMeleeTarget : public UAbilityTask
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaitMeleeScan, const UNinjaCombatMeleeScan*, MeleeScan, const FGameplayAbilityTargetDataHandle&, Data);
	
	GENERATED_BODY()

public:

	/** Broadcasts targets that we hit during the scan. */
	UPROPERTY(BlueprintAssignable)
	FWaitMeleeScan OnMeleeTargetsFound;

	UAbilityTask_ScanMeleeTarget();

	// -- Begin Ability Task implementation
	virtual void TickTask(float DeltaTime) override;
	// -- End Ability Task implementation

	/**
	 * Creates the appropriate Ability Task, based on the provided data.
	 */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|Tasks")
	static UAbilityTask_ScanMeleeTarget* CreateTask(UGameplayAbility* OwningAbility, bool bEnableDebug = false);

	/**
	 * Adds a new Melee Scan to this task.
	 * 
	 * @param MeleeScan
	 *		New Scan details to be joined in this task.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Ability Tasks")
	void Join(const UNinjaCombatMeleeScan* MeleeScan);
	
protected:

	/** Sets this task to debug mode. */
	bool bEnableDebug;
	
	/** The start location used for the target broadcast. */
	FGameplayAbilityTargetingLocationInfo StartLocation;
	
	/** Current list of targets that were found. */
	TArray<FHitResult> HitResults;

	/** All instances participating in this scan. */
	UPROPERTY()
	TArray<TObjectPtr<UNinjaCombatMeleeScan>> MeleeScans;
	
};
