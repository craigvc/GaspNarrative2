// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_AttackTokens.generated.h"

/**
 * An EQS test that scores actors based on how many free attack tokens they have 
 */
UCLASS()
class NARRATIVEARSENAL_API UEnvQueryTest_AttackTokens : public UEnvQueryTest
{
	GENERATED_BODY()
	
protected:

	UEnvQueryTest_AttackTokens(const FObjectInitializer& ObjectInitializer);

	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;
	
	//If true we'll check how many tokens we've granted have rather than how many are available
	UPROPERTY(EditAnywhere, Category=Tokens)
	bool bCheckGrantedTokens;
};
