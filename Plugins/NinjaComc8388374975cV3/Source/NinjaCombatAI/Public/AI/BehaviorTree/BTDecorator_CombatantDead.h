// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CombatantDead.generated.h"

/**
 * Checks if a combat actor is dead, based on the damage manager.
 * You can also check if the combatant is alive by inverting the check.
 */
UCLASS(DisplayName = "Combatant is Dead", Category = "Ninja Combat")
class NINJACOMBATAI_API UBTDecorator_CombatantDead : public UBTDecorator
{
	
	GENERATED_BODY()

public:

	/** Blackboard entry containing the actor to check. */
	UPROPERTY(EditAnywhere, Category = "Condition")    
	FBlackboardKeySelector CombatantKey;

	UBTDecorator_CombatantDead();

protected:

	// -- Begin Decorator implementation
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual FString GetStaticDescription() const override;
	// -- End Decorator implementation

};
