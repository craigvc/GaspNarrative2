// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatSubsystem.h"

#include "AbilitySystemGlobals.h"

void UNinjaCombatSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UAbilitySystemGlobals::Get().InitGlobalData();

	InitializeStream();
}

void UNinjaCombatSubsystem::InitializeStream()
{
	RandomStream = FRandomStream();
	RandomStream.Initialize(FDateTime::Now().ToUnixTimestamp());
}

float UNinjaCombatSubsystem::GetRandomFloatInRange(const float Min, const float Max) const
{
	return RandomStream.FRandRange(Min, Max);	
}