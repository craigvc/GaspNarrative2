// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Interfaces/CombatWeaponInterface.h"
#include "Interfaces/Components/CombatWeaponManagerInterface.h"

struct FNinjaCombatAnimNotifyHelpers
{
	/** Provides a weapon from a query. */
	static TScriptInterface<ICombatWeaponInterface> GetWeapon(const AActor* Owner, const FGameplayTagQuery& WeaponQuery)
	{
		const UActorComponent* WeaponManager = UNinjaCombatFunctionLibrary::GetWeaponManagerComponent(Owner);
		if (!UNinjaCombatFunctionLibrary::IsValidWeaponManagerComponent(WeaponManager))
		{
			#if !WITH_EDITOR
			// Only log this warning in the game. No point doing it in the animation editor.
			UE_LOG(LogNinjaCombat, Warning, TEXT("NinjaCombatAnimNotifyHelpers::GetWeapon: Unable to retrieve a Weapon Manager for %s!"), *GetNameSafe(Owner));
			#endif
			
			return nullptr;
		}
		
		return ICombatWeaponManagerInterface::Execute_GetWeapon(WeaponManager, WeaponQuery);
	}

	/** Broadcasts the event, with the appropriate payload. */
	static void BroadcastEvent(const AActor* Owner, const FGameplayTag& EventTag, const UObject* OptionalObject = nullptr)
	{
		FGameplayEventData Payload;
		Payload.EventTag = EventTag;
		Payload.Instigator = Owner;
		Payload.Target = Owner;
		Payload.OptionalObject = OptionalObject;

		UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
		if (IsValid(AbilityComponent))
		{
			AbilityComponent->HandleGameplayEvent(EventTag, &Payload);
		}
	}

	/** Applies a Gameplay Effect to the owner. */
	static FActiveGameplayEffectHandle ApplyGameplayEffectClass(const AActor* Owner, const TSubclassOf<UGameplayEffect>& EffectClass, const float Level = 1)
	{
		FActiveGameplayEffectHandle Handle;

		if (IsValid(EffectClass))
		{
			UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
			if (IsValid(AbilityComponent))
			{
				FGameplayEffectContextHandle ContextHandle = AbilityComponent->MakeEffectContext();
				ContextHandle.AddSourceObject(Owner);

				const FGameplayEffectSpecHandle SpecHandle = AbilityComponent->MakeOutgoingSpec(EffectClass, Level, ContextHandle);
				if (SpecHandle.IsValid())
				{
					Handle = AbilityComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
				}
			}
		}

		return Handle;
	}

	/** Removes a Gameplay Effect from the owner. */
	static void RemoveGameplayEffectClass(const AActor* Owner, const FActiveGameplayEffectHandle& Handle)
	{
		if (IsValid(Owner) && Handle.IsValid())
		{
			UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
			if (IsValid(AbilityComponent))
			{
				AbilityComponent->RemoveActiveGameplayEffect(Handle);
			}
		}
	}
};
