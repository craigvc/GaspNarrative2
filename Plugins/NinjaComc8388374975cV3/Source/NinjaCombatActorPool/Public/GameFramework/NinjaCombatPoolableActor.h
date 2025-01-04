// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/CombatPoolableActorInterface.h"
#include "Types/EPoolableActorState.h"
#include "NinjaCombatPoolableActor.generated.h"

/**
 * Base class for actors that can be pooled.
 *
 * The Pool will require the implemented interface, Combat Poolable Actor, however, this class
 * provides basic functionality for Replication, Time To Live and extensible event hooks.
 */
UCLASS(Abstract)
class NINJACOMBATACTORPOOL_API ANinjaCombatPoolableActor : public AActor, public ICombatPoolableActorInterface
{
	
	GENERATED_BODY()

public:

	ANinjaCombatPoolableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual bool IsNameStableForNetworking() const override;
	virtual bool IsFullNameStableForNetworking() const override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor implementation

	// -- Begin Poolable Actor Implementation
	virtual bool IsManagedByPool_Implementation() const override;
	virtual bool IsInactive_Implementation() const override { return PoolableActorState == EPoolableActorState::Inactive; }
	virtual bool IsReserved_Implementation() const final override { return PoolableActorState == EPoolableActorState::Reserved; }
	virtual bool IsActive_Implementation() const final override { return PoolableActorState == EPoolableActorState::Active; }
	virtual void Reserve_Implementation() override;
	virtual void Activate_Implementation() override;
	virtual void Deactivate_Implementation() override;
	virtual void InitializedByPool_Implementation(UNinjaCombatActorPoolComponent* InPool) override;
	virtual void NotifyPoolDestroyed_Implementation() override;
	// -- End Poolable Actor Implementation
	
protected:

	/** The time this actor can live outside the pool. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Poolable Actor")
	float TimeToLiveOutsidePool;

	/**
	 * Reacts to this actor being activated.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Poolable Actor")
	void OnActivation();
	virtual void OnActivation_Implementation();

	/**
	 * Reacts to this actor being deactivated.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Poolable Actor")
	void OnDeactivation();
	virtual void OnDeactivation_Implementation();

	/**
	 * Handles the actor once the timer has expired.
	 */
	UFUNCTION()
	virtual void HandleTimerExpired();
	
	/**
	 * Reacts to the replication of the Poolable Actor State property.
	 * Allows objects to perform certain tasks during different lifecycle states.
	 */
	UFUNCTION()
	virtual void OnRep_PoolableActorState(EPoolableActorState PreviousActorState);

	/**
	 * Starts the timer so an actor can be returned to the pool if nothing else forces it first.
	 *
	 * Usually, the timer starts when the actor is reserved, so it has to return at some point, and
	 * also (refreshed) when the actor is effectively out of the pool.
	 */
	virtual void StartTimerToReturnToPool();
	
private:

	/** Pool that is managing this actor */
	TWeakObjectPtr<UNinjaCombatActorPoolComponent> PoolManager;

	/** The state of this actor in the pool. */
	UPROPERTY(ReplicatedUsing = OnRep_PoolableActorState)
	EPoolableActorState PoolableActorState;
	
	/** Informs when the pool has been deactivated. */
	UPROPERTY()
	uint8 bIsMarkedForDeferredDestruction:1;
	
	/** Handle to the Time To Live handle, tracking lifetime outside the pool. */
	FTimerHandle TimeToLiveHandle;

	/**
	 * Deactivates the actor in the server.
	 * Useful for scenarios where deactivation comes from cosmetics (niagara, etc.).
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Deactivate();
	
};
