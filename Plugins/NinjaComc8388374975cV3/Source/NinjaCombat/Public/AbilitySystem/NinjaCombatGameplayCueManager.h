// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayCueManager.h"
#include "NinjaCombatGameplayCueManager.generated.h"

/**
 * Makes the default Cue Manager aware of the Combat Component for handling Cues.
 *
 * This must be added to the project's configuration class, in the DefaultGame.ini file.
 * 
 * <pre>
 * [/Script/GameplayAbilities.AbilitySystemGlobals]
 * GlobalGameplayCueManagerClass="/Script/NinjaCombat.NinjaCombatGameplayCueManager"
 * </pre>
 *
 * Also, while you are there, make sure to configure the Gameplay Cue path, so the system
 * won't scan the entire project, potentially slowing down the whole thing (same category).
 *
 * <pre>
 * [/Script/GameplayAbilities.AbilitySystemGlobals]
 * GameplayCueNotifyPaths="/Game/Cues"
 * </pre>
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatGameplayCueManager : public UGameplayCueManager
{
	
	GENERATED_BODY()

public:

	// -- Begin Gameplay Cue Manager implementation
	virtual bool ShouldAsyncLoadRuntimeObjectLibraries() const override;
	virtual void RouteGameplayCue(AActor* TargetActor, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters, EGameplayCueExecutionOptions Options) override;
	// -- End Gameplay Cue Manager implementation	
	
};
