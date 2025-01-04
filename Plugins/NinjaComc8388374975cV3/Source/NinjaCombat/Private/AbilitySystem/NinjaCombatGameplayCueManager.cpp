// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaCombatGameplayCueManager.h"

#include "GameplayCueInterface.h"
#include "NinjaCombatFunctionLibrary.h"

bool UNinjaCombatGameplayCueManager::ShouldAsyncLoadRuntimeObjectLibraries() const
{
	return false;
}

void UNinjaCombatGameplayCueManager::RouteGameplayCue(AActor* TargetActor, const FGameplayTag GameplayCueTag,
	const EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters, const EGameplayCueExecutionOptions Options)
{
	// Don't handle gameplay cues when world is tearing down.
	if (IsValid(TargetActor->GetWorld()) && !TargetActor->GetWorld()->bIsTearingDown)
	{
		UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(TargetActor);
		if (IsValid(DamageManager) && DamageManager->Implements<UGameplayCueInterface>())
		{
			IGameplayCueInterface* GameplayCueInterface = !(Options & EGameplayCueExecutionOptions::IgnoreInterfaces) ? Cast<IGameplayCueInterface>(DamageManager) : nullptr;
			if (GameplayCueInterface && GameplayCueInterface->ShouldAcceptGameplayCue(TargetActor, GameplayCueTag, EventType, Parameters))
			{
				// Allow the Combat Manager to handle Gameplay Cues.
				GameplayCueInterface->HandleGameplayCue(DamageManager, GameplayCueTag, EventType, Parameters);
			}
		}
	}
    
	// Now allow the original implementation to execute as it will also perform the Net Update.
	Super::RouteGameplayCue(TargetActor, GameplayCueTag, EventType, Parameters, Options);
}
