// Copyright Narrative Tools 2024. 


#include "AI/EnvQueryTest_AttackTokens.h"
#include <EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h>
#include <AbilitySystemGlobals.h>
#include "GAS/NarrativeAbilitySystemComponent.h"

UEnvQueryTest_AttackTokens::UEnvQueryTest_AttackTokens(const FObjectInitializer& ObjectInitializer)
{
	Cost = EEnvTestCost::Low;
	//SetWorkOnFloatValues(false);

	// We can only check attack tokens in actors 
	ValidItemType = UEnvQueryItemType_ActorBase::StaticClass();
	TestPurpose = EEnvTestPurpose::Score;
}

void UEnvQueryTest_AttackTokens::RunTest(FEnvQueryInstance& QueryInstance) const
{
	UObject* QueryOwner = QueryInstance.Owner.Get();

	if (QueryOwner == nullptr)
	{
		return;
	}

	const AActor* QueryActor = Cast<AActor>(QueryOwner);

	if (!QueryActor)
	{
		return;
	}

	FloatValueMin.BindData(QueryOwner, QueryInstance.QueryID);
	float MinThresholdValue = FloatValueMin.GetValue();

	FloatValueMax.BindData(QueryOwner, QueryInstance.QueryID);
	float MaxThresholdValue = FloatValueMax.GetValue();

	// loop through all items and score them based on whether they have attack slots free 
	for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
	{
		const AActor* ItemActor = GetItemActor(QueryInstance, It.GetIndex());
		UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(ItemActor));

		float Score = 0.f;
		if (NASC)
		{
			if (bCheckGrantedTokens)
			{
				Score = NASC->GetNumGrantedAttackTokens();
			}
			else
			{
				Score = NASC->GetAvailableAttackTokens();
			}
		}

		It.SetScore(TestPurpose, FilterType, Score, MinThresholdValue, MaxThresholdValue);
	}
}

FText UEnvQueryTest_AttackTokens::GetDescriptionTitle() const
{
	if (bCheckGrantedTokens)
	{
		return NSLOCTEXT("EnvQueryTest_AttackTokens", "DescriptionDetailsUsed", "Granted Attack Tokens");
	}
	else
	{
		return NSLOCTEXT("EnvQueryTest_AttackTokens", "DescriptionDetailsUsed", "Available Attack Tokens");
	}
}

FText UEnvQueryTest_AttackTokens::GetDescriptionDetails() const
{
	return DescribeFloatTestParams();
}
