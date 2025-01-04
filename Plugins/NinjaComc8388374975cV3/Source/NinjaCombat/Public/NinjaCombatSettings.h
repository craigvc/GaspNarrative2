// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Interfaces/CombatActorInfoProxyInterface.h"
#include "AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"
#include "Engine/DeveloperSettings.h"
#include "NinjaCombatSettings.generated.h"

class ANinjaCombatMarkerActor;
class UNinjaCombatProjectileRequest;
class UActorComponent;
class UNinjaCombatMeleeScan;
class UNinjaCombatAbilityActorInfoProxy;

/**
 * Central location for system-wide settings related to the Ninja Combat plugin.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Ninja Combat"))
class NINJACOMBAT_API UNinjaCombatSettings : public UDeveloperSettings
{
	
	GENERATED_BODY()

public:

	/**
	 * The Proxy used to exchange information with the Ability Actor Info struct.
	 * This Object must be a valid implementation of the "Combat Actor Info Proxy" interface.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Core Settings", NoClear, meta = (MustImplement = "/Script/NinjaCombat.CombatActorInfoProxyInterface"))
	TSubclassOf<UObject> ActorInfoProxyClass;

	/**
	 * The Proxy used to exchange information with the Effect Context struct.
	 * This Object must be a valid implementation of the "Combat Effect Context Proxy" interface.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Core Settings", NoClear, meta = (MustImplement = "/Script/NinjaCombat.CombatEffectContextProxyInterface"))
	TSubclassOf<UObject> EffectContextProxyClass;

	/**
	 * If set to true, abilities using the Motion Warping will have that setting active by default.
	 * Use this as the most common option for your project and fine tune in each ability as needed.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Core Settings")
	bool bEnableMotionWarpingByDefault;

	/**
	 * If set to true, retrieves a new target automatically, after the current one has been killed.
	 *
	 * This will affect the Target Lock ability, allowing it to execute secondary searches to collect
	 * follow-up targets. Make sure to check that ability and fine-tune your secondary search Preset
	 * in case you want to perform a different search for follow-up targets.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Targeting System")
	bool bShouldAcquireNextTargetsAutomatically;

	/**
	 * If set to true, will lock on the target obtained from a melee attack, if no target is set.
	 *
	 * Melee attacks must be configured with a proper Target Provider for this to work. In which
	 * case, the target obtained from a melee attack will become the current target, via the
	 * Gameplay Event that should activate the Target Lock ability.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Targeting System")
	bool bShouldLockOnTargetsFromMeleeAttacks;
	
	/**
	 * The default Target Lock Actor class applied to targets when they are locked by a Player.
	 *
	 * This is only relevant to the local player, when targeting enemies. AI and other players
	 * will not see this actor. You can also customize this in the Target Manager component.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Targeting System")
	TSubclassOf<ANinjaCombatMarkerActor> DefaultTargetLockActorClass;
	
	/**
	 * Channel used for the melee scans performed by melee weapons.
	 * Consider creating a dedicated channel for this.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Melee Combat")
	TEnumAsByte<ECollisionChannel> MeleeScanChannel;

	/**
	 * Class that represents a Melee Scan in the system.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Melee Combat")
	TSubclassOf<UNinjaCombatMeleeScan> MeleeScanClass;

	/**
	 * Duration of all visual debug information for the Melee Traces.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Melee Combat")
	float MeleeScanDebugDuration;
	
	/**
	 * Default socket name for projectiles.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Ranged Combat")
	FName ProjectileSocketName;

	/**
	 * Channel used to detect projectile hits.
	 * Consider creating a dedicated channel for this.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Ranged Combat")
	TEnumAsByte<ECollisionChannel> ProjectileChannel;
	
	/**
	 * Class that represents a Projectile Request in the system.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Ranged Combat")
	TSubclassOf<UNinjaCombatProjectileRequest> ProjectileRequestClass;
	
	/**
	 * How many inflicted damage entries can be stored per character.
	 * Necessary for the damage replication and client/server damage validation.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Damage Handling")
	int32 DamageRegistrySize;

	UNinjaCombatSettings();

	/**
	 * Provides the default instance for the Actor Info Proxy.
	 * This is the default object from the ActorInfoProxyClass property, already cast into the interface.
	 */
	const ICombatActorInfoProxyInterface* GetDefaultActorInfoProxy() const;

	/**
	 * Provides the default instance for the Effect Context Proxy.
	 * This is the default object from the EffectContextProxyClass property, already cast into the interface.
	 */
	const ICombatEffectContextProxyInterface* GetDefaultEffectContextProxy() const;
	
};
