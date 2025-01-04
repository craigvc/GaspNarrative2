// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatWeaponManagerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatWeaponManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that manages weapons.
 */
class NINJACOMBAT_API ICombatWeaponManagerInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Retrieves a weapon based on a query.
	 *
	 * @param WeaponQuery		Gameplay Tag Query used to search for the requested weapon.
	 * @return					The Actor representing the requested weapon. Implements ICombatWeaponInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Manager Interface")
	AActor* GetWeapon(const FGameplayTagQuery& WeaponQuery) const;	
	
};
