// Ninja Bear Studio Inc., all rights reserved.
#include "AI/StateTree/STCondition_CheckAttitude.h"

#include "NinjaFactionFunctionLibrary.h"
#include "StateTreeExecutionContext.h"

USTCondition_CheckAttitude::USTCondition_CheckAttitude(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Attitude = ETeamAttitude::Neutral;
	AttitudeTest = ETeamAttitude::Hostile;
	bInvert = false;
}

bool USTCondition_CheckAttitude::TestCondition(FStateTreeExecutionContext& Context) const
{
	const bool bResult = Attitude == AttitudeTest;
	return bResult ^ bInvert;
}
