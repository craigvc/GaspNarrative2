// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Blueprint/StateTreeEvaluatorBlueprintBase.h"
#include "STEvaluator_FactionData.generated.h"

/**
 * Exposes the faction data regarding a given Faction Member (self or others).
 */
UCLASS(DisplayName = "Faction Data", Category = "Factions")
class NINJAFACTIONSSTATETREE_API USTEvaluator_FactionData : public UStateTreeEvaluatorBlueprintBase
{
	
	GENERATED_BODY()

public:
	
	explicit USTEvaluator_FactionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	/** Reference to the Faction Member that this evaluator is targeting. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TObjectPtr<AActor> FactionMember;

	/** The Team ID related to the core Unreal AI System. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	uint8 TeamId;
	
	/** Tag that identifies the faction of the targeted Faction Member. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	FGameplayTag FactionTag;

	/** The attitude towards the agent running the evaluator. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	TEnumAsByte<ETeamAttitude::Type> AttitudeTowardsAgent;

	// -- Begin State Tree Evaluator implementation
	virtual void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) override;
	// -- End State Tree Evaluator implementation	
	
};
