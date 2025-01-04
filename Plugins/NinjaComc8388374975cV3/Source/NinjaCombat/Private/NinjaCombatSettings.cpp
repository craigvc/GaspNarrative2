// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaCombatSettings.h"

#include "AbilitySystem/Proxies/NinjaCombatAbilityActorInfoProxy.h"
#include "AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h"
#include "GameFramework/NinjaCombatMeleeScan.h"
#include "GameFramework/NinjaCombatProjectileRequest.h"
#include "GameFramework/NinjaCombatMarkerActor.h"

UNinjaCombatSettings::UNinjaCombatSettings()
{
	bEnableMotionWarpingByDefault = true;
	ActorInfoProxyClass = UNinjaCombatAbilityActorInfoProxy::StaticClass();
	EffectContextProxyClass = UNinjaCombatEffectContextProxy::StaticClass();
	
	bShouldAcquireNextTargetsAutomatically = true;
	bShouldLockOnTargetsFromMeleeAttacks = true;
	DefaultTargetLockActorClass = ANinjaCombatMarkerActor::StaticClass();
	
	MeleeScanChannel = ECC_Visibility;
	MeleeScanClass = UNinjaCombatMeleeScan::StaticClass();
	MeleeScanDebugDuration = 2.;

	ProjectileSocketName = TEXT("sProjectile");
	ProjectileChannel = ECC_Visibility;
	ProjectileRequestClass = UNinjaCombatProjectileRequest::StaticClass();
	
	DamageRegistrySize = 10;
}

const ICombatActorInfoProxyInterface* UNinjaCombatSettings::GetDefaultActorInfoProxy() const
{
	check(IsValid(ActorInfoProxyClass));
	const UObject* ProxyObject = GetDefault<UObject>(ActorInfoProxyClass);
	return Cast<ICombatActorInfoProxyInterface>(ProxyObject);
}

const ICombatEffectContextProxyInterface* UNinjaCombatSettings::GetDefaultEffectContextProxy() const
{
	check(IsValid(EffectContextProxyClass));
	const UObject* ProxyObject = GetDefault<UObject>(EffectContextProxyClass);
	return Cast<ICombatEffectContextProxyInterface>(ProxyObject);
}
