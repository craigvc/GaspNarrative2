// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NarrativeArsenal.h"
#include "NarrativeAbilityInputMapping.generated.h"

class UGameplayAbility;
class UInputAction;

USTRUCT()
struct FAbilityInputMappingData
{
	GENERATED_BODY()

	//The input action
	UPROPERTY(EditAnywhere, Category = "GameplayInputAbilityInfo")
	TObjectPtr<UInputAction> InputAction;

	//The input ID the action maps to 
	UPROPERTY(EditAnywhere, Category = "GameplayInputAbilityInfo")
	ENarrativeAbilityInputID InputID;
};

/**
 * Used by Narrative weapons to define which input actions map to which abilities. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAbilityInputMapping : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "AbilitySystem")
	TArray<FAbilityInputMappingData> InputAbilities;

};
