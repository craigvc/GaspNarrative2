// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_Damage.h"

#include "NinjaCombatDelegates.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

void UViewModel_Damage::BindToCombatSystem(AActor* Actor)
{
	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Actor);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
	{
		FDamageReceivedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleDamageReceived);
		ICombatDamageManagerInterface::Execute_BindToDamageReceivedDelegate(DamageComponent, Delegate);
	}
}

void UViewModel_Damage::UnbindFromCombatSystem(AActor* OldActor)
{
	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(OldActor);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
	{
		ICombatDamageManagerInterface::Execute_UnbindFromDamageReceivedDelegate(DamageComponent, this);
	}
}

void UViewModel_Damage::Reset()
{
	SetReceivedBlockingHit(false);
	SetReceivedBreakerHit(false);
	SetReceivedCriticalHit(false);
	SetReceivedFatalHit(false);
	SetReceivedStaggeringHit(false);
	SetLastDamageReceived(0.f);
}

void UViewModel_Damage::SetReceivedBlockingHit(const bool bNewValue)
{
	bReceivedBlockingHit = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bReceivedBlockingHit);			
}

void UViewModel_Damage::SetReceivedBreakerHit(const bool bNewValue)
{
	bReceivedBreakerHit = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bReceivedBreakerHit);		
}

void UViewModel_Damage::SetReceivedCriticalHit(const bool bNewValue)
{
	bReceivedCriticalHit = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bReceivedCriticalHit);	
}

void UViewModel_Damage::SetReceivedFatalHit(const bool bNewValue)
{
	bReceivedFatalHit = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bReceivedFatalHit);		
}

void UViewModel_Damage::SetReceivedStaggeringHit(const bool bNewValue)
{
	bReceivedStaggeringHit = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bReceivedStaggeringHit);	
}

void UViewModel_Damage::SetLastDamageReceived(const float NewValue)
{
	// We'll always broadcast the last damage received, so we are not using the macro
	// and instead just doing the entire process manually and always broadcasting it.
	//
	LastDamageReceived = NewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::LastDamageReceived);
}

void UViewModel_Damage::HandleDamageReceived(AActor* Causer, AActor* Target, const FDamageEntry& DamageEntry)
{
	const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
	check(Proxy != nullptr);

	const FGameplayEffectContext* EffectContext = DamageEntry.EffectContext.Get();
	const float NewDamage = Proxy->GetDamageApplied(EffectContext);
	SetLastDamageReceived(NewDamage);
	
	const bool bIncomingBlockedHit = DamageEntry.IsBlockedHit();
	SetReceivedBlockingHit(bIncomingBlockedHit);
	
	const bool bIncomingBreakerHit = DamageEntry.IsBreakerHit();
	SetReceivedBreakerHit(bIncomingBreakerHit);
	
	const bool bIncomingCriticalHit = DamageEntry.IsCriticalHit();
	SetReceivedCriticalHit(bIncomingCriticalHit);
	
	const bool bIncomingFatalHit = DamageEntry.IsFatalHit();
	SetReceivedFatalHit(bIncomingFatalHit);
	
	const bool bIncomingStaggeringHit = DamageEntry.IsStaggeringHit();
	SetReceivedStaggeringHit(bIncomingStaggeringHit);
}
