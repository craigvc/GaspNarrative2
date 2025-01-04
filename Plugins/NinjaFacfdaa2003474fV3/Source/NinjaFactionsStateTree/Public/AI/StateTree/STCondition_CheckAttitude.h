// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Blueprint/StateTreeConditionBlueprintBase.h"
#include "STCondition_CheckAttitude.generated.h"

/**
 * Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value. 
 */
UCLASS(DisplayName = "Check Attitude", Category = "Factions")
class NINJAFACTIONSSTATETREE_API USTCondition_CheckAttitude : public UStateTreeConditionBlueprintBase
{
	
	GENERATED_BODY()

public:
	
	explicit USTCondition_CheckAttitude(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	/** The Attitude to be evaluated. Most likely loaded by the faction evaluator. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TEnumAsByte<ETeamAttitude::Type> Attitude;

	/** The attitude towards the agent running the evaluator. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	TEnumAsByte<ETeamAttitude::Type> AttitudeTest;

	/** Informs if the output should be inverted. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	bool bInvert;
	
	// -- Begin State Tree Condition implementation
	virtual bool TestCondition(FStateTreeExecutionContext& Context) const override;
	// -- End State Tree Condition implementation	
	
};
