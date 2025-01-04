// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "Types/FCombatPool.h"
#include "Types/FCombatPoolableActorInfo.h"
#include "NinjaCombatActorPoolComponent.generated.h"

/**
 * A pool of actors available to the owner, that are pre-spawned and ready to use.
 */
UCLASS(ClassGroup=(NinjaCombat), meta=(BlueprintSpawnableComponent))
class NINJACOMBATACTORPOOL_API UNinjaCombatActorPoolComponent : public UActorComponent
{
	
	GENERATED_BODY()

public:

	UNinjaCombatActorPoolComponent();

	// -- Begin Actor Component implementation
	virtual void InitializeComponent() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor Component implementation

	/**
	 * Retrieves an actor from the pool, for the provided class.
	 *
	 * An actor can be automatically activated, which is analogous to "Begin Play" or only reserved,
	 * requiring an activation later on - this would be analogous to a "deferred spawn".
	 *
	 * @param ActorClass		Class used as reference.
	 * @param bActivate			If true, the actor is immediately activated. Otherwise, it is only reserved.
	 * @return					The actor instance for the class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Actor Pool", meta = (DeterminesOutputType = ActorClass))
	virtual AActor* GetActorFromPool(const TSubclassOf<AActor>& ActorClass, bool bActivate = true);

	/**
	 * Retrieves an actor from the pool, for the provided class, cast as the result type.
	 *
	 * @param ActorClass		Class used as reference.
	 * @return					The actor instance for the class.
	 */	
	template <typename ActorT = AActor>
	ActorT* GetTypedActorFromPool(const TSubclassOf<ActorT>& ActorClass)
	{
		return Cast<ActorT>(GetActorFromPool(ActorClass));
	}
		
	/**
	 * Spawn a poolable actor, with a proper name for replication.
	 *
	 * @param ActorClass		Poolable actor class that will be spawned.
	 * @param PoolableActorId	Unique identifier, used to generate the actor's name.
	 * @return					New actor instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Actor Pool")
	AActor* SpawnActor(
		UPARAM(meta = (MustImplement = "/Script/NinjaCombatActorPool.CombatPoolableActorInterface")) const TSubclassOf<AActor>& ActorClass,
		const FGuid& PoolableActorId);
	
protected:

	/** Default collision handling method for new actors being spawned. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Actor Pool")
	ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
	
	/** All actors pooled by this component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Actor Pool")
	TArray<FCombatPoolableActorInfo> PoolableActors;

	/**
	 * Initializes the Pool using the Poolable Actor array configuration.
	 */
	virtual void InitializePool();

	/**
	 * Initializes the new actor, before it's spawned in the world.
	 */
	virtual void InitializeActor(AActor* NewActor);

	/**
	 * Checks if the owner is locally controlled. 
	 */
	bool OwnerIsLocallyControlled() const;
	
	/**
	 * Determines the instigator for new actors.
	 */
	virtual APawn* GetInstigator() const;
	
	/**
	 * Builds spawn parameters for the new actor.
	 * The actor is always forced to be deferred, regardless of parameters.
	 */
	virtual FActorSpawnParameters BuildSpawnParameters(const TSubclassOf<AActor>& ActorClass, const FGuid& PoolableActorId) const;

	/**
	 * Builds an appropriate name for a new actor, based on the class and Actor ID.
	 * It's important to keep consistency over networked actors, so they can replicate.
	 */
	virtual FString BuildActorName(const TSubclassOf<AActor>& ActorClass, const FGuid& PoolableActorId) const;

	/**
	 * Builds the initial transform used to finish spawning the actor.
	 * An Identity Transform is usually be fine, if the actor is set to be invisible and not colliding.
	 */
	virtual FTransform BuildInitialTransform(const AActor* NewActor);

private:

	UPROPERTY(Replicated)
	FCombatPoolList Pool;
	
};
