// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatMotionWarpingComponent.h"

#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

UNinjaCombatMotionWarpingComponent::UNinjaCombatMotionWarpingComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	
	bSearchForAnchorComponents = true;
	bEnableDebugMode = false;
}

void UNinjaCombatMotionWarpingComponent::SetCombatWarpTarget_Implementation(const FName WarpName, const AActor* Target, float DistanceOffset)
{
	if (WarpName != NAME_None && IsValid(Target))
	{
		if (bSearchForAnchorComponents)
		{
			TArray<UActorComponent*> AnchorComponents = Target->GetComponentsByTag(USceneComponent::StaticClass(), WarpName);
			if (AnchorComponents.Num() > 0)
			{
				Algo::SortBy(AnchorComponents, [&](const UActorComponent* Component)
				{
					const USceneComponent* SceneComponent = Cast<USceneComponent>(Component);
					return (GetOwner()->GetActorLocation() - SceneComponent->GetComponentLocation()).Size();
				});
		
				const USceneComponent* PositionComponent = Cast<USceneComponent>(AnchorComponents[0]);
				if (IsValid(PositionComponent))
				{
					const FVector ComponentLocation = PositionComponent->GetComponentLocation();
					const FRotator ComponentRotation = PositionComponent->GetComponentRotation();
			
					AddOrUpdateWarpTargetFromLocationAndRotationWithOffset(WarpName, ComponentLocation, ComponentRotation, DistanceOffset);
					DebugWarpLocationAndRotation(WarpName, ComponentLocation, ComponentRotation);
					return;
				}
			}
		}

		// Not searching for components, or no component was found for the warp name.
		// In this case, use the target itself as the warp location/rotation. 
		//
		const FVector CalculatedWarpLocation = CalculateWarpLocation(Target);
		const FRotator CalculatedWarpRotation = CalculateWarpRotation(Target);
		
		AddOrUpdateWarpTargetFromLocationAndRotationWithOffset(WarpName, CalculatedWarpLocation, CalculatedWarpRotation, DistanceOffset);
		DebugWarpLocationAndRotation(WarpName, CalculatedWarpLocation, CalculatedWarpRotation);
	}
}

void UNinjaCombatMotionWarpingComponent::ClearCombatWarpTarget_Implementation(const FName WarpName)
{
	RemoveWarpTarget(WarpName);
}

void UNinjaCombatMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotationWithOffset(const FName WarpName,
	FVector TargetLocation, const FRotator TargetRotation, const float Offset)
{
	const FVector SourceLocation = GetOwner()->GetActorLocation();

	const FVector Direction = (TargetLocation - SourceLocation).GetSafeNormal();
	TargetLocation = TargetLocation - (Direction * Offset);

	AddOrUpdateWarpTargetFromTransform(WarpName, FTransform(TargetRotation, TargetLocation));
}

FVector UNinjaCombatMotionWarpingComponent::CalculateWarpLocation_Implementation(const AActor* Target) const
{
	check(IsValid(Target));

	const FVector AvatarLocation = GetOwner()->GetActorLocation();
	const FVector EnemyLocation = Target->GetActorLocation();

	FVector DirectionToEnemy = EnemyLocation - AvatarLocation;
	DirectionToEnemy.Normalize();

	FVector WarpLocation = EnemyLocation - DirectionToEnemy;
	WarpLocation.Z = EnemyLocation.Z;

	return WarpLocation;
}

FRotator UNinjaCombatMotionWarpingComponent::CalculateWarpRotation_Implementation(const AActor* Target) const
{
	check(IsValid(Target));

	const FVector AvatarLocation = GetOwner()->GetActorLocation();
	const FVector EnemyLocation = Target->GetActorLocation();

	return UKismetMathLibrary::FindLookAtRotation(AvatarLocation, EnemyLocation);
}

void UNinjaCombatMotionWarpingComponent::DebugWarpLocationAndRotation(FName WarpName, const FVector& Location, const FRotator& Rotation) const
{
#if WITH_EDITOR
	if (bEnableDebugMode)
	{
		static constexpr float Radius = 36.f;
		static constexpr int32 Segments = 16;
		static constexpr bool bPersistentLines = false;
		static constexpr float LifeTime = 5.f;
		
		DrawDebugSphere(GetWorld(), Location, Radius, Segments, FColor::Emerald, bPersistentLines, LifeTime);

		static constexpr float ArrowSize = 25.f;
		const FVector ArrowEnd = Location + (ArrowSize * Rotation.Vector());
		DrawDebugDirectionalArrow(GetWorld(), Location, ArrowEnd, ArrowSize, FColor::Emerald, bPersistentLines, LifeTime);
	}
#endif
}