// Copyright Narrative Tools 2024. 


#include "AI/Activities/ActivityGroup.h"
#include "AI/Activities/NPCActivity.h"

UActivityGroup::UActivityGroup(const FObjectInitializer& ObjectInitializer)
{

}

void UActivityGroup::SetOwner(class ANarrativeNPCController* InOwnerController, class UNPCActivityComponent* InOwnerComp)
{
	check(InOwnerController && InOwnerComp);

	if (InOwnerController && InOwnerComp)
	{
		OwnerController = InOwnerController;
		OwnerActivityComp = InOwnerComp;
		
		for (auto& Group : Subgroups)
		{
			if (Group)
			{
				Group->SetOwner(InOwnerController, InOwnerComp);
			}
		}

		for (auto& Activity : GroupActivities)
		{
			if (Activity)
			{
				Activity->SetOwner(InOwnerController, InOwnerComp);
			}
		}
	}
}

bool UActivityGroup::CanUseGroup_Implementation(FString& FailReason) const
{
	return true; 
}

void UActivityGroup::GetActivitesInGroup(TArray<UNPCActivity*>& OutActivities) const
{
	FString FailReason;
	if (!CanUseGroup(FailReason))
	{
		return;
	}

	for (auto& Group : Subgroups)
	{
		if (Group)
		{
			Group->GetActivitesInGroup(OutActivities);
		}
	}

	for (auto& Activity : GroupActivities)
	{
		if (Activity && Activity->CanRunActivity(FailReason))
		{
			OutActivities.Add(Activity);
		}
	}

}
