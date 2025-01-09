// Copyright Narrative Tools 2024. 


#include "AI/EnvQueryTest_AttackPriority.h"
#include <EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h>
#include <AbilitySystemGlobals.h>
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "Character/CharacterAppearance.h"
#include "Character/CharacterDefinition.h"

UEnvQueryTest_AttackPriority::UEnvQueryTest_AttackPriority(const FObjectInitializer& ObjectInitializer)
{
	Cost = EEnvTestCost::Low;
	//SetWorkOnFloatValues(false);

	// We can only check attack tokens in actors 
	ValidItemType = UEnvQueryItemType_ActorBase::StaticClass();
	TestPurpose = EEnvTestPurpose::Score;
}

void UEnvQueryTest_AttackPriority::RunTest(FEnvQueryInstance& QueryInstance) const
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

	// loop through all items and score them based on their attack priority
	for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
	{
		const AActor* ItemActor = GetItemActor(QueryInstance, It.GetIndex());

		float Score = 0.f;

		if (const ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(ItemActor))
		{
			if (UCharacterDefinition* CDef = NChar->GetCharacterDefinition())
			{
				Score = CDef->AttackPriority;
			}
		}

		It.SetScore(TestPurpose, FilterType, Score, MinThresholdValue, MaxThresholdValue);
	}
}

FText UEnvQueryTest_AttackPriority::GetDescriptionTitle() const
{
	return NSLOCTEXT("EnvQueryTest_AttackPriority", "DescriptionTitle", "Attack Priority");
}

FText UEnvQueryTest_AttackPriority::GetDescriptionDetails() const
{
	return DescribeFloatTestParams();
}
