// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "StateTreeConditionBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeCombatantDeadCondition.generated.h"

USTRUCT()
struct NINJACOMBATAI_API FStateTreeCombatantDeadConditionInstanceData
{
	
	GENERATED_BODY()

	/** Combatant Actor to evaluate. */
	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<AActor> CombatantActor;
	
};

/**
 * Checks if a combat actor is dead, based on the damage manager.
 * You can also check if the combatant is alive by inverting the check.
 */
USTRUCT(DisplayName = "Combatant is Dead", Category = "Combat")
struct NINJACOMBATAI_API FStateTreeCombatantDeadCondition : public FStateTreeConditionCommonBase
{
	
	GENERATED_BODY()

	using FInstanceDataType = FStateTreeCombatantDeadConditionInstanceData;

	FStateTreeCombatantDeadCondition() = default;
	explicit FStateTreeCombatantDeadCondition(const EStateTreeCompare InInverts)
		: bInvert(InInverts == EStateTreeCompare::Invert)
	{}

	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual bool TestCondition(FStateTreeExecutionContext& Context) const override;

	/** Inverts the condition, checking if the combatant is dead. */
	UPROPERTY(EditAnywhere, Category = Parameter)
	bool bInvert = false;
	
};