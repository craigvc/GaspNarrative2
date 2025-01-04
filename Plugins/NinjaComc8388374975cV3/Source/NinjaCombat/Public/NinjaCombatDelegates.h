// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "NinjaCombatDelegates.generated.h"

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCombatTargetChangedDelegate, UActorComponent*, TargetManager, const AActor*, NewCombatTarget, const AActor*, OldCombatTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCombatTargetChangedMCDelegate, UActorComponent*, TargetManager, const AActor*, NewCombatTarget, const AActor*, OldCombatTarget);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlockingStateChangedDelegate, UActorComponent*, DefenseManager, bool, bIsBlocking);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlockingStateChangedMCDelegate, UActorComponent*, DefenseManager, bool, bIsBlocking);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FInvulnerabilityStateChangedDelegate, UActorComponent*, DefenseManager, bool, bIsInvulnerable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInvulnerabilityStateChangedMCDelegate, UActorComponent*, DefenseManager, bool, bIsInvulnerable);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FStaggeredStateChangedDelegate, UActorComponent*, DamageManager, bool, bIsStaggered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStaggeredStateChangedMCDelegate, UActorComponent*, DamageManager, bool, bIsStaggered);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FComboTargetCountChangedDelegate, UActorComponent*, ComboManager, int32, TargetCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboTargetCountMCDelegate,UActorComponent*, ComboManager, int32, TargetCount);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FComboWindowChangedDelegate, UActorComponent*, ComboManager, bool, bInComboWindow);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboWindowChangedMCDelegate, UActorComponent*, ComboManager, bool, bInComboWindow);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FComboCountChangedDelegate, UActorComponent*, ComboManager, int32, ComboCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboCountChangedMCDelegate, UActorComponent*, ComboManager, int32, ComboCount);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FComboFinishedDelegate, UActorComponent*, ComboManager, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboFinishedMCDelegate, UActorComponent*, ComboManager, bool, bWasSuccessful);

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDamageReceivedDelegate, AActor*, Causer, AActor*, Target, const FDamageEntry&, DamageEntry);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDamageReceivedMCDelegate, AActor*, Causer, AActor*, Target, const FDamageEntry&, DamageEntry);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOwnerDiedDelegate, AActor*, Actor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOwnerDiedMCDelegate, AActor*, Actor);

DECLARE_DYNAMIC_DELEGATE(FCombatAnimationEventDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatAnimationEventMCDelegate);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackStartedMCDelegate, UNinjaCombatManagerComponent*, CombatManager, FGameplayTagContainer, AbilityTags, AActor*, CurrentTarget);

UCLASS()
class NINJACOMBAT_API UNinjaCombatDelegates : public UObject
{
	GENERATED_BODY()
};
