// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatFunctionLibrary.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayCueManager.h"
#include "NiagaraSystem.h"
#include "NinjaCombatSettings.h"
#include "AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"
#include "Components/DecalComponent.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interfaces/CombatSystemInterface.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "Interfaces/Components/CombatDissolveManagerInterface.h"
#include "Interfaces/Components/CombatMotionWarpingInterface.h"
#include "Interfaces/Components/CombatPhysicalAnimationInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "Interfaces/Components/CombatWeaponManagerInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInterface.h"

UNinjaCombatManagerComponent* UNinjaCombatFunctionLibrary::GetCombatManagerComponent(const AActor* Owner)
{
	if (!IsValid(Owner))
	{
		return nullptr;
	}
	
	UNinjaCombatManagerComponent* CombatManager = nullptr;
	if (Owner->Implements<UCombatSystemInterface>())
	{
		CombatManager = ICombatSystemInterface::Execute_GetCombatManager(Owner);
	}

	if (!IsValid(CombatManager))
	{
		CombatManager = Owner->FindComponentByClass<UNinjaCombatManagerComponent>();
	}

	return CombatManager;
}

USkeletalMeshComponent* UNinjaCombatFunctionLibrary::GetCombatMesh(const AActor* Owner)
{
	if (IsValid(Owner) && Owner->Implements<UCombatSystemInterface>())
	{
		return ICombatSystemInterface::Execute_GetCombatMesh(Owner);
	}

	return nullptr;
}

UAnimInstance* UNinjaCombatFunctionLibrary::GetAnimationInstance(const AActor* Owner)
{
	if (IsValid(Owner) && Owner->Implements<UCombatSystemInterface>())
	{
		return ICombatSystemInterface::Execute_GetCombatAnimInstance(Owner);
	}

	return nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetComboManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheComboManager() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetDamageManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheDamageManager() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheDefenseManager() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetDissolveManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheDissolveManager() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetMotionWarpingComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheMotionWarping() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetPhysicalAnimationComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCachePhysicalAnimation() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetTargetManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheTargetManager() : nullptr;
}

UActorComponent* UNinjaCombatFunctionLibrary::GetWeaponManagerComponent(const AActor* Owner)
{
	UNinjaCombatManagerComponent* CombatManager = GetCombatManagerComponent(Owner);
	return IsValid(CombatManager) ? CombatManager->GetAndCacheWeaponManager() : nullptr;
}

bool UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatComboManagerInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatDamageManagerInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidDefenseManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatDefenseManagerInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidDissolveManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatDissolveManagerInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidMotionWarpingComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatMotionWarpingInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidPhysicalAnimationComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatPhysicalAnimationInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatTargetManagerInterface>();
}

bool UNinjaCombatFunctionLibrary::IsValidWeaponManagerComponent(const UActorComponent* ActorComponent)
{
	return IsValid(ActorComponent) && ActorComponent->Implements<UCombatWeaponManagerInterface>();
}

TScriptInterface<ICombatMeleeInterface> UNinjaCombatFunctionLibrary::GetMeleeScript(UObject* Target)
{
	if (IsValid(Target) && Target->Implements<UCombatMeleeInterface>())
	{
		const TScriptInterface<ICombatMeleeInterface> MeleeScript(Target);
		return MeleeScript;
	}

	return nullptr;
}

TScriptInterface<ICombatRangedInterface> UNinjaCombatFunctionLibrary::GetRangedScript(UObject* Target)
{
	if (IsValid(Target) && Target->Implements<UCombatRangedInterface>())
	{
		const TScriptInterface<ICombatRangedInterface> RangedScript(Target);
		return RangedScript;
	}

	return nullptr;
}

float UNinjaCombatFunctionLibrary::CalculateHitAngleFromHitResult(const AActor* Attacker, const AActor* Victim,
	const FHitResult& HitResult, const float DefaultAngle, const float HitLocationWeight, const float AttackerLocationWeight)
{
	check(IsValid(Attacker) && IsValid(Victim));

	// Both weights are disabled, this can only return the default angle.
	if (HitLocationWeight == 0.f && AttackerLocationWeight == 0.f)
	{
		return DefaultAngle;
	}
	
	const FVector HitLocation = HitResult.Location;
	const FVector AttackerDirection = (Attacker->GetActorLocation() - Victim->GetActorLocation()).GetSafeNormal();
	
	FVector HitDirection = HitLocation - Victim->GetActorLocation();
	HitDirection.Normalize();

	FVector BlendedDirection = (HitDirection * HitLocationWeight) + (AttackerDirection * AttackerLocationWeight);
	BlendedDirection.Normalize();

	const FVector ForwardVector = Victim->GetActorForwardVector();
	const FVector RightVector = Victim->GetActorRightVector();

	const float BlendedForwardDot = FVector::DotProduct(ForwardVector, BlendedDirection);
	const float RightDot = FVector::DotProduct(RightVector, BlendedDirection);
	const float BlendedAngle = FMath::RadiansToDegrees(FMath::Acos(BlendedForwardDot));
	
	// Attacker is mostly in front.
	if (BlendedAngle < 45.0f) 
	{
		if (RightDot < 0 && RightDot > -0.5f)
		{
			// Hit was from the left side, adjust to a front hit.
			return 0.f;
		}
		
		if (RightDot > 0 && RightDot < 0.5f)
		{
			// Hit was from the right side, adjust to a front hit.
			return 0.f;
		}
		
		// Regular hit from the front.
		return 0.f;
	}

	// Attacker is mostly behind.
	if (BlendedAngle > 135.0f) 
	{
		// Hit from the back.
		return 180.f;
	}

	if (RightDot > 0.5f)
	{
		// Hit from the right.
		return 90.f;
	}
	if (RightDot < -0.5f)
	{
		// Hit from the left.
		return -90.f;
	}

	return DefaultAngle;
}

