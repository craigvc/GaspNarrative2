// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatCastActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatFunctionLibrary.h"
#include "Components/SphereComponent.h"
#include "Engine/World.h"
#include "Interfaces/Components/CombatWeaponManagerInterface.h"
#include "Net/UnrealNetwork.h"

FName ANinjaCombatCastActor::CastSphereName = "CastSphere";

ANinjaCombatCastActor::ANinjaCombatCastActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;
	bReplicates = true;
	bReinforceHitResults = true;
	bShouldIgnoreSource = true;
	bTryToAlignWithFloor = true;
	FloorTraceChannel = ECC_Visibility;
	FloorOffset = FVector(0.f, 0.f, 5.f);
	
	CastSphere = CreateOptionalDefaultSubobject<USphereComponent>(CastSphereName);
	CastSphere->SetSphereRadius(60.f);
	CastSphere->SetAutoActivate(false);
	SetRootComponent(CastSphere);
}

void ANinjaCombatCastActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, CastOwnerPtr);
}

void ANinjaCombatCastActor::BeginPlay()
{
	Super::BeginPlay();

	if (!Execute_IsManagedByPool(this))
	{
		// This actor is not managed by a pool. Start the cast on Begin Play.
		Execute_StartCast(this);
	}
}

void ANinjaCombatCastActor::OnActivation_Implementation()
{
	Super::OnActivation_Implementation();
	Execute_StartCast(this);
}

void ANinjaCombatCastActor::OnDeactivation_Implementation()
{
	Super::OnDeactivation_Implementation();

	if (IsValid(CastSphere))
	{
		CastSphere->OnComponentBeginOverlap.RemoveDynamic(this, &ThisClass::HandleOverlap);
		CastSphere->Deactivate();
	}
}

void ANinjaCombatCastActor::SetCastOwner_Implementation(AActor* CastOwner)
{
	if (IsValid(CastOwner))
	{
		CastOwnerPtr = CastOwner;	
	}
}

void ANinjaCombatCastActor::SetGameplayEffectHandle_Implementation(FGameplayEffectSpecHandle& Handle)
{
	if (Handle.IsValid())
	{
		GameplayEffectHandle = Handle;	
	}
}

void ANinjaCombatCastActor::StartCast_Implementation()
{
	if (IsValid(CastSphere))
	{
		TryAlignWithFloor();
		
		CastSphere->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::HandleOverlap);
		CastSphere->Activate();

		if (HasAuthority())
		{
			const TArray<FOverlapInfo>& Overlaps = CastSphere->GetOverlapInfos();
			for (const FOverlapInfo& Overlap : Overlaps)
			{
				const FHitResult& Hit = Overlap.OverlapInfo;
				AActor* OtherActor = Hit.GetActor();
				TryApplyToTarget(OtherActor);
			}	
		}
	}
}

AActor* ANinjaCombatCastActor::GetCastOwner() const
{
	if (CastOwnerPtr.IsValid() && CastOwnerPtr->IsValidLowLevelFast())
	{
		return CastOwnerPtr.Get();
	}

	return nullptr;
}

AActor* ANinjaCombatCastActor::GetWeapon(const FGameplayTagQuery& WeaponQuery) const
{
	const AActor* CastSource = GetCastOwner();
	if (!IsValid(CastSource) || WeaponQuery.IsEmpty())
	{
		return nullptr;
	}

	const UActorComponent* WeaponManager = UNinjaCombatFunctionLibrary::GetWeaponManagerComponent(CastSource);
	if (!UNinjaCombatFunctionLibrary::IsValidWeaponManagerComponent(WeaponManager))
	{
		return nullptr;
	}

	return ICombatWeaponManagerInterface::Execute_GetWeapon(WeaponManager, WeaponQuery);
}

void ANinjaCombatCastActor::ApplyEffectToTarget(AActor* Target)
{
	if (!HasAuthority() || !GameplayEffectHandle.IsValid() || !IsValid(Target))
	{
		return;
	}
	
	FGameplayAbilityTargetingLocationInfo LocationInfo;
	LocationInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	LocationInfo.SourceActor = this;

	static constexpr bool bOneHandlePerActor = false;
	const TArray<TWeakObjectPtr<AActor>> Actors = { Target };
	const FGameplayAbilityTargetDataHandle TargetData = LocationInfo.MakeTargetDataHandleFromActors(Actors, bOneHandlePerActor);
	ApplyGameplayEffectToData(TargetData);
}

