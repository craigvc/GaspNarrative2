// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatPhysicalAnimationComponent.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/HitResult.h"
#include "Interfaces/CombatProjectileInterface.h"
#include "Interfaces/CombatSystemInterface.h"
#include "Kismet/KismetMathLibrary.h"

UNinjaCombatPhysicalAnimationComponent::UNinjaCombatPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bIsReactingToImpact = false;
	ImpactReactionTimeLeft = 0.f;
	Settings = FCombatPhysicalAnimationSettings();
}

void UNinjaCombatPhysicalAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->Implements<UCombatSystemInterface>())
	{
		USkeletalMeshComponent* Mesh = ICombatSystemInterface::Execute_GetCombatMesh(GetOwner());
		if (IsValid(Mesh))
		{
			SetSkeletalMeshComponent(Mesh);
		}
	}
}

void UNinjaCombatPhysicalAnimationComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	HandleSimulationReset(DeltaTime);
}

void UNinjaCombatPhysicalAnimationComponent::HandleImpact_Implementation(const AActor* EffectCauser, const FGameplayEffectContextHandle& Context)
{
	USkeletalMeshComponent* MyMesh = GetSkeletalMesh();
	if (ensure(IsValid(MyMesh)) && IsValid(EffectCauser) && Context.IsValid())
	{
		FHitResult Hit(ForceInit);
		if (Context.GetHitResult() != nullptr)
		{
			Hit = *Context.GetHitResult();
		}
		
		const FName ImpactBone = GetBoneName(Hit);
		if (ImpactBone != NAME_None)
		{
			static constexpr bool bIncludeSelf = true;
			static constexpr bool bNewSimulate = true;
			static constexpr bool bClearNotFound = false;

			ImpactReactionTimeLeft = Settings.DefaultReactionTime;

			MyMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			MyMesh->SetAllBodiesBelowSimulatePhysics(Settings.BaseBoneName, bNewSimulate, bIncludeSelf);
			MyMesh->SetAllBodiesBelowPhysicsBlendWeight(Settings.BaseBoneName, Settings.MaxBlendWeight);

			ApplyPhysicalAnimationProfileBelow(Settings.BaseBoneName, Settings.ProfileName, bIncludeSelf, bClearNotFound);

			const float Strength = GetStrength(EffectCauser);
			const FVector Impulse = CalculateImpulse(Hit, Strength);
			
			static constexpr bool bImpulseAsVelocity = true;
			MyMesh->AddImpulse(Impulse, ImpactBone, bImpulseAsVelocity);

			bIsReactingToImpact = true;
		}
	}
}

void UNinjaCombatPhysicalAnimationComponent::HandleSimulationReset_Implementation(const float DeltaTime)
{
	if (bIsReactingToImpact)
	{
		USkeletalMeshComponent* MyMesh = GetSkeletalMesh();

		static constexpr float FullKinematicBlend = 0.f;
		ImpactReactionTimeLeft = UKismetMathLibrary::FInterpTo(ImpactReactionTimeLeft, FullKinematicBlend, DeltaTime, Settings.KinematicInterpSpeed);
		ImpactReactionTimeLeft = FMath::Max(FullKinematicBlend, ImpactReactionTimeLeft);

		if (ImpactReactionTimeLeft > FullKinematicBlend)
		{
			static constexpr bool bSkipCustomPhysics = false;
			static constexpr bool bIncludeSelf = true;
			
			const float BlendWeight = FMath::Min(Settings.MaxBlendWeight, ImpactReactionTimeLeft);
			MyMesh->SetAllBodiesBelowPhysicsBlendWeight(Settings.BaseBoneName, BlendWeight, bSkipCustomPhysics, bIncludeSelf);
		}
		else
		{
			static constexpr bool bNewSimulate = false;
			static constexpr bool bIncludeSelf = true;
			
			MyMesh->SetAllBodiesBelowSimulatePhysics(Settings.BaseBoneName, bNewSimulate, bIncludeSelf);
			MyMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			bIsReactingToImpact = false;
		}
	}
}

FName UNinjaCombatPhysicalAnimationComponent::GetBoneName(const FHitResult& Hit) const
{
	if (Settings.bOverrideAllBoneImpacts)
	{
		return Settings.BoneReplacement;
	}
	
	if (Hit.IsValidBlockingHit())
	{
		const FName Bone = Hit.BoneName;
		if (Settings.BoneReplacements.Contains(Bone))
		{
			return Settings.BoneReplacements[Bone];
		}

		return Bone;
	}
	
	return NAME_None;
}

float UNinjaCombatPhysicalAnimationComponent::GetStrength(const AActor* EffectCauser) const
{
	if (IsValid(EffectCauser))
	{
		if (EffectCauser->Implements<UCombatMeleeInterface>())
		{
			return ICombatMeleeInterface::Execute_GetMeleeImpactStrength(EffectCauser);
		}

		if (EffectCauser->Implements<UCombatProjectileInterface>())
		{
			return ICombatProjectileInterface::Execute_GetProjectileImpactStrength(EffectCauser);	
		}
	}

	return Settings.DefaultStrength;
}

FVector UNinjaCombatPhysicalAnimationComponent::CalculateImpulse(const FHitResult& Hit, const float Strength)
{
	FVector Direction = Hit.TraceEnd - Hit.TraceStart;
	Direction.Normalize();
	return Direction * Strength;
}

void UNinjaCombatPhysicalAnimationComponent::SetImpactSettings_Implementation(const FCombatPhysicalAnimationSettings& NewSettings)
{
	Settings = NewSettings;
}