// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "BTService_FactionData.generated.h"

/**
 * Exposes the faction data regarding a given Faction Member (self or others).
 */
UCLASS(DisplayName = "Faction Data", Category = "Factions")
class NINJAFACTIONSBEHAVIORTREE_API UBTService_FactionData : public UBTService_BlueprintBase
{
	
	GENERATED_BODY()

public:

	explicit UBTService_FactionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Behavior Tree Service implementation
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	// -- End Behavior Tree Service implementation

protected:

	/** Reference to the Faction Member that this evaluator is targeting. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Blackboard)
	FBlackboardKeySelector FactionMemberKey;

	/** The Team ID related to the core Unreal AI System. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Blackboard)
	FBlackboardKeySelector TeamIdKey;

	/** The Team ID related to the core Unreal AI System. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Blackboard)
	FBlackboardKeySelector FactionTagKey;

	/** The attitude towards the agent running the evaluator. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Blackboard)
	FBlackboardKeySelector AttitudeTowardsAgentKey;
	
};