void UNinjaCombatFunctionLibrary::BreakDamageStruct(const FDamageEntry& Entry, AActor*& Causer,
	AActor*& Instigator, bool& bIsCriticalHit, bool& bIsBreakerHit, bool& bIsStaggerHit, bool& bIsFatalHit, int32& Handle,
	float& DamageApplied, float& MitigationCost, float& PreviousHealth, float& PreviousStamina,
	FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags)
{
	const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
	const FGameplayEffectContextHandle& EffectContextHandle = Entry.EffectContext;
	const FGameplayEffectContext* EffectContext = EffectContextHandle.Get();
	
	Causer = EffectContextHandle.GetEffectCauser();
	Instigator = EffectContextHandle.GetInstigator();
	bIsCriticalHit = Entry.IsCriticalHit();
	bIsBreakerHit = Entry.IsBreakerHit();
	bIsStaggerHit = Entry.IsStaggeringHit();
	bIsFatalHit = Entry.IsFatalHit();
	Handle = Entry.Handle;
	DamageApplied = Proxy->GetDamageApplied(EffectContext);
	MitigationCost = Proxy->GetMitigationCost(EffectContext);
	PreviousHealth = Proxy->GetPreviousHealthOnTarget(EffectContext);
	PreviousStamina = Proxy->GetPreviousStaminaOnTarget(EffectContext);
	SourceTags = Entry.CapturedSourceTags;
	TargetTags = Entry.CapturedTargetTags;
}

void UNinjaCombatFunctionLibrary::ExecuteGameplayCueLocally(AActor* Owner, const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters& GameplayCueParameters)
{
	UGameplayCueManager* CueManager = UAbilitySystemGlobals::Get().GetGameplayCueManager();
	CueManager->HandleGameplayCue(Owner, GameplayCueTag, EGameplayCueEvent::Type::Executed, GameplayCueParameters);
}

void UNinjaCombatFunctionLibrary::AddGameplayCueLocally(AActor* Owner, const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters& GameplayCueParameters)
{
	UGameplayCueManager* CueManager = UAbilitySystemGlobals::Get().GetGameplayCueManager();
	CueManager->HandleGameplayCue(Owner, GameplayCueTag, EGameplayCueEvent::Type::OnActive, GameplayCueParameters);
	CueManager->HandleGameplayCue(Owner, GameplayCueTag, EGameplayCueEvent::Type::WhileActive, GameplayCueParameters);
}

void UNinjaCombatFunctionLibrary::RemoveGameplayCueLocally(AActor* Owner, const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters& GameplayCueParameters)
{
	UGameplayCueManager* CueManager = UAbilitySystemGlobals::Get().GetGameplayCueManager();
	CueManager->HandleGameplayCue(Owner, GameplayCueTag, EGameplayCueEvent::Type::Removed, GameplayCueParameters);
}

FGameplayCueParameters UNinjaCombatFunctionLibrary::CreateGameplayCueFromEffectContext(
	const FGameplayEffectContextHandle& EffectContextHandle)
{
	FGameplayCueParameters CueParameters = FGameplayCueParameters();
	
	CueParameters.SourceObject = EffectContextHandle.GetSourceObject();
	CueParameters.Instigator = EffectContextHandle.GetInstigator();
	CueParameters.EffectCauser = EffectContextHandle.GetEffectCauser();
	CueParameters.AbilityLevel = EffectContextHandle.GetAbilityLevel();
	CueParameters.EffectContext = EffectContextHandle;

	if (EffectContextHandle.GetHitResult())
	{
		CueParameters.Location = EffectContextHandle.GetHitResult()->ImpactPoint;
		CueParameters.Normal = EffectContextHandle.GetHitResult()->Normal;
		CueParameters.PhysicalMaterial = EffectContextHandle.GetHitResult()->PhysMaterial;
	}
    
	return CueParameters;
}

