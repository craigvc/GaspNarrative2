// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "StateTreeEvaluatorBase.h"
#include "STEvaluator_ComboManager.generated.h"

class UActorComponent;

USTRUCT()
struct NINJACOMBAT_API FStateTreeComboManagerEvaluatorInstanceData
{
	GENERATED_BODY()
	
	/** The Actor owning the Combo Manager. */
	UPROPERTY(EditAnywhere, Category = Context)
	TObjectPtr<AActor> ComboManagerOwner = nullptr;

	/** Combo Manager obtained from the owner that can be set somewhere else. */
	UPROPERTY(EditAnywhere, Category = Output)
	TObjectPtr<UActorComponent> ComboManager = nullptr;
	
};

/**
 * Evaluator that retrieves a Combo Manager from an Actor.
 *
 * Mostly needed for version 5.3, where the State Tree Schema won't allow additional parameters.
 * 
 * For version 5.4 and above, the Combo Manager can usually be retrieved from the State Tree Context,
 * as long as the correct one is used (UNinjaCombatComboComponentSchema).
 */
USTRUCT(DisplayName = "Combo Manager", Category = "Combat")
struct NINJACOMBAT_API FStateTreeComboManagerEvaluator : public FStateTreeEvaluatorCommonBase
{
	
	GENERATED_BODY()

	FStateTreeComboManagerEvaluator() = default;

	using FInstanceDataType = FStateTreeComboManagerEvaluatorInstanceData;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	// -- Begin State Tree Evaluator implementation
	virtual void TreeStart(FStateTreeExecutionContext& Context) const override;
	// -- End State Tree Evaluator implementation
	
};
