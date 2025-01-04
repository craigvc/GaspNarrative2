// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/NinjaCombatDirectionalAnimationProvider.h"

#include "Types/FCombatAnimationDirection.h"

UNinjaCombatDirectionalAnimationProvider::UNinjaCombatDirectionalAnimationProvider()
{
	DefaultSectionName = "Backward";
	InitializeDirections(AnimationDirections);	
}

FName UNinjaCombatDirectionalAnimationProvider::GetSectionName_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	const FName SectionName = GetAbilitySectionName(CombatAbility);
	if (SectionName != NAME_None)
	{
		// The ability is overriding the value.
		return SectionName;
	}
	
	float Angle;
	if (CalculateAnimationAngle(CombatAbility, Angle))
	{
		const int32 Index = AnimationDirections.IndexOfByPredicate([Angle](const FCombatAnimationDirection& D) { return D.InRange(Angle); });
		if (Index != INDEX_NONE)
		{
			return AnimationDirections[Index].SectionName;
		}
	}

	return DefaultSectionName;
}

bool UNinjaCombatDirectionalAnimationProvider::CalculateAnimationAngle_Implementation(
	UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const
{
	return false;
}

void UNinjaCombatDirectionalAnimationProvider::InitializeDirections(TArray<FCombatAnimationDirection>& DirectionsArray)
{
	static constexpr int32 DirectionCount = 10;
	
	static const FName Forward = "Forward", Backward = "Backward", L045 = "Left_045", L090 = "Left_090",
		L135 = "Left_135", R045 = "Right_045", R090 = "Right_090", R135 = "Right_135";
	
	DirectionsArray.Reset(DirectionCount);
	DirectionsArray.Add(FCombatAnimationDirection(0.f, 35.f, Forward));
	DirectionsArray.Add(FCombatAnimationDirection(-35.f, 0.f, Forward));
	DirectionsArray.Add(FCombatAnimationDirection(-74.f, -36.f, L045));
	DirectionsArray.Add(FCombatAnimationDirection(-125.f, -75.f, L090));
	DirectionsArray.Add(FCombatAnimationDirection(-164.f, -126.f, L135));
	DirectionsArray.Add(FCombatAnimationDirection(36.f, 74.f, R045));
	DirectionsArray.Add(FCombatAnimationDirection(75.f, 125.f, R090));
	DirectionsArray.Add(FCombatAnimationDirection(126.f, 164.f, R135));
	DirectionsArray.Add(FCombatAnimationDirection(165.f, 180.f, Backward));
	DirectionsArray.Add(FCombatAnimationDirection(-180.f, -165.f, Backward));	
}