void ANinjaCombatCastActor::ApplyEffectToHitResult(const FHitResult& Hit)
{
	if (!HasAuthority() || !GameplayEffectHandle.IsValid() || !Hit.HasValidHitObjectHandle())
	{
		return;
	}
	
	FGameplayAbilityTargetingLocationInfo LocationInfo;
	LocationInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	LocationInfo.SourceActor = this;

	const FGameplayAbilityTargetDataHandle TargetData = LocationInfo.MakeTargetDataHandleFromHitResult(nullptr, Hit);
	ApplyGameplayEffectToData(TargetData);
}

void ANinjaCombatCastActor::ApplyGameplayEffectToData(const FGameplayAbilityTargetDataHandle& TargetData)
{
	// Apply Data is a proxy that can be overriden for a specific cast actor.
	//
	// But by default, we want to apply a detached GE Spec to a target. This means we won't rely
	// on the owner's ASC since the owner might not be available anymore.
	//
	const FGameplayTagContainer DynamicTags = GetDynamicGameplayTags();
	const TMap<FGameplayTag, float>& SetByCallerMagnitudes = GetAdditionalSetByCallerMagnitudes();
	UNinjaCombatFunctionLibrary::ApplyDetachedGameplayEffectSpecToTarget(GameplayEffectHandle, TargetData, this, DynamicTags, SetByCallerMagnitudes);
}

FGameplayTagContainer ANinjaCombatCastActor::GetDynamicGameplayTags_Implementation() const
{
	return FGameplayTagContainer::EmptyContainer;
}

TMap<FGameplayTag, float> ANinjaCombatCastActor::GetAdditionalSetByCallerMagnitudes_Implementation() const
{
	return TMap<FGameplayTag, float>();
}

void ANinjaCombatCastActor::TryAlignWithFloor()
{
	if (bTryToAlignWithFloor)
	{
		AlignWithFloor();
	}
}

void ANinjaCombatCastActor::AlignWithFloor_Implementation()
{
	const FVector Start = GetActorLocation();
	const FVector End = Start + FVector(0.f, 0.f, -10000.f);

	TArray<AActor*> ActorsToIgnore;
	CastSphere->GetOverlappingActors(ActorsToIgnore);

	FCollisionQueryParams Params = FCollisionQueryParams(TEXT("FloorAlignment"));
	Params.bTraceComplex = false;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActors(ActorsToIgnore);

	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, FloorTraceChannel, Params))
	{
		const FVector NewLocation = Hit.Location + FloorOffset;
		SetActorLocation(NewLocation);
	}
}

bool ANinjaCombatCastActor::ShouldApplyToTarget_Implementation(const AActor* Target)
{
	if (!IsValid(Target))
	{
		return false;
	}
	
	if (bShouldIgnoreSource && Target == GetCastOwner())
	{
		if (Target == GetCastOwner())
		{
			return false;
		}

		TArray<AActor*> ActorsToIgnore;
		GetAttachedActors(ActorsToIgnore);
		if (ActorsToIgnore.Contains(Target))
		{
			return false;
		}
	}
	
	return true;
}

void ANinjaCombatCastActor::HandleOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority())
	{
		TryApplyToTarget(OtherActor);	
	}
}

void ANinjaCombatCastActor::TryApplyToTarget(AActor* OtherActor)
{
	if (ShouldApplyToTarget(OtherActor))
	{
		FHitResult HitResult;
		if (bReinforceHitResults && GetHitResultForTarget(HitResult, OtherActor))
		{
			ApplyEffectToHitResult(HitResult);	
		}
		else
		{
			ApplyEffectToTarget(OtherActor);
		}
	}	
}

bool ANinjaCombatCastActor::GetHitResultForTarget(FHitResult& OutHitResult, AActor* OtherActor) const
{
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(HandleCastOverlap));
	TraceParams.TraceTag = TEXT("CastOverlap");
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.bTraceComplex = true;
	return OtherActor->ActorLineTraceSingle(OutHitResult, GetActorLocation(), OtherActor->GetActorLocation(), ECC_Visibility, TraceParams);
}
