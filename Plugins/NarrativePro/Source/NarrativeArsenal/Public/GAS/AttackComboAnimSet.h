// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackComboAnimSet.generated.h"

/**
 * Stores a set of animations to make them easily re-usable. Used for combos and flinches in the base tool. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAnimSet : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UNarrativeAnimSet();

	//Attack montages for the melee attack
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> Montages; 

};
