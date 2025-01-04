// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatDelegates.h"
#include "Components/StateTreeComponent.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"
#include "Runtime/Launch/Resources/Version.h"
#include "NinjaCombatComboManagerComponent.generated.h"

class UStateTreeSchema;

/**
 * Manages a Combo, using a State Tree to determine each possible state and transition.
 */
UCLASS(Blueprintable, ClassGroup = NinjaCombat, meta = (BlueprintSpawnableComponent))
class NINJACOMBAT_API UNinjaCombatComboManagerComponent : public UStateTreeComponent, public ICombatComboManagerInterface
{
	
	GENERATED_BODY()

public:
	
	UNinjaCombatComboManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor Component implementation
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation

#if ENGINE_MINOR_VERSION > 3
	// -- Begin State Tree Component implementation
	virtual TSubclassOf<UStateTreeSchema> GetSchema() const override;
	virtual bool CollectExternalData(const FStateTreeExecutionContext& Context, const UStateTree* StateTree, TArrayView<const FStateTreeExternalDataDesc> Data, TArrayView<FStateTreeDataView> OutDataViews) const override;
	virtual bool SetContextRequirements(FStateTreeExecutionContext& Context, bool bLogErrors = false) override;
	// -- End State Tree Component implementation
#endif
	
	// -- Begin Combo Manager implementation
	virtual void BindToComboWindowChangedDelegate_Implementation(const FComboWindowChangedDelegate& Delegate) override;
	virtual void BindToTargetCountChangedDelegate_Implementation(const FComboTargetCountChangedDelegate& Delegate) override;
	virtual void BindToComboCountChangedDelegate_Implementation(const FComboCountChangedDelegate& Delegate) override;
	virtual void BindToComboFinishedDelegate_Implementation(const FComboFinishedDelegate& Delegate) override;
	virtual void UnbindFromComboWindowChangedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromComboTargetCountDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromComboCountChangedDelegate_Implementation(const UObject* Source) override;
	virtual void UnbindFromComboFinishedDelegate_Implementation(const UObject* Source) override;
	virtual void OpenComboWindow_Implementation() override;
	virtual void CloseComboWindow_Implementation() override;
	virtual void SetComboCount_Implementation(int32 NewComboCount) override;
	virtual void StartCombo_Implementation(UStateTree* NewComboTree) override;
	virtual void AdvanceCombo_Implementation(FGameplayTag ComboEventTag) override;
	virtual void RegisterTargetFromCurrentAttack_Implementation(const AActor* Target) override;
	virtual void ResetTargetCount_Implementation() override;
	virtual void ResetCombo_Implementation() override;
	virtual bool InComboWindow_Implementation() const override;
	virtual int32 GetComboCount_Implementation() const override { return ComboCount; }
	virtual int32 GetTargetCount_Implementation() const override { return TargetCount; }
	// -- End Combo Manager implementation
	
protected:

	/** Notifies that the running combo is in the combo window. */
	UPROPERTY(BlueprintAssignable, Category = "Combo Manager")
	FComboWindowChangedMCDelegate OnComboWindowChanged;

	/** Notifies the count of targets that were hit by the current attack. */
	UPROPERTY(BlueprintAssignable, Category = "Combo Manager")	
	FComboTargetCountMCDelegate OnTargetCountChanged;
	
	/** Notifies that the combo count has been changed. */
	UPROPERTY(BlueprintAssignable, Category = "Combo Manager")
	FComboCountChangedMCDelegate OnComboCountChanged;
	
	/** Notifies that the running combo has ended. */
	UPROPERTY(BlueprintAssignable, Category = "Combo Manager")
	FComboFinishedMCDelegate OnComboFinished;

	/** Stores the combo window state. */
	UPROPERTY(ReplicatedUsing = OnRep_InComboWindow)
	uint8 bInComboWindow:1;

	/** Amount of targets hit by the current attack. */
	UPROPERTY(ReplicatedUsing = OnRep_TargetCount)
	int32 TargetCount;
	
	/** Counts how many iterations in the current combo. */
	UPROPERTY(ReplicatedUsing = OnRep_ComboCount)
	int32 ComboCount;

	/**
	 * If set to true, will broadcast each target received. Otherwise, only the first one.
	 *
	 * If you only need to know if the current ability hit a target, so the combo can continue,
	 * then setting this to false will save replicating of combo values, past one.
	 *
	 * If you need to know the exact count of actors hit, then set this to true, but then the
	 * value will replicate on each target hit.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo Manager")
	bool bUpdateOnEveryTarget;

	/**
	 * Checks if the owner is authoritative or locally controlled.
	 */
	bool HasAuthorityOrIsLocallyControlled() const;
	
	/**
	 * Timer-friendly function to connect to the Ability Component.
	 */
	UFUNCTION()
	void BindToAbilitySystemComponent();

	/**
	 * Unbinds from the Ability Component.
	 */
	void UnbindFromAbilitySystemComponent();

	/**
	 * Reacts to a change in the tracked tags.
	 */
	virtual void HandleTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	
	/**
	 * Reacts to the replication of the "Combo Window" property.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Manager")
	void OnRep_InComboWindow(bool bWasInComboWindow);

	/**
	 * Reacts to the replication of the "Target Count" property.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Manager")
	void OnRep_TargetCount();
	
	/**
	 * Reacts to the replication of the "Combo Count" property.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Manager")
	void OnRep_ComboCount();
	
private:

	/** Ensures that a combo can only advance once per count. */
	int32 ComboCountOnAdvance;
	
	/** Delegate Handle for the Combo Window Tag event listener. */
	FDelegateHandle ComboWindowTagHandle;
	
	/** Helps determine if a status is final. */
	static bool IsFinished(const EStateTreeRunStatus& StateTreeRunStatus);
	
	/** Notifies a change in the tree status, so we can cancel/end the combo ability. */
	UFUNCTION()
	void HandleTreeStatusChanged(EStateTreeRunStatus StateTreeRunStatus);
	
};
