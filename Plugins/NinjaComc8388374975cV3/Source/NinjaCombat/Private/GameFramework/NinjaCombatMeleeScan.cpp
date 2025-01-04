// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatMeleeScan.h"

#include "GameplayEffect.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "Components/MeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"

DEFINE_LOG_CATEGORY(LogNinjaCombatMeleeScan);

UNinjaCombatMeleeScan::UNinjaCombatMeleeScan()
{
	bEnableDebug = false;
	ScanChannel = GetDefault<UNinjaCombatSettings>()->MeleeScanChannel;
	ScanMode = EMeleeScanMode::SphereSweep;
	Duration = 1.5f;
	TrailGameplayCueTag = Tag_GameplayCue_Combat_MeleeTrails;
}

UNinjaCombatMeleeScan* UNinjaCombatMeleeScan::NewInstance(const TSubclassOf<UNinjaCombatMeleeScan> MeleeScanClass,
	AActor* Owner, AActor* Instigator, AActor* Causer, UMeshComponent* ScanMesh, const TArray<FName>& SocketNames,
	const ECollisionChannel ScanChannel, const EMeleeScanMode ScanMode, const FVector ShapeDimensions, const float Duration)
{
	const UClass* SafeMeleeScanClass = IsValid(MeleeScanClass) ? MeleeScanClass.Get() : StaticClass(); 
	UNinjaCombatMeleeScan* MeleeScan = NewObject<UNinjaCombatMeleeScan>(Owner, SafeMeleeScanClass);
	
	MeleeScan->ScanOwner = Owner;
	MeleeScan->Instigator = Cast<APawn>(Instigator);
	MeleeScan->Causer = Causer;
	MeleeScan->ScanMesh = ScanMesh;
	MeleeScan->SocketNames = SocketNames;
	MeleeScan->ScanChannel = ScanChannel;
	MeleeScan->ScanMode = ScanMode;
	MeleeScan->Duration = Duration;

	switch (ScanMode)
	{
		case EMeleeScanMode::BoxSweep:
			{
				MeleeScan->ScanShape = FCollisionShape::MakeBox(ShapeDimensions);
				break;
			}
		case EMeleeScanMode::CapsuleSweep:
			{
				MeleeScan->ScanShape = FCollisionShape::MakeCapsule(ShapeDimensions);
				break;
			}
		case EMeleeScanMode::SphereSweep:
			{
				const float SphereRadius = ShapeDimensions.X;
				MeleeScan->ScanShape = FCollisionShape::MakeSphere(SphereRadius);
				break;
			}
		default: ;
	}
	
	MeleeScan->SnapshotSocketPositions();
	return MeleeScan;
}

void UNinjaCombatMeleeScan::ScanForTargets_Implementation(TArray<FHitResult>& OutHits)
{
    if (!IsValid(ScanOwner)) return;

    const UWorld* World = ScanOwner->GetWorld();
    if (!IsValid(World)) return;

    FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(GetCombatTargets));
    TraceParams.TraceTag = TEXT("MeleeScanTrace");
    TraceParams.bReturnPhysicalMaterial = true;
    TraceParams.bTraceComplex = true;

    TArray<AActor*> IgnoredActors = GetIgnoredActors();
    for (const AActor* AttachedActor : IgnoredActors)
    {
        TraceParams.AddIgnoredActor(AttachedActor);
    }

    for (int32 SocketIdx = 0; SocketIdx < SocketNames.Num(); ++SocketIdx)
    {
        const FName SocketName = SocketNames[SocketIdx];

        const FVector LastSocketPosition = *LastSocketPositions.Find(SocketName);
        const FVector SocketPosition = ScanMesh->GetSocketLocation(SocketName);
        const FQuat SocketRotation = ScanMesh->GetSocketQuaternion(SocketName);
        LastSocketPositions[SocketName] = SocketPosition;

        TArray<FHitResult> HitResults;

        if (ScanMode == EMeleeScanMode::LineTrace)
        {
            const auto PerformLineTrace = [&](const int32 OtherIdx)
            {
                const FVector OtherSocketPosition = ScanMesh->GetSocketLocation(SocketNames[OtherIdx]);
                World->LineTraceMultiByChannel(HitResults, SocketPosition, OtherSocketPosition, ScanChannel, TraceParams);
                DrawScanLine(LastSocketPosition, OtherSocketPosition);
            };

            const int32 LastIdx = SocketIdx - 1;
            const int32 NextIdx = SocketIdx + 1;

            if (SocketNames.IsValidIndex(LastIdx))
            {
                PerformLineTrace(LastIdx);
            }
            else if (SocketNames.IsValidIndex(NextIdx))
            {
                PerformLineTrace(NextIdx);
            }

            World->LineTraceMultiByChannel(HitResults, LastSocketPosition, SocketPosition, ScanChannel, TraceParams);
            DrawScanLine(LastSocketPosition, SocketPosition);
        }
        else
        {
            World->SweepMultiByChannel(HitResults, LastSocketPosition, SocketPosition, SocketRotation, ScanChannel, ScanShape, TraceParams);
            DrawScanSweep(SocketPosition, SocketRotation);
        }

        for (const FHitResult& NewHit : HitResults)
        {
            const bool bAlreadyFoundInThisScan = OutHits.ContainsByPredicate([&](const FHitResult& Hit)
                { return NewHit.GetActor() == Hit.GetActor(); });

            const bool bEverFound = ConsolidatedHits.ContainsByPredicate([&](const FHitResult& Hit)
                { return NewHit.GetActor() == Hit.GetActor(); });

            if (!bAlreadyFoundInThisScan && !bEverFound)
            {
                OutHits.Add(NewHit);
                ConsolidatedHits.Add(NewHit);
                DrawNewTarget(NewHit);
            }
        }
    }
}

