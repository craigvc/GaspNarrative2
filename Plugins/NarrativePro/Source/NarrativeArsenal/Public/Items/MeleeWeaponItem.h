// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Items/WeaponItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "MeleeWeaponItem.generated.h"

/**
 * Specialized weapon that contains values that melee abilites will require to operate. 
 */
UCLASS()
class NARRATIVEARSENAL_API UMeleeWeaponItem : public UWeaponItem
{
	GENERATED_BODY()

public: 

	/** Weapon trace distance when doing a hitscan */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Trace")
	FMeleeCombatData MeleeData;

protected:

	virtual float GetAttackRange() const override;
	virtual FCombatTraceData GetTraceData() const override;
	virtual TArray<UNarrativeAnimSet*> GetComboAnims(const bool bHeavyAttack) const override;
};
