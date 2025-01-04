// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaCombatWeaponActor.h"
#include "NinjaCombatEquipmentWeaponActor.generated.h"

class UActorComponent;

/**
 * A weapon actor that is prepared to be used as Equipment, from the Ninja Inventory.
 */
UCLASS(Abstract)
class NINJACOMBATINVENTORY_API ANinjaCombatEquipmentWeaponActor : public ANinjaCombatWeaponActor
{
	
	GENERATED_BODY()

public:

	ANinjaCombatEquipmentWeaponActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Weapon implementation
	virtual float GetHitEffectLevel_Implementation() const override;
	virtual AActor* GetWeaponOwner_Implementation() const override;
	// -- End Weapon implementation
	
protected:

	/** If set to true, uses the Item Level as the Effect Level for Melee or Projectiles. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Equipment")
	bool bUseItemLevelAsEffectLevel;
	
private:

	/** The Equipment Receiver, most likely provided by the Inventory System. */
	UPROPERTY()
	TObjectPtr<UActorComponent> EquipmentReceiver;

};
