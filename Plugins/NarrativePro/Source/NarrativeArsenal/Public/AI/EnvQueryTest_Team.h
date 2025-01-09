// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_Team.generated.h"

/**
 * An EQS test that filters out actors that match the required attitude
 */
UCLASS()
class NARRATIVEARSENAL_API UEnvQueryTest_Team : public UEnvQueryTest
{
	GENERATED_BODY()
	
protected:

	UEnvQueryTest_Team(const FObjectInitializer& ObjectInitializer);

	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
	virtual FText GetDescriptionDetails() const override;

	UPROPERTY(EditAnywhere, Category=Team)
	bool bIncludeFriendlies;

	UPROPERTY(EditAnywhere, Category=Team)
	bool bIncludeNeutrals;

	UPROPERTY(EditAnywhere, Category=Team)
	bool bIncludeEnemies;

};
