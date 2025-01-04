// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "DamageHandler_Cosmetics.generated.h"

/**
 * Invokes the damage cosmetics interfaces in the causer and instigator for melee and ranged hits.
 */
UCLASS(DisplayName = "Combat Interfaces")
class NINJACOMBAT_API UDamageHandler_Cosmetics : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_Cosmetics();

	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation
	
protected:

	/**
	 * Determines if the Melee Damage interface should be invoked.
	 * You may want to turn this off if your weapons are already handling impact cosmetics.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	bool bHandleMeleeDamage;

	/**
	 * Determines if the Ranged Damage interface should be invoked.
	 * You may want to turn this off if your projectiles are already handling impact cosmetics.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	bool bHandleProjectileImpact;
	
};
