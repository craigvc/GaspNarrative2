// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NinjaCombatDamageDataAsset.generated.h"

class UGameplayEffect;
class UNinjaCombatDamageHandler;

/**
 * Configures handlers for received damage.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatDamageDataAsset : public UDataAsset
{
	
	GENERATED_BODY()

public:

	/** If set to true, sends a Perception Event for the Damage Sense, when damage is received. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Handler")
	bool bGenerateDamagePerceptionEvent;
	
	/** Determines if the character will go into ragdoll during the death flow. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Handler")
	bool bEnableRagdollOnDeath;
	
	/**
	 * Lifespan applied when destroying the owner.
	 *
	 * A value of zero will destroy the actor immediately, once fatal damage has been applied
	 * and the death flow ha reached the final state, where the actor can be removed.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Handler")
	float LifespanOnDeath;

	/**
	 * A maximum amount of time to wait for a Death Ability (or similar) to kill the character.
	 *
	 * Fallback mechanism that always ensures that the character will be destroyed, regardless
	 * of the Abilities or other systems properly calling the Death Workflow.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Handler")
	float DeathTimeLimit;
	
	/**
	 * All damage handlers that are executed on each damage applied.
	 *
	 * You can trigger additional cosmetics using the Gameplay Cue framework. These handlers
	 * are executed from a cue that is applied via REPLICATION, instead of the default Multicast
	 * approach. This means that they are reliably executed on all clients.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "Damage Handler")
	TArray<TObjectPtr<UNinjaCombatDamageHandler>> DamageHandlers;

	UNinjaCombatDamageDataAsset();
	
};
