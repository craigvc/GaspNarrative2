// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatWeaponInterface.generated.h"

class UMeshComponent;

UINTERFACE(MinimalAPI)
class UCombatWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines basic methods for a weapon.
 *
 * Weapons are usually Actors (or objects) specific to a game, therefore the Combat System only ever
 * deals with a Weapon Contract established by this Interface (and exchanged via TScriptInterface).
 */
class NINJACOMBAT_API ICombatWeaponInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides the Actor that owns this weapon.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Interface")
	AActor* GetWeaponOwner() const;
	
	/**
	 * Provides all tags that represent this weapon. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Interface")
	FGameplayTagContainer GetWeaponTags() const;

};
