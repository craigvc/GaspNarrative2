// Ninja Bear Studio Inc., all rights reserved.
#include "AI/StateTree/STEvaluator_FactionData.h"

#include "NinjaFactionFunctionLibrary.h"
#include "StateTreeExecutionContext.h"
#include "Components/NinjaFactionComponent.h"
#include "GameFramework/Controller.h"

USTEvaluator_FactionData::USTEvaluator_FactionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FactionMember = nullptr;
	TeamId = FGenericTeamId::NoTeam;
	FactionTag = FGameplayTag::EmptyTag;
	AttitudeTowardsAgent = ETeamAttitude::Neutral;
}

void USTEvaluator_FactionData::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	bool bSolved = false;
	
	const AController* ContextOwner = Cast<AController>(Context.GetOwner());
	if (IsValid(FactionMember) && IsValid(ContextOwner))
	{
		const UNinjaFactionComponent* FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(FactionMember);
		FFactionMembership MainMembership;
		TEnumAsByte<ETeamAttitude::Type> Attitude;
		
		if (IsValid(FactionComponent)
			&& FactionComponent->GetMainFactionMembership(MainMembership)
			&& UNinjaFactionFunctionLibrary::GetAttitude(ContextOwner, FactionMember, Attitude))
		{
			FactionTag = MainMembership.GetFactionTag();
			TeamId = MainMembership.GetGenericTeamId().GetId();
			AttitudeTowardsAgent = Attitude;
			bSolved = true;
		}
	}

	if (!bSolved)
	{
		TeamId = FGenericTeamId::NoTeam;
		FactionTag = FGameplayTag::EmptyTag;
		AttitudeTowardsAgent = ETeamAttitude::Neutral;
	}
}
