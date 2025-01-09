// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_AttackPriority.generated.h"

/**
 * An EQS test that checks the target ASCs attack priority value 
 */
UCLASS()
class NARRATIVEARSENAL_API UEnvQueryTest_AttackPriority : public UEnvQueryTest
{
	GENERATED_BODY()
	
protected:

	UEnvQueryTest_AttackPriority(const FObjectInitializer& ObjectInitializer);

	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;
};
