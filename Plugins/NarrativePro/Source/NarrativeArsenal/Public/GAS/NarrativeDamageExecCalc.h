// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "NarrativeDamageExecCalc.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeDamageExecCalc : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UNarrativeDamageExecCalc();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
