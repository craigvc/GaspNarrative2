// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Interface.h"
#include "CombatProjectileProviderInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatProjectileProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows actors to provide custom projectiles for ranged abilities. 
 */
class NINJACOMBAT_API ICombatProjectileProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides a specific projectile class.
	 * The class must be a valid implementation of "CombatProjectileInterface". 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Projectile Provider Interface")
	bool GetProjectileClass(UPARAM(meta = (MustImplement = "/Script/NinjaCombat.CombatProjectileInterface")) TSubclassOf<AActor>& ProjectileClass) const;
	virtual bool GetProjectileClass_Implementation(TSubclassOf<AActor>& ProjectileClass) const;
	
};
