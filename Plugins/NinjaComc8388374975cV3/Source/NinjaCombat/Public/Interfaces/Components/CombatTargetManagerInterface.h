// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatDelegates.h"
#include "UObject/Interface.h"
#include "CombatTargetManagerInterface.generated.h"

class ANinjaCombatMarkerActor;

UINTERFACE(MinimalAPI)
class UCombatTargetManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that stores combat targets.
 */
class NINJACOMBAT_API ICombatTargetManagerInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Binds to a Multicast Delegate that will notify about changes in the combat target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	void BindToCombatTargetChangedDelegate(const FCombatTargetChangedDelegate& Delegate);

	/**
	 * Unbinds an object from the Target Changed delegate.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	void UnbindFromTargetChangedDelegate(const UObject* Source);

	/**
	 * Checks if the manager has a Combat Target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	bool HasCombatTarget() const;
	virtual bool HasCombatTarget_Implementation() const;
	
	/**
	 * Provides a Combat Target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	AActor* GetCombatTarget() const;

	/**
	 * Stores a Combat Target.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	void SetCombatTarget(AActor* NewCombatTarget);

	/**
	 * Notifies this component that the owner is being targeted by a given source.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	void ReceiveTargetingSource(AActor* TargetingSource);
	virtual void ReceiveTargetingSource_Implementation(AActor* TargetingSource) { }

	/**
	 * Notifies this component that the owner is not being targeted by a source anymore. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	void ClearTargetingSource(AActor* TargetingSource);
	virtual void ClearTargetingSource_Implementation(AActor* TargetingSource) { }

	/**
	 * Provides the Target Lock actor used by this component, if any.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Target Manager Interface")
	ANinjaCombatMarkerActor* GetTargetLockActor() const;
	
};

