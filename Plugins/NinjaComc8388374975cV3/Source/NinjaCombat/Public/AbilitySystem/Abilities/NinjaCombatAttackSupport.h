// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatTags.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "AbilitySystem/Interfaces/CombatAttackAbilityInterface.h"
#include "AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h"
#include "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"
#include "GameFramework/NinjaCombatMeleeScan.h"
#include "GameFramework/NinjaCombatProjectileRequest.h"
#include "Interfaces/CombatProjectileInterface.h"

/**
 * Set of static functions designed to support Attack Abilities.
 */
struct FNinjaCombatAttackSupport
{
	/**
	 * Handles the main events for when an event is received by an Attack Ability:
	 * Melee Scan Start, Melee Scan Stop and Launch Projectile.
	 */
	static void HandleEventReceived(UNinjaCombatGameplayAbility* Ability, const FGameplayEventData& Payload)
	{
		ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility == nullptr)
		{
			return;
		}
		
		if (Payload.EventTag == Tag_Combat_Event_MeleeScan_Start)
		{
			const UNinjaCombatMeleeScan* Scan = GetMeleeScan(Payload);
			if (ensureMsgf(IsValid(Scan) && Scan->HasValidScanData(), TEXT("Missing or invalid Melee Scan.")))
			{
				UAbilityTask_ScanMeleeTarget* MeleeScanTask = AttackAbility->GetMeleeScanTask();
				if (IsValid(MeleeScanTask) && MeleeScanTask->IsActive())
				{
					MeleeScanTask->Join(Scan);	
				}
				else
				{
					Ability->FinishLatentTask(MeleeScanTask);
					AttackAbility->InitializeMeleeScanTask(Scan);
				}
			}
		}
		else if (Payload.EventTag == Tag_Combat_Event_MeleeScan_Stop)
		{
			UAbilityTask_ScanMeleeTarget* MeleeScanTask = AttackAbility->GetMeleeScanTask();
			Ability->FinishLatentTask(MeleeScanTask);
		}
		else if (Payload.EventTag == Tag_Combat_Event_Projectile_Launch)
		{
			const FGameplayAbilityActivationInfo Info = Ability->GetCurrentActivationInfo();
			if (Ability->HasAuthority(&Info))
			{
				const UNinjaCombatProjectileRequest* Request = GetProjectileRequest(Ability, Payload);
				if (ensureMsgf(IsValid(Request) && Request->HasValidRequestData(), TEXT("Missing or invalid Projectile Request.")))
				{
					UAbilityTask_SpawnProjectile* SpawnProjectileTask = AttackAbility->GetSpawnProjectileTask();
					if (IsValid(SpawnProjectileTask) && SpawnProjectileTask->IsActive())
					{
						SpawnProjectileTask->AddProjectileRequest(Request);
					}
					else
					{
						Ability->FinishLatentTask(SpawnProjectileTask);
						AttackAbility->InitializeProjectileTask(Request);
					}
				}
			}
		}		
	}

	/**
	 * Tries to retrieve the Melee Scan from the first or second Optional Object in the Payload.
	 */
	static const UNinjaCombatMeleeScan* GetMeleeScan(const FGameplayEventData& Payload)
	{
		const UNinjaCombatMeleeScan* Scan = Cast<UNinjaCombatMeleeScan>(Payload.OptionalObject);
		if (!IsValid(Scan))
		{
			Scan = Cast<UNinjaCombatMeleeScan>(Payload.OptionalObject2);
		}

		return Scan;
	}

	/**
	 * Tries to retrieve the Projectile Request from the first or second Optional Object in the Payload.
	 */
	static const UNinjaCombatProjectileRequest* GetProjectileRequest(UNinjaCombatGameplayAbility* Ability, const FGameplayEventData& Payload)
	{
		const UNinjaCombatProjectileRequest* Request = Cast<UNinjaCombatProjectileRequest>(Payload.OptionalObject);
		if (!IsValid(Request))
		{
			Request = Cast<UNinjaCombatProjectileRequest>(Payload.OptionalObject2);
		}

		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (IsValid(Request) && AttackAbility != nullptr)
		{
			UNinjaCombatProjectileRequest* NonConstRequest = const_cast<UNinjaCombatProjectileRequest*>(Request);
			NonConstRequest->ReinforceProjectileClass(AttackAbility->GetProjectileClass());
		}
		
		return Request;
	}

	/**
	 * Handles a Scan Target that was received by the ability.
	 */
	static void HandleMeleeScanTargetsReceived(UNinjaCombatGameplayAbility* Ability, const UNinjaCombatMeleeScan* MeleeScan, const FGameplayAbilityTargetDataHandle& Data, const TFunction<void(const FHitResult* HitResult)>& PostEffectFunction = nullptr)
	{
		ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility == nullptr)
		{
			return;
		}
		
		for (int32 Idx = 0; Idx < Data.Num(); ++Idx)
		{
			const FHitResult* HitResult = Data.Get(Idx)->GetHitResult();
			const AActor* Target = HitResult ? HitResult->GetActor() : nullptr;
			
			if (HitResult != nullptr && IsValid(Target))
			{
				FGameplayEffectSpecHandle SpecHandle;
				if (CreateSpecHandleForMeleeHit(Ability, MeleeScan, SpecHandle) && SpecHandle.IsValid())
				{
					AttackAbility->ApplyGameplayEffectSpecToHitResult(SpecHandle, HitResult);

					if (PostEffectFunction)
					{
						PostEffectFunction(HitResult);	
					}
				}
			}
		}
	}

	/**
	 * Creates an effect spec for a melee hit, considering all possibilities for Effect Class and Level.
	 * Returns true if a valid effect spec was created, otherwise it returns false.
	 */	
	static bool CreateSpecHandleForMeleeHit(const UNinjaCombatGameplayAbility* Ability, const UNinjaCombatMeleeScan* MeleeScan, FGameplayEffectSpecHandle& OutHandle)
	{
		if (!ensure(IsValid(MeleeScan)))
		{
			return false;
		}
	
		AActor* EffectCauser = MeleeScan->GetCauser();
		const TSubclassOf<UGameplayEffect> HitEffect = GetMeleeGameplayEffectClass(Ability, MeleeScan, EffectCauser);
		if (!IsValid(EffectCauser) || !IsValid(HitEffect))
		{
			return false;
		}
	
		const float EffectLevel = GetMeleeGameplayEffectLevel(Ability, EffectCauser);
		OutHandle = Ability->MakeOutgoingGameplayEffectSpec(HitEffect, EffectLevel);
		if (!OutHandle.IsValid())
		{
			return false;
		}
	
		OutHandle.Data.Get()->GetContext().AddInstigator(Ability->GetAvatarActorFromActorInfo(), EffectCauser);
		ApplyDamageValues(Ability, EffectCauser, OutHandle);
		return true;
	}

	/**
	 * Provides the Gameplay Effect class to be applied by this ability, on successful melee attacks.
	 * It will obtain them in the following priority: Melee Scan > Effect Causer > Ability.
	 */
	static TSubclassOf<UGameplayEffect> GetMeleeGameplayEffectClass(const UNinjaCombatGameplayAbility* Ability, const UNinjaCombatMeleeScan* MeleeScan, const AActor* EffectCauser)
	{
		TSubclassOf<UGameplayEffect> ActualEffectClass = MeleeScan->GetMeleeHitOverride();
		if (IsValid(ActualEffectClass))
		{
			return ActualEffectClass;
		}
	
		if (IsValid(EffectCauser) && EffectCauser->Implements<UCombatMeleeInterface>())
		{
			ActualEffectClass = ICombatMeleeInterface::Execute_GetHitEffectClass(EffectCauser);
			if (IsValid(ActualEffectClass))
			{
				return ActualEffectClass;
			}
		}

		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility != nullptr)
		{
			return AttackAbility->GetMeleeDamageEffectClass();
		}		
	
		return nullptr;
	}

	/**
	 * Provides the Gameplay Effect level to be applied by this ability, on successful melee attacks.
	 * If the Effect Causer does not provide a level and neither the Ability, then the Ability Level is used.
	 */	
	static float GetMeleeGameplayEffectLevel(const UNinjaCombatGameplayAbility* Ability, const AActor* EffectCauser)
	{
		if (IsValid(EffectCauser) && EffectCauser->Implements<UCombatMeleeInterface>())
		{
			const float EffectLevel = ICombatMeleeInterface::Execute_GetHitEffectLevel(EffectCauser);
			if (EffectLevel > 0.f)
			{
				return EffectLevel;
			}
		}

		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility != nullptr)
		{
			const float EffectLevel = AttackAbility->GetMeleeDamageEffectLevel();
			return EffectLevel;
		}

		return Ability->GetAbilityLevel();	
	}

	/**
	 * Handles a projectile that has been launched by the ability.
	 */	
	static void HandleProjectileLaunched(UNinjaCombatGameplayAbility* Ability, AActor* Projectile)
	{
		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility == nullptr)
		{
			return;
		}
		
		if (ensure(IsValid(Projectile)))
		{
			const TSubclassOf<UGameplayEffect> RangedDamageEffect = GetProjectileGameplayEffectClass(Ability, Projectile);
			const float EffectLevel = GetProjectileGameplayEffectLevel(Ability, Projectile);
		
			if (IsValid(RangedDamageEffect))
			{
				FGameplayEffectSpecHandle Handle = Ability->MakeOutgoingGameplayEffectSpec(RangedDamageEffect, EffectLevel);
				if (Handle.IsValid())
				{
					Handle.Data.Get()->GetContext().AddInstigator(Ability->GetAvatarActorFromActorInfo(), Projectile);
					ApplyDamageValues(Ability, Projectile, Handle);
					ICombatProjectileInterface::Execute_SetImpactEffectHandle(Projectile, Handle);
				}
			}

			ICombatProjectileInterface::Execute_Launch(Projectile);
		}
	}

	/**
	 * Provides the Gameplay Effect class to be applied by this ability, on successful projectile impacts.
	 * It will obtain them in the following priority: Projectile > Ability.
	 */
	static TSubclassOf<UGameplayEffect> GetProjectileGameplayEffectClass(const UNinjaCombatGameplayAbility* Ability, const AActor* Projectile)
	{
		if (IsValid(Projectile) && Projectile->Implements<UCombatProjectileInterface>())
		{
			const TSubclassOf<UGameplayEffect> EffectClassOverride = ICombatProjectileInterface::Execute_GetImpactEffectClass(Projectile);
			if (IsValid(EffectClassOverride))
			{
				return EffectClassOverride;
			}
		}

		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility != nullptr)
		{
			return AttackAbility->GetProjectileDamageEffectClass();
		}
		
		return nullptr;
	}

	/**
	 * Provides the Gameplay Effect level to be applied by this ability, on successful projectile impacts.
	 * If the Projectile does not provide a level and neither the Ability, then the Ability Level is used.
	 */		
	static float GetProjectileGameplayEffectLevel(const UNinjaCombatGameplayAbility* Ability, const AActor* Projectile)
	{
		if (IsValid(Projectile) && Projectile->Implements<UCombatProjectileInterface>())
		{
			const float EffectLevel = ICombatProjectileInterface::Execute_GetImpactEffectLevel(Projectile);
			if (EffectLevel > 0.f)
			{
				return EffectLevel;
			}
		}

		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility != nullptr)
		{
			return AttackAbility->GetProjectileEffectLevel();
		}
		
		return Ability->GetAbilityLevel();
	}
	
	/**
	 * Applies additional (Caller By Magnitudes) data to a Gameplay Effect Handle Spec.
	 */
	static void ApplyDamageValues(const UNinjaCombatGameplayAbility* Ability, const AActor* DamageSource, const FGameplayEffectSpecHandle& SpecHandle)
	{
		const ICombatAttackAbilityInterface* AttackAbility = Cast<ICombatAttackAbilityInterface>(Ability);
		if (AttackAbility == nullptr)
		{
			return;
		}

		const int32 ComboCounter = AttackAbility->GetComboCount();
		static const FGameplayTag ComboCounterDataTag = Tag_Combat_Data_ComboCount.GetTag(); 
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(ComboCounterDataTag, ComboCounter);
	
		if (DamageSource->Implements<UCombatMeleeInterface>())
		{
			float Damage = 0.f;
			if (ICombatMeleeInterface::Execute_GetDamage(DamageSource, Damage))
			{
				static const FGameplayTag DamageDataTag = Tag_Combat_Data_Damage.GetTag(); 
				SpecHandle.Data.Get()->SetSetByCallerMagnitude(DamageDataTag, Damage);
			}

			float PoiseConsumption = 0.f;
			if (ICombatMeleeInterface::Execute_GetPoiseConsumption(DamageSource, PoiseConsumption))
			{
				static const FGameplayTag PoiseConsumptionDataTag = Tag_Combat_Data_PoiseDamage.GetTag(); 
				SpecHandle.Data.Get()->SetSetByCallerMagnitude(PoiseConsumptionDataTag, PoiseConsumption);
			}		
		}
		else if (DamageSource->Implements<UCombatProjectileInterface>())
		{
			float Damage = 0.f;
			if (ICombatProjectileInterface::Execute_GetDamage(DamageSource, Damage))
			{
				static const FGameplayTag DamageDataTag = Tag_Combat_Data_Damage.GetTag(); 
				SpecHandle.Data.Get()->SetSetByCallerMagnitude(DamageDataTag, Damage);
			}

			float PoiseConsumption = 0.f;
			if (ICombatProjectileInterface::Execute_GetPoiseConsumption(DamageSource, PoiseConsumption))
			{
				static const FGameplayTag PoiseConsumptionDataTag = Tag_Combat_Data_PoiseDamage.GetTag(); 
				SpecHandle.Data.Get()->SetSetByCallerMagnitude(PoiseConsumptionDataTag, PoiseConsumption);
			}
		}
	}
};