// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "BTDecorator_CheckAttitude.generated.h"

/**
 * Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value. 
 */
UCLASS(DisplayName = "Check Attitude", Category = "Factions")
class NINJAFACTIONSBEHAVIORTREE_API UBTDecorator_CheckAttitude : public UBTDecorator_BlueprintBase
{
	
	GENERATED_BODY()

public:

	explicit UBTDecorator_CheckAttitude(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Behavior Tree Decorator implementation
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	// -- End Behavior Tree Decorator implementation

	protected:

	/** The Attitude to be evaluated. Most likely loaded by the faction service. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Blackboard)
	FBlackboardKeySelector AttitudeKey;

	/** The attitude towards the agent running the evaluator. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	TEnumAsByte<ETeamAttitude::Type> AttitudeTest;

};
