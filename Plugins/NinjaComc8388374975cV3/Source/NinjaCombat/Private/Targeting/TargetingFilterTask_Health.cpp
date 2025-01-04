// Ninja Bear Studio Inc., all rights reserved.
#include "Targeting/TargetingFilterTask_Health.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "Kismet/KismetMathLibrary.h"

bool UTargetingFilterTask_Health::ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const
{
	const AActor* TargetActor = TargetData.HitResult.GetActor();

	const UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetActor);
	if (!IsValid(AbilitySystemComponent))
	{
		// Filter the actor, since we cannot establish the amount of health.
		return true;
	}

	float HealthTest = AbilitySystemComponent->GetNumericAttribute(UNinjaCombatAttributeSet::GetHealthAttribute());
	if (ReferenceType == EHealthFilterReferenceType::Percent)
	{
		const float TotalHealth = AbilitySystemComponent->GetNumericAttribute(UNinjaCombatAttributeSet::GetMaxHealthTotalAttribute());
		HealthTest = UKismetMathLibrary::SafeDivide(HealthTest, TotalHealth);
	}
	
	switch (CheckType)
	{
		case EHealthFilterCheckType::Equal: return HealthReference == HealthTest;
		case EHealthFilterCheckType::NotEqual: return HealthReference != HealthTest;
		case EHealthFilterCheckType::GreaterThan: return HealthReference > HealthTest;
		case EHealthFilterCheckType::GreaterOrEqual: return HealthReference >= HealthTest;
		case EHealthFilterCheckType::LesserThan: return HealthReference < HealthTest;
		case EHealthFilterCheckType::LesserOrEqual: return HealthReference <= HealthTest;
	}

	// Should never make this far. If we do, the code above is missing an entry and has to be fixed.
	checkNoEntry();
	return false;
}