UDecalComponent* UNinjaCombatFunctionLibrary::SpawnBloodDecal(const UObject* WorldContextObject,
	const TArray<FBasicParticleData>& Data, const UNiagaraSystem* NiagaraSystem,
	const FVector& SimulationPositionOffset, const FVector& BaseSize, UMaterialInterface* DecalMaterial,
	const float DecalChance, const float ScreenSize, const float DecalLifeSpan, const float FadeOutDuration, const float FixedXSize,
	const FVector2D SizeModifierRange, const FVector2D LifespanModifierRange)
{
	check(WorldContextObject);

	UDecalComponent* DecalComponent = nullptr;
	
	if (!UKismetSystemLibrary::IsDedicatedServer(WorldContextObject) && IsValid(NiagaraSystem) && IsValid(DecalMaterial))
	{
		for (const FBasicParticleData& ParticleData : Data)
		{
			if (FMath::FRandRange(0.f, 1.f) <= DecalChance)
			{
				const FVector ImpactPosition = ParticleData.Position;
				const FVector ImpactVelocity = ParticleData.Velocity;
			
				FVector DecalSize = BaseSize * FMath::FRandRange(SizeModifierRange.X, SizeModifierRange.Y);
				DecalSize.X = FixedXSize;

				FRotator DecalRotation = ImpactVelocity.ToOrientationRotator();
				DecalRotation.Roll = FMath::FRandRange(0.f, 360.f);

				const float ActualLifeSpan = DecalLifeSpan * FMath::FRandRange(LifespanModifierRange.X, LifespanModifierRange.Y);
				
				DecalComponent = UGameplayStatics::SpawnDecalAtLocation(WorldContextObject, DecalMaterial,
					DecalSize, ImpactPosition, DecalRotation, ActualLifeSpan);

				if (IsValid(DecalComponent))
				{
					DecalComponent->SetFadeScreenSize(ScreenSize);
					DecalComponent->SetFadeIn(0.f, 0.2f);
					DecalComponent->SetFadeOut(ActualLifeSpan, FadeOutDuration, false);
				}
			}
		}
	}

	return DecalComponent;
}

void UNinjaCombatFunctionLibrary::BreakActiveGameplayEffect(const FActiveGameplayEffect& ActiveEffect, float& Duration,
	float& Period, float& EndTime, TSubclassOf<UGameplayEffect>& EffectClass)
{
	Duration = ActiveEffect.GetDuration();
	Period = ActiveEffect.GetPeriod();
	EndTime = ActiveEffect.GetEndTime();
	EffectClass = ActiveEffect.Spec.Def->GetClass();
}

TArray<FActiveGameplayEffectHandle> UNinjaCombatFunctionLibrary::ApplyDetachedGameplayEffectSpecToTarget(
	const FGameplayEffectSpecHandle& GameplayEffectHandle, const FGameplayAbilityTargetDataHandle& TargetData,
	AActor* Causer, const FGameplayTagContainer& DynamicTags, const TMap<FGameplayTag, float>& SetByCallerMagnitudes)
{
	TArray<FActiveGameplayEffectHandle> Handles;
	
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetData.Data)
	{
		if (Data.IsValid())
		{
			// Here we have to diverge from the usual call to apply the Gameplay Effect Spec.
			//
			// This call is usually something like this:
			// Data->ApplyGameplayEffectSpec(*GameplayEffectHandle.Data.Get(), AbilityComponent->GetPredictionKeyForNewAction());
			//
			// However that expects the original ASC to be available, and applications will happen there.
			// This would be a problem, if the owner of that ASC is already dead. So instead, we will do
			// something similar to what happens in "Data::ApplyGameplayEffectSpec". but without actually
			// relying on the source ASC being active. Instead, we will rely on the target ASC.
			//
			// That way, we are able to continue using the provided Gameplay Effect Handle and apply
			// damage to sources even if the ASC that created that spec is not available anymore.
			//
			const FGameplayEffectSpec& OriginalSpec = *GameplayEffectHandle.Data.Get();

			FGameplayEffectSpec	SpecToApply(OriginalSpec);
			FGameplayEffectContextHandle EffectContext = SpecToApply.GetContext().Duplicate();
			EffectContext.AddInstigator(SpecToApply.GetContext().GetInstigator(), Causer);
			
			SpecToApply.SetContext(EffectContext);
			SpecToApply.AppendDynamicAssetTags(DynamicTags);

			// Allow the caller to set even more magnitudes to this effect.
			//
			// This is useful in case the causer wants to do something like modifying damage after each
			// target being hit for example. We don't want to "merge" the magnitudes, since that would
			// perform a "diff", not overriding values that were already set.
			//
			for (const TPair<FGameplayTag, float>& Magnitude : SetByCallerMagnitudes)
			{
				SpecToApply.SetSetByCallerMagnitude(Magnitude.Key, Magnitude.Value);
			}
			
			Data->AddTargetDataToContext(EffectContext, false);
			for (TWeakObjectPtr<AActor>& ActorPtr : Data->GetActors())
			{
				if (ActorPtr.IsValid() && ActorPtr->IsValidLowLevelFast())
				{
					const AActor* Target = ActorPtr.Get();

					UAbilitySystemComponent* TargetAbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Target);
					if (IsValid(TargetAbilityComponent))
					{
						const FActiveGameplayEffectHandle& Handle = TargetAbilityComponent->ApplyGameplayEffectSpecToSelf(SpecToApply);
						Handles.Add(Handle);
					}
				}
			}
		}
	}

	return Handles;
}
