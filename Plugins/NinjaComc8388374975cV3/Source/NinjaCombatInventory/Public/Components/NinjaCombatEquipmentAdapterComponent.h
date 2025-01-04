// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/NinjaCombatBaseWeaponManagerComponent.h"
#include "NinjaCombatEquipmentAdapterComponent.generated.h"

/**
 * Adapts the Weapon Manager to the Ninja Equipment Manager.
 */
UCLASS(ClassGroup=(NinjaCombat), meta=(BlueprintSpawnableComponent))
class NINJACOMBATINVENTORY_API UNinjaCombatEquipmentAdapterComponent : public UNinjaCombatBaseWeaponManagerComponent
{
	
	GENERATED_BODY()

public:

	// -- Begin Weapon Repository implementation
	virtual AActor* GetWeapon_Implementation(const FGameplayTagQuery& WeaponQuery) const override;
	// -- End Weapon Repository implementation

};
