// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "STTask_SetComboCount.generated.h"

class UActorComponent;

/**
 * Sets a combo count to a specific value.
 */
UCLASS(DisplayName = "Set Combo Count", Category = "Combat")
class NINJACOMBAT_API USTTask_SetComboCount : public UStateTreeTaskBlueprintBase
{
	
	GENERATED_BODY()

public:

	/** Reference to the Actor owning the Combat Component. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Context, meta = (MustImplement = "/Script/NinjaCombat.CombatComboManagerInterface"))
	TObjectPtr<UActorComponent> ComboManager;

	/** New value for the combo count. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Parameter)
	int32 ComboCount;

	/** If set to true, return a run status of "succeeded". Otherwise, returns "running".*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Parameter)
	bool bShouldComplete;

	USTTask_SetComboCount(const FObjectInitializer& ObjectInitializer);
	
	// -- Begin State Tree Task implementation
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;
	// -- End State Tree Task implementation
	
};
