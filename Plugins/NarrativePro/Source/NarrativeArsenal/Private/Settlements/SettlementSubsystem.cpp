// Copyright Narrative Tools 2024. 


#include "Settlements/SettlementSubsystem.h"
#include "Settlements/Settlement.h"
#include <EngineUtils.h>

USettlementSubsystem::USettlementSubsystem()
{

}

void USettlementSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	//Settlements should be auto-cached 
	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;

		if (ASettlement* Settlement = Cast<ASettlement>(Actor))
		{
			SettlementMap.Add(Settlement->SettlementTag, Settlement);
		}
	}
}

class ASettlement* USettlementSubsystem::GetSettlement(FGameplayTag SettlementTag) const
{
	if (SettlementMap.Contains(SettlementTag))
	{
		return *SettlementMap.Find(SettlementTag);
	}

	return nullptr;
}
