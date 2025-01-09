// Copyright Narrative Tools 2024. 


#include "AI/EnvQueryTest_Team.h"
#include "GameFramework/Actor.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h"
#include "ArsenalStatics.h"

UEnvQueryTest_Team::UEnvQueryTest_Team(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Cost = EEnvTestCost::Low;
	SetWorkOnFloatValues(false);

	// We can only check teams on actors 
	ValidItemType = UEnvQueryItemType_ActorBase::StaticClass();

	bIncludeEnemies = true;
	bIncludeFriendlies = true;
	bIncludeNeutrals = true;
}

void UEnvQueryTest_Team::RunTest(FEnvQueryInstance& QueryInstance) const
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

	BoolValue.BindData(QueryOwner, QueryInstance.QueryID);
	bool bWantsValid = BoolValue.GetValue();

	// loop through all items
	for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
	{
		const AActor* ItemActor = GetItemActor(QueryInstance, It.GetIndex());
		ETeamAttitude::Type Attitude = UArsenalStatics::GetAttitude(QueryActor, ItemActor);

		bool bPassesTest = false;

		if (bIncludeEnemies && Attitude == ETeamAttitude::Hostile)
		{
			bPassesTest = true;
		}

		if (bIncludeFriendlies && Attitude == ETeamAttitude::Friendly)
		{
			bPassesTest = true;
		}

		if (bIncludeNeutrals && Attitude == ETeamAttitude::Neutral)
		{
			bPassesTest = true;
		}

		It.SetScore(TestPurpose, FilterType, bPassesTest, bWantsValid);
	}
}

FText UEnvQueryTest_Team::GetDescriptionDetails() const
{
	FString DetectString = "Detect: ";

	if (bIncludeFriendlies)
	{
		DetectString += "[Friendlies]";
	}

	if (bIncludeNeutrals)
	{
		DetectString += "[Neutrals]";
	}

	if (bIncludeEnemies)
	{
		DetectString += "[Enemies]";
	}

	return FText::FromString(DetectString);
}
