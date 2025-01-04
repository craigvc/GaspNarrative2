// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatPoolableActorInterface.generated.h"

class UNinjaCombatActorPoolComponent;

UINTERFACE(MinimalAPI)
class UCombatPoolableActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for actors that can be pooled.
 */
class NINJACOMBATACTORPOOL_API ICombatPoolableActorInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Notifies that this actor was initialized by an Actor Pool.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	void InitializedByPool(UNinjaCombatActorPoolComponent* InPool);

	/**
	 * Informs if this Cast Actor is managed by an Actor Pool.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	bool IsManagedByPool() const;

	/**
	 * Checks if this actor is currently inactive.
	 * 
	 * This can also mean that the actor is just not managed by a pool, which means it will never
	 * be "reserved" or "active", even though it can still be fully functional.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	bool IsInactive() const;
	
	/**
	 * Checks if this actor is currently reserved.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	bool IsReserved() const;
	
	/**
	 * Checks if the actor is currently active.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	bool IsActive() const;

	/**
	 * Reserves the actor.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	void Reserve();
	
	/**
	 * Activates the actor.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	void Activate();

	/**
	 * Deactivates the actor.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	void Deactivate();

	/**
	 * Notifies that the owning pool has been destroyed.
	 * This should be taken into consideration when the actor deactivates.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combat Poolable Actor Interface")
	void NotifyPoolDestroyed();
	
};
