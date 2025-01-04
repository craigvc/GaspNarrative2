// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryLog.h"
#include "Engine/CancellableAsyncAction.h"
#include "Engine/GameInstance.h"
#include "Engine/TimerHandle.h"
#include "Engine/World.h"
#include "UObject/Package.h"
#include "NinjaInventoryAction_BaseWait.generated.h"

class AActor;
class UWorld;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryAsyncActionSignature);

/**
 * Base class for cancellable async actions.
 */
UCLASS(Abstract)
class NINJAINVENTORYCORE_API UNinjaInventoryAction_BaseWait : public UCancellableAsyncAction
{
	
	GENERATED_BODY()

public:

	/** The task has completed and the object is available. */
	UPROPERTY(BlueprintAssignable)
	FInventoryAsyncActionSignature OnCompleted;

	/** The action has failed and the reason will most likely be logged. */
	UPROPERTY(BlueprintAssignable)
	FInventoryAsyncActionSignature OnCancelled;
	
	// -- Begin UObject implementation
	virtual UWorld* GetWorld() const override;
	// -- End UObject implementation

	// -- Begin Cancellable Async Action implementation
	virtual void Activate() override;
	virtual void Cancel() override;
	// -- End Cancellable Async Action implementation

	/**
	 * Similar to "Cancel", but broadcasts the completed event.
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Action")
	virtual void Complete();
	
protected:

	/**
	 * Initializes an Inventory Action of a specific type and appropriate initial values.
	 */
	template<typename ActionT = UNinjaInventoryAction_BaseWait>
	static ActionT* NewInventoryAction(UWorld* World, const float CheckInterval, const float MaxWait)
	{
		if (CheckInterval <= 0.f)
		{
			INVENTORY_STATIC_LOG_ARGS(Warning, "Interval %f must be greater than zero!", CheckInterval);
			return nullptr;
		}

		if (MaxWait < CheckInterval)
		{
			INVENTORY_STATIC_LOG_ARGS(Warning, "Max Wait %f must be greater than Interval %f!", MaxWait, CheckInterval);
			return nullptr;
		}

		ActionT* NewAction = Cast<ActionT>(NewObject<UNinjaInventoryAction_BaseWait>(GetTransientPackage(), ActionT::StaticClass()));
		NewAction->SetWorld(World);
		NewAction->SetTimerParameters(CheckInterval, MaxWait);
		NewAction->RegisterWithGameInstance(World->GetGameInstance());
		return NewAction;
	}

	/**
	 * Sets the world obtained from the provided context.
	 */
	virtual void SetWorld(UWorld* World);

	/**
	 * Sets the timer's interval and max wait.
	 */
	virtual void SetTimerParameters(float InCheckInterval, float InMaxWait);

	/**
	 * Actually executes the code related to this wait action.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Async Action")
	void ExecuteAction();

	/**
	 * Accumulates the Elapsed time based on the current timer settings.
	 * Cancels the Action if the elapsed time exceeds the maximum wait.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Async")
	void AccumulateElapsedTime();

	/**
	 * Cleans all internal states.
	 */
	void CleanUp();
	
private:

	/** Informs if this task has been completed. */
	bool bCompleted = false;
	
	/** How long this action waits to check for the desired object. */
	float CheckInterval = 0.f;

	/** Time since the search started. */
	float ElapsedTime = 0.f;
	
	/** Maximum wait time. */
	float MaxWait = 0.f;
	
	/** Access to the world that can provide timers. */
	TWeakObjectPtr<UWorld> WorldPtr = nullptr;	

	/** Handle for the Ability System Component lookup. */
	FTimerHandle LookupHandle;
	
};
