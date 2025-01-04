// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatBaseComponent.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Components/CombatWeaponManagerInterface.h"
#include "NinjaCombatBaseWeaponManagerComponent.generated.h"

/**
 * Base Weapon Manager Component that can be used as a base to switch between different implementations.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatBaseWeaponManagerComponent : public UNinjaCombatBaseComponent, public ICombatWeaponManagerInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Actor Component implementation
	virtual void BeginPlay() override;
	// -- End Actor Component implementation
	
	// -- Begin Weapon Manager implementation
	virtual AActor* GetWeapon_Implementation(const FGameplayTagQuery& WeaponQuery) const override;
	// -- End Weapon Manager implementation

protected:

	/**
	 * Handles the owner's death, when broadcast by the Damage Manager.
	 * Useful to destroy any weapon actors created by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Manager")
	void HandleOwnerDeath(AActor* Actor);

	/**
	 * Handles the end of the death flow, when broadcast by the damage manager.
	 * Useful to destroy any weapon actors created by this component.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Manager")
	void HandleOwnerFinishedDying(AActor* Actor);
	
	
};
