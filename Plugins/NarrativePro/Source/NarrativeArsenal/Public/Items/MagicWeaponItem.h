// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Items/WeaponItem.h"
#include "MagicWeaponItem.generated.h"

/**
 * Base class for a magic based weapon. 
 */
UCLASS()
class NARRATIVEARSENAL_API UMagicWeaponItem : public UWeaponItem
{
	GENERATED_BODY()
	
protected:

	virtual TArray<UNarrativeAnimSet*> GetComboAnims(const bool bHeavyAttack) const override;

	//Combo montages for our magic attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> AttackCombos;

	//Combo montages for our heavy magic attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> HeavyAttackCombos;
};
