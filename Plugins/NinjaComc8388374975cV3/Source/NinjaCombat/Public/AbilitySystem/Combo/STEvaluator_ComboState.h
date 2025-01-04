// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeEvaluatorBlueprintBase.h"
#include "STEvaluator_ComboState.generated.h"

class UActorComponent;

/**
 * Exposes the current combo state in the backing character's Combat Component.
 */
UCLASS(DisplayName = "Combo State", Category = "Combat")
class NINJACOMBAT_API USTEvaluator_ComboState : public UStateTreeEvaluatorBlueprintBase
{
	
	GENERATED_BODY()

public:

	/** Reference to the Actor owning the Combat Component. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Context, meta = (MustImplement = "/Script/NinjaCombat.CombatComboManagerInterface"))
	TObjectPtr<UActorComponent> ComboManager;

	/** Informs if the Combo Window is currently open. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	bool bInComboWindow;

	/** Current count for the combo. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	int32 ComboCount;

	/** Amount of targets hit from the current attack. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Output)
	int32 TargetCount;

	explicit USTEvaluator_ComboState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin State Tree Evaluator implementation
	virtual void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) override;
	// -- End State Tree Evaluator implementation
	
};
