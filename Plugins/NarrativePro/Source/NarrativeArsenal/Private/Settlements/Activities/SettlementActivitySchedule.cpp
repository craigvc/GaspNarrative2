// Copyright Narrative Tools 2024. 


#include "Settlements/Activities/SettlementActivitySchedule.h"
#include "Settlements/Activities/SettlementActivityComponent.h"
#include "Settlements/Activities/SettlementActivity.h"

USettlementActivitySchedule::USettlementActivitySchedule(const FObjectInitializer& ObjectInitializer)
{

}

UScheduledBehavior_Settlement::UScheduledBehavior_Settlement()
{

}

void UScheduledBehavior_Settlement::SetOwner(class ASettlement* InOwnerSettlement)
{
	if (InOwnerSettlement)
	{
		OwnerSettlement = InOwnerSettlement;
	}
}

UScheduledBehavior_RunSettlementActivity::UScheduledBehavior_RunSettlementActivity()
{

}


FString UScheduledBehavior_RunSettlementActivity::DescribeBehavior_Implementation() const
{
	if (ActivityTemplate)
	{
		return ActivityTemplate->DescribeActivity();
	}

	return GetName();
}

void UScheduledBehavior_RunSettlementActivity::HandleStarted_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (OwnerSettlement)
	{
		if (USettlementActivityComponent* SettlementAC = OwnerSettlement->SettlementActivityManager)
		{
			ActiveActivity = SettlementAC->RunActivity(ActivityTemplate);
		}
	}
}


void UScheduledBehavior_RunSettlementActivity::HandleEnded_Implementation(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	if (OwnerSettlement && ActiveActivity)
	{
		if (USettlementActivityComponent* SettlementAC = OwnerSettlement->SettlementActivityManager)
		{
			SettlementAC->StopActivity(ActiveActivity);
		}
	}
}