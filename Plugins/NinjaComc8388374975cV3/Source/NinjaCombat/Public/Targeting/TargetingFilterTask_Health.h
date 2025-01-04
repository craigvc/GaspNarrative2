// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_Health.generated.h"

UENUM(BlueprintType)
enum class EHealthFilterCheckType : uint8
{
	Equal,
	NotEqual,
	GreaterThan,
	GreaterOrEqual,
	LesserThan,
	LesserOrEqual
};

UENUM(BlueprintType)
enum class EHealthFilterReferenceType : uint8
{
	Percent,
	Absolute
};

/**
 * Filters targets based on their health.
 *
 * This can be useful for Opportunity Attacks that must filter targets based on their current health.
 * An example of that is an Execution Attack that should only trigger if a health has 10% health or less.
 *
 * Always expect the Target Actor to have an Ability System Component and the expected Health Attributes.
 * Targets without these will always be filtered out.
 */
UCLASS(Blueprintable)
class NINJACOMBAT_API UTargetingFilterTask_Health : public UTargetingFilterTask_BasicFilterTemplate
{
	
	GENERATED_BODY()

protected:

	/**
	 * What type of check will be performed against the reference value.
	 *
	 * Remember that you are configuring a FILTER, so a set of values like "Equal 10" means that,
	 * if the target has 10 points of health, it will be filtered OUT of the list, and every other
	 * values will be ACCEPTED.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health Filter")
	EHealthFilterCheckType CheckType = EHealthFilterCheckType::LesserOrEqual;

	/**
	 * Informs if the reference value is absolute or a percentage.
	 *
	 * An absolute test will compare the Reference against the Current Health. A percentage test
	 * will compare the Reference against Current Health / Maximum Total Health.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health Filter")
	EHealthFilterReferenceType ReferenceType = EHealthFilterReferenceType::Percent;

	/** Reference value for the test. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health Filter")
	float HealthReference = 10.f;
	
	// -- Begin Filter Task implementation
	virtual bool ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const override;
	// -- End Filter Task implementation
	
};