TArray<AActor*> UNinjaCombatMeleeScan::GetIgnoredActors_Implementation() const
{
	TArray<AActor*> IgnoredActors;

	if (IsValid(ScanOwner))
	{
		ScanOwner->GetAttachedActors(IgnoredActors);
		IgnoredActors.Add(ScanOwner);	
	}
	
	return IgnoredActors;
}

void UNinjaCombatMeleeScan::SetMeleeHitOverride(const TSubclassOf<UGameplayEffect>& NewMeleeHitOverride)
{
	if (IsValid(NewMeleeHitOverride))
	{
		MeleeHitOverride = NewMeleeHitOverride;	
	}
}

void UNinjaCombatMeleeScan::SetTrailGameplayCue(const FGameplayTag NewTrailGameplayCueTag)
{
	if (NewTrailGameplayCueTag.IsValid())
	{
		TrailGameplayCueTag = NewTrailGameplayCueTag;
	}
}

void UNinjaCombatMeleeScan::SnapshotSocketPositions()
{
	for (const FName& SocketName : SocketNames)
	{
		if (ScanMesh->DoesSocketExist(SocketName))
		{
			const FVector Location = ScanMesh->GetSocketLocation(SocketName);
			LastSocketPositions.Add(SocketName, Location);
		}
	}
}

bool UNinjaCombatMeleeScan::HasValidScanData() const
{
	if (ScanOwner == nullptr)
	{
		UE_LOG(LogNinjaCombatMeleeScan, Warning, TEXT("Melee Scan requires a a valid Scan Owner."));
		return false;
	}

	if (ScanMesh == nullptr)
	{
		UE_LOG(LogNinjaCombatMeleeScan, Warning, TEXT("Melee Scan requires a valid Mesh Component."));
		return false;
	}
	
	if (SocketNames.IsEmpty())
	{
		UE_LOG(LogNinjaCombatMeleeScan, Warning, TEXT("Melee Scan requires at least one Socket name."));
		return false;
	}	
	
	for (const FName& SocketName : SocketNames)
	{
		if (!ScanMesh->DoesSocketExist(SocketName))
		{
			UE_LOG(LogNinjaCombatMeleeScan, Warning, TEXT("Mesh %s does not have socket %s."), *GetNameSafe(ScanMesh), *SocketName.ToString());
			return false;
		}
	}

	return true;
}

void UNinjaCombatMeleeScan::DrawScanLine(const FVector& StartPosition, const FVector& EndPosition) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		const UWorld* World = ScanOwner->GetWorld();
		const float LifeTime = GetDefault<UNinjaCombatSettings>()->MeleeScanDebugDuration;
		::DrawDebugLine(World, StartPosition, EndPosition, FColor::Red, false, LifeTime);
	}
#endif
}

void UNinjaCombatMeleeScan::DrawScanSweep(const FVector& StartPosition, const FQuat& Rotation) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		const UWorld* World = ScanOwner->GetWorld();

		constexpr bool bPersistentLines = false;
		const float LifeTime = GetDefault<UNinjaCombatSettings>()->MeleeScanDebugDuration;
		
		if (ScanShape.IsBox())
		{
			const FVector Extent = ScanShape.GetExtent();
			::DrawDebugBox(World, StartPosition, Extent, Rotation, FColor::Red, bPersistentLines, LifeTime);
		}
		else if (ScanShape.IsCapsule())
		{
			const float HalfHeight = ScanShape.GetCapsuleHalfHeight();
			const float Radius = ScanShape.GetCapsuleRadius();
			::DrawDebugCapsule(World, StartPosition, HalfHeight, Radius, Rotation, FColor::Red, bPersistentLines, LifeTime);
		}
		else if (ScanShape.IsSphere())
		{
			const float Radius = ScanShape.GetSphereRadius();
			::DrawDebugSphere(World, StartPosition, Radius, 8.f, FColor::Red, bPersistentLines, LifeTime);
		}
	}
#endif	
}

void UNinjaCombatMeleeScan::DrawNewTarget(const FHitResult& NewHit) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		const float LifeTime = GetDefault<UNinjaCombatSettings>()->MeleeScanDebugDuration;
		const UWorld* World = ScanOwner->GetWorld();
		const FVector StartPosition = NewHit.Location;
		DrawDebugSphere(World, StartPosition, 24.f, 12.f, FColor::Emerald, false, LifeTime);

		if (IsValid(GEngine))
		{
			const FString Message = FString::Printf(TEXT("Hit: %s (%s)"), *GetNameSafe(NewHit.GetActor()), *GetNameSafe(NewHit.GetComponent()));
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, LifeTime, FColor::Green, Message);
		}
	}
#endif	
}